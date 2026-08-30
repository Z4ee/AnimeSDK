#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_491;

#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ACFEED0)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1ACFFB00)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1ACFFAF0)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1AD00090)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_METHOD_5_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x1ACFFD50)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1ACFF130)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_METHOD_5_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x1ACFF050)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_PROCESS_OFFSET UNITYSDK_OFFSET(0x1ACFEF10)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_RPG_CLIENT_IPOOLABLECOMPONENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1ACFFC70)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_RPG_CLIENT_IPOOLABLECOMPONENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1ACFFC30)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1ACFFCC0)
#define RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD00220)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoParentTransformDecouple_TypeDefinitionIndex = 68579;

	class MonoParentTransformDecouple : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean DecouplePositionX; // 0x18
		::System::Boolean DecouplePositionY; // 0x19
		::System::Boolean DecouplePositionZ; // 0x1A
		::System::Boolean DecoupleRoationX; // 0x1B
		::System::Boolean DecoupleRoationY; // 0x1C
		::System::Boolean DecoupleRoationZ; // 0x1D
		::System::Single JOGJOKJICKP; // 0x20
		::System::Boolean MHEAIOMEGCA; // 0x24
		::UnityEngine::Vector3 FMEFHCHJOLP; // 0x28
		::UnityEngine::Quaternion GECCGPMGGHJ; // 0x34
		::System::Single KCLBCNGCLHJ; // 0x44
		::System::Single HJKJOLPBAOO; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_CLEAR_OFFSET))(this);
		}

		::System::Void Process(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_PROCESS_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Int32 CompareTo(::Class_0_16E4307DCC419505_491* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_491*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_IPoolableComponent_Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_RPG_CLIENT_IPOOLABLECOMPONENT_SPAWNED_OFFSET))(this);
		}

		::System::Void RPG_Client_IPoolableComponent_Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_RPG_CLIENT_IPOOLABLECOMPONENT_DESPAWNED_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_SETENABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_39590AB2089F9F4D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_METHOD_5_39590AB2089F9F4D_OFFSET))(this, a1);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_METHOD_5_33ACA6CB2ABC73F7_1_OFFSET))(this);
		}

		::System::Void Method_5_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPARENTTRANSFORMDECOUPLE_METHOD_5_30D1209326FA87FC_OFFSET))(this);
		}
	};
}
