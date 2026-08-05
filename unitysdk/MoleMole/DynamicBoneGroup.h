#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class DynamicBoneConfigV2;
class DynamicBoneV2;
class DynamicBoneV2_TransformConfig;
class DynamicBoneV2_UpdateConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_DYNAMICBONEGROUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B57BA40)
#define MOLEMOLE_DYNAMICBONEGROUP_EMPTY_OFFSET UNITYSDK_OFFSET(0x1B57BC10)
#define MOLEMOLE_DYNAMICBONEGROUP_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x1B57BD20)
#define MOLEMOLE_DYNAMICBONEGROUP_MANUALFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1B57C530)
#define MOLEMOLE_DYNAMICBONEGROUP_MANUALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B57C720)
#define MOLEMOLE_DYNAMICBONEGROUP_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1B57C6B0)
#define MOLEMOLE_DYNAMICBONEGROUP_MANUALWAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1B57C610)
#define MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1B57C970)
#define MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x1B57C340)
#define MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1B57BB70)
#define MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1B57C4B0)
#define MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_3DD9CDD21849C79E_OFFSET UNITYSDK_OFFSET(0x1B57BAC0)
#define MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1B57CE60)
#define MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x1B57C830)
#define MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_C6A2F37261C7C003_OFFSET UNITYSDK_OFFSET(0x1B57C020)
#define MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_D9F5295DDC8EAB8A_OFFSET UNITYSDK_OFFSET(0x1B57CC30)
#define MOLEMOLE_DYNAMICBONEGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B57C110)
#define MOLEMOLE_DYNAMICBONEGROUP_ONDYNAMICBONEDATAREADY_OFFSET UNITYSDK_OFFSET(0x1B57CA20)
#define MOLEMOLE_DYNAMICBONEGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B57BE50)
#define MOLEMOLE_DYNAMICBONEGROUP_START_OFFSET UNITYSDK_OFFSET(0x1B57BB10)
#define MOLEMOLE_DYNAMICBONEGROUP_SWITCHLOD_OFFSET UNITYSDK_OFFSET(0x1B57C7C0)
#define MOLEMOLE_DYNAMICBONEGROUP_TRYSYNCTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1B57C3E0)
#define MOLEMOLE_DYNAMICBONEGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B57CB90)
#define MOLEMOLE_DYNAMICBONEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B57CAF0)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicBoneGroup_TypeDefinitionIndex = 62211;

	class DynamicBoneGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicBoneGroup*>** StaticGet_Field_5_10()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicBoneGroup*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicBoneGroup_TypeDefinitionIndex)->GetStaticField(0x4D520);
		}
		::System::Boolean Field_5_2; // 0x18
		::System::Boolean Field_5_1; // 0x19
		::Il2CppArray<::DynamicBoneV2*>* dynamicBones; // 0x20
		::Il2CppArray<::DynamicBoneV2_TransformConfig*>* transformConfigs; // 0x28
		::System::String* configKey; // 0x30
		::DynamicBoneConfigV2* config; // 0x38
		::DynamicBoneV2_UpdateConfig* updateConfig; // 0x40
		::System::Single timescale; // 0x48
		::System::Boolean Field_5_9; // 0x4C
		::System::Boolean Field_5_8; // 0x4D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_START_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_EMPTY_OFFSET))();
		}

		static ::MoleMole::DynamicBoneGroup* GetComponentSafely(::System::Int32 a1)
		{
			return ((::MoleMole::DynamicBoneGroup*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_ONDISABLE_OFFSET))(this);
		}

		::System::Void TrySyncTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_TRYSYNCTIMESCALE_OFFSET))(this, a1);
		}

		::System::Void ManualFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_MANUALFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void ManualWaitForFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_MANUALWAITFORFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void ManualLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_MANUALLATEUPDATE_OFFSET))(this);
		}

		static ::System::Void SwitchLOD(::MoleMole::DynamicBoneGroup* a1, ::MoleMole::DynamicBoneGroup* a2)
		{
			return ((::System::Void(*)(::MoleMole::DynamicBoneGroup*, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_SWITCHLOD_OFFSET))(a1, a2);
		}

		::System::Void OnDynamicBoneDataReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_ONDYNAMICBONEDATAREADY_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_5_C6A2F37261C7C003()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_C6A2F37261C7C003_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_151E25A63D14DDB0_1_OFFSET))(this);
		}

		::System::Boolean Method_5_D9F5295DDC8EAB8A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_D9F5295DDC8EAB8A_OFFSET))(this);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_5_85377D41FEE05B66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_85377D41FEE05B66_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void Method_5_3DD9CDD21849C79E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_METHOD_5_3DD9CDD21849C79E_OFFSET))(this);
		}
	};
}
