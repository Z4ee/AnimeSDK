#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ECurveObjectLogicState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1020;
namespace RPG::Client { class MonoCurveObjectLogic_Load; }

#define RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_METHOD_1_4DA6D4A624E42CAB_1_OFFSET UNITYSDK_OFFSET(0xD73C5F0)
#define RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xD73C4A0)
#define RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0xD73C550)
#define RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0xD73C6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovableObjectLogic_TypeDefinitionIndex = 68505;

	class MonoCurveMovableObjectLogic : public ::System::Object
	{
	public:
		::RPG::GameCore::ECurveObjectLogicState state; // 0x10
		::RPG::Client::MonoCurveObjectLogic_Load* load; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_4DA6D4A624E42CAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
		}

		::System::Boolean Method_1_4DA6D4A624E42CAB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_METHOD_1_4DA6D4A624E42CAB_1_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1020* Method_1_D41F2EAAA87E2BFD()
		{
			return ((::Class_0_16E4307DCC419505_1020*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEOBJECTLOGIC_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
		}
	};
}
