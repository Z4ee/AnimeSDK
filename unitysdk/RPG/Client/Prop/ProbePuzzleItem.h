#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_2_01F4079471966D8C;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0x1663B250)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_METHOD_5_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x1663B8A0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_METHOD_5_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1663B850)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1663BA80)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1663B970)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETDISTANCELV_OFFSET UNITYSDK_OFFSET(0x1663B000)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATERATIO_OFFSET UNITYSDK_OFFSET(0x1663B1F0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATETARGETATCONSTANTSPEED_OFFSET UNITYSDK_OFFSET(0x1663B480)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETSCANCALLBACK_OFFSET UNITYSDK_OFFSET(0x1663AFB0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASUREFIND_OFFSET UNITYSDK_OFFSET(0x1663B0B0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASURE_OFFSET UNITYSDK_OFFSET(0x1663B6D0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERDISAPPEAR_OFFSET UNITYSDK_OFFSET(0x16638930)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERSCAN_OFFSET UNITYSDK_OFFSET(0x1663B150)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1663B720)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1663BBA0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1663BB90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ProbePuzzleItem_TypeDefinitionIndex = 78308;

	class ProbePuzzleItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_CJBKIMGOPOK()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x648F0);
		}
		static ::System::String** StaticGet_EFLNDNGCCGN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x648F8);
		}
		static ::System::String** StaticGet_LNDCCOAHLEN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x64900);
		}
		static ::System::String** StaticGet_GCJJAOGJPFG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x64908);
		}
		::System::Single _rotateRatio; // 0x18
		::UnityEngine::Transform* AIALICECJOJ; // 0x20
		::Class_2_01F4079471966D8C* NAHOHKAHBPK; // 0x28
		::System::Action_1<::System::Single>* LNBDGMFCHAP; // 0x30
		::UnityEngine::Quaternion KICIGEMOJKB; // 0x38
		::UnityEngine::Quaternion LEEFKBFPEHL; // 0x48
		::System::Single DCNOGDMDJGF; // 0x58
		::System::Single DJIKPFCFAPO; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM__CCTOR_OFFSET))();
		}

		::System::Void Init(::Class_2_01F4079471966D8C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_01F4079471966D8C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_INIT_OFFSET))(this, a1);
		}

		::System::Void SetTreasure(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASURE_OFFSET))(this, a1);
		}

		::System::Void SetRotateRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATERATIO_OFFSET))(this, a1);
		}

		::System::Void SetTreasureFind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASUREFIND_OFFSET))(this);
		}

		::System::Void SetTriggerScan()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERSCAN_OFFSET))(this);
		}

		::System::Void SetTriggerDisappear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERDISAPPEAR_OFFSET))(this);
		}

		::System::Void SetDistanceLv(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETDISTANCELV_OFFSET))(this, a1);
		}

		::System::Void SetRotateTargetAtConstantSpeed(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATETARGETATCONSTANTSPEED_OFFSET))(this, a1, a2);
		}

		::System::Void SetScanCallBack(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETSCANCALLBACK_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_7DD84EAFF333A1E4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_METHOD_5_7DD84EAFF333A1E4_OFFSET))(this, a1);
		}

		::System::Void Method_5_022B0D58A3077BF2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_METHOD_5_022B0D58A3077BF2_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONDISABLE_OFFSET))(this);
		}
	};
}
