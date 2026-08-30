#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/AlchemyLogicType.h"
#include "unitysdk/RPG/Client/Prop/AlchemyType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CommonEffectMaterialBlock; }
namespace RPG::Client::Prop { class AlchemyPuzzleBoard; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ALCHEMYITEM_ANIMCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xDBD0FA0)
#define RPG_CLIENT_PROP_ALCHEMYITEM_CHANGEMAXVALUE_OFFSET UNITYSDK_OFFSET(0xDBD0BC0)
#define RPG_CLIENT_PROP_ALCHEMYITEM_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xDBD0E00)
#define RPG_CLIENT_PROP_ALCHEMYITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBD06D0)
#define RPG_CLIENT_PROP_ALCHEMYITEM_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xDBD1480)
#define RPG_CLIENT_PROP_ALCHEMYITEM_GET_LOGICCOLORTYPE_OFFSET UNITYSDK_OFFSET(0xDBD1460)
#define RPG_CLIENT_PROP_ALCHEMYITEM_INIT_OFFSET UNITYSDK_OFFSET(0xDBD0730)
#define RPG_CLIENT_PROP_ALCHEMYITEM_METHOD_5_5BD7124724445BA9_OFFSET UNITYSDK_OFFSET(0xDBD1070)
#define RPG_CLIENT_PROP_ALCHEMYITEM_METHOD_5_A60933A46248448C_OFFSET UNITYSDK_OFFSET(0xDBD13A0)
#define RPG_CLIENT_PROP_ALCHEMYITEM_METHOD_5_DF1C0FC46B60C2C9_OFFSET UNITYSDK_OFFSET(0xDBD1340)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SETMUSKCANSELECT_OFFSET UNITYSDK_OFFSET(0xDBD1280)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SETMUSKDEFAULT_OFFSET UNITYSDK_OFFSET(0xDBD11C0)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SETMUSKSELECTED_OFFSET UNITYSDK_OFFSET(0xDBD1100)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xDBD1490)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SET_LOGICCOLORTYPE_OFFSET UNITYSDK_OFFSET(0xDBD1470)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SYNCDEFAULTSIZE_OFFSET UNITYSDK_OFFSET(0xDBD0B40)
#define RPG_CLIENT_PROP_ALCHEMYITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xDBD14B0)
#define RPG_CLIENT_PROP_ALCHEMYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDBD14A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AlchemyItem_TypeDefinitionIndex = 77728;

	class AlchemyItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_PDICBIJLKEB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlchemyItem_TypeDefinitionIndex)->GetStaticField(0x14060);
		}
		static ::System::Int32* StaticGet_FBJCPADMHME()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlchemyItem_TypeDefinitionIndex)->GetStaticField(0x14064);
		}
		static ::System::Int32* StaticGet_CIILOGNKIDO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlchemyItem_TypeDefinitionIndex)->GetStaticField(0x14068);
		}
		::System::Int32 MaxValue; // 0x18
		::System::Int32 InitValue; // 0x1C
		::RPG::Client::Prop::AlchemyType ColorType; // 0x20
		::System::Boolean IsTarget; // 0x24
		::UnityEngine::Transform* Liquid; // 0x28
		::UnityEngine::Transform* Musk; // 0x30
		::RPG::Client::Prop::AlchemyLogicType _LogicColorType_k__BackingField; // 0x38
		::System::Int32 _CurrentValue_k__BackingField; // 0x3C
		::UnityEngine::Transform* GMIHCNJFHKC; // 0x40
		::System::Single NCOEONEPEEL; // 0x48
		::UnityEngine::Vector3 DKEKPBLBNGB; // 0x4C
		::UnityEngine::Vector3 HAKDFFPOCBO; // 0x58
		::UnityEngine::Vector3 BIHHFNBJPHP; // 0x64
		::RPG::Client::Prop::AlchemyPuzzleBoard* COAMCKILKPH; // 0x70
		::RPG::Client::CommonEffectMaterialBlock* MIINHOECFJK; // 0x78
		::UnityEngine::Animator* MNEIKEBFBPL; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::AlchemyPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AlchemyPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_INIT_OFFSET))(this, a1);
		}

		::System::Void SyncDefaultSize(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_SYNCDEFAULTSIZE_OFFSET))(this, a1, a2);
		}

		::System::Void ChangeMaxValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_CHANGEMAXVALUE_OFFSET))(this);
		}

		::System::Void ChangeValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_CHANGEVALUE_OFFSET))(this, a1);
		}

		::System::Void AnimChangeValue(::System::Int32 a1, ::RPG::Client::Prop::AlchemyLogicType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::Prop::AlchemyLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_ANIMCHANGEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetMuskSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_SETMUSKSELECTED_OFFSET))(this);
		}

		::System::Void SetMuskDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_SETMUSKDEFAULT_OFFSET))(this);
		}

		::System::Void SetMuskCanSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_SETMUSKCANSELECT_OFFSET))(this);
		}

		::System::Void Method_5_DF1C0FC46B60C2C9(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_METHOD_5_DF1C0FC46B60C2C9_OFFSET))(this, a1);
		}

		::UnityEngine::Color Method_5_A60933A46248448C(::RPG::Client::Prop::AlchemyLogicType a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::RPG::Client::Prop::AlchemyLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_METHOD_5_A60933A46248448C_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_5_5BD7124724445BA9(::System::Int32 a1, ::RPG::Client::Prop::AlchemyLogicType a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::RPG::Client::Prop::AlchemyLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_METHOD_5_5BD7124724445BA9_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::AlchemyLogicType get_LogicColorType()
		{
			return ((::RPG::Client::Prop::AlchemyLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_GET_LOGICCOLORTYPE_OFFSET))(this);
		}

		::System::Void set_LogicColorType(::RPG::Client::Prop::AlchemyLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AlchemyLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_SET_LOGICCOLORTYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ALCHEMYITEM_SET_CURRENTVALUE_OFFSET))(this, a1);
		}
	};
}
