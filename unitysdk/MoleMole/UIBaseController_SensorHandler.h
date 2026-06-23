#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B9D4232CE6441715_Struct_2_CF1754DDA8B382D4.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_139;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBASECONTROLLER_SENSORHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175B6B50)
#define MOLEMOLE_UIBASECONTROLLER_SENSORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175B6AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_SensorHandler_TypeDefinitionIndex = 76185;

	class UIBaseController_SensorHandler : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_B9D4232CE6441715_Struct_2_CF1754DDA8B382D4>* Handlers; // 0x10

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER_SENSORHANDLER__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER_SENSORHANDLER_DISPOSE_OFFSET))(this);
		}
	};
}
