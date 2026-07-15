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

#define RPG_CLIENT_PROP_ALCHEMYITEM_ANIMCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x193AF220)
#define RPG_CLIENT_PROP_ALCHEMYITEM_CHANGEMAXVALUE_OFFSET UNITYSDK_OFFSET(0x193AEE40)
#define RPG_CLIENT_PROP_ALCHEMYITEM_CHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x193AF080)
#define RPG_CLIENT_PROP_ALCHEMYITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193AE950)
#define RPG_CLIENT_PROP_ALCHEMYITEM_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x193AF700)
#define RPG_CLIENT_PROP_ALCHEMYITEM_GET_LOGICCOLORTYPE_OFFSET UNITYSDK_OFFSET(0x193AF6E0)
#define RPG_CLIENT_PROP_ALCHEMYITEM_INIT_OFFSET UNITYSDK_OFFSET(0x193AE9B0)
#define RPG_CLIENT_PROP_ALCHEMYITEM_METHOD_5_5BD7124724445BA9_OFFSET UNITYSDK_OFFSET(0x193AF2F0)
#define RPG_CLIENT_PROP_ALCHEMYITEM_METHOD_5_A60933A46248448C_OFFSET UNITYSDK_OFFSET(0x193AF620)
#define RPG_CLIENT_PROP_ALCHEMYITEM_METHOD_5_DF1C0FC46B60C2C9_OFFSET UNITYSDK_OFFSET(0x193AF5C0)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SETMUSKCANSELECT_OFFSET UNITYSDK_OFFSET(0x193AF500)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SETMUSKDEFAULT_OFFSET UNITYSDK_OFFSET(0x193AF440)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SETMUSKSELECTED_OFFSET UNITYSDK_OFFSET(0x193AF380)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x193AF710)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SET_LOGICCOLORTYPE_OFFSET UNITYSDK_OFFSET(0x193AF6F0)
#define RPG_CLIENT_PROP_ALCHEMYITEM_SYNCDEFAULTSIZE_OFFSET UNITYSDK_OFFSET(0x193AEDC0)
#define RPG_CLIENT_PROP_ALCHEMYITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x193AF730)
#define RPG_CLIENT_PROP_ALCHEMYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x193AF720)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AlchemyItem_TypeDefinitionIndex = 74243;

	class AlchemyItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlchemyItem_TypeDefinitionIndex)->GetStaticField(0x14490);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlchemyItem_TypeDefinitionIndex)->GetStaticField(0x14494);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlchemyItem_TypeDefinitionIndex)->GetStaticField(0x14498);
		}
		::System::Int32 MaxValue; // 0x18
		::System::Int32 InitValue; // 0x1C
		::RPG::Client::Prop::AlchemyType ColorType; // 0x20
		::System::Boolean IsTarget; // 0x24
		::UnityEngine::Transform* Liquid; // 0x28
		::UnityEngine::Transform* Musk; // 0x30
		::RPG::Client::Prop::AlchemyLogicType _LogicColorType_k__BackingField; // 0x38
		::System::Int32 _CurrentValue_k__BackingField; // 0x3C
		::UnityEngine::Transform* Field_5_11; // 0x40
		::System::Single Field_5_12; // 0x48
		::UnityEngine::Vector3 Field_5_13; // 0x4C
		::UnityEngine::Vector3 Field_5_14; // 0x58
		::UnityEngine::Vector3 Field_5_15; // 0x64
		::RPG::Client::Prop::AlchemyPuzzleBoard* Field_5_16; // 0x70
		::RPG::Client::CommonEffectMaterialBlock* Field_5_17; // 0x78
		::UnityEngine::Animator* Field_5_18; // 0x80

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
