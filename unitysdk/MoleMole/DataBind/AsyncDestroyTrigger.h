#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_135;
class Class_1_31B7AED3AFE3150D;

#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D925850)
#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_GET_AUTODISPOSEPOOL_OFFSET UNITYSDK_OFFSET(0x1D925680)
#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D925890)
#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9258F0)

namespace MoleMole::DataBind
{
	inline static constexpr unsigned int AsyncDestroyTrigger_TypeDefinitionIndex = 35252;

	class AsyncDestroyTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_2; // 0x18
		::System::Boolean Field_5_1; // 0x19
		::Class_1_31B7AED3AFE3150D* Field_5_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_135* get_AutoDisposePool()
		{
			return ((::Class_0_16E4307DCC419505_135*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_GET_AUTODISPOSEPOOL_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_ONDESTROY_OFFSET))(this);
		}
	};
}
