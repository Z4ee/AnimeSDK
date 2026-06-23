#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_139;
class Class_1_2F3F220A3374AA4F;

#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C928C00)
#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_GET_AUTODISPOSEPOOL_OFFSET UNITYSDK_OFFSET(0x1C924DA0)
#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C928C40)
#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C928CA0)

namespace MoleMole::DataBind
{
	inline static constexpr unsigned int AsyncDestroyTrigger_TypeDefinitionIndex = 34531;

	class AsyncDestroyTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::System::Boolean Field_5_1; // 0x19
		::Class_1_2F3F220A3374AA4F* Field_5_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_139* get_AutoDisposePool()
		{
			return ((::Class_0_16E4307DCC419505_139*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_GET_AUTODISPOSEPOOL_OFFSET))(this);
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
