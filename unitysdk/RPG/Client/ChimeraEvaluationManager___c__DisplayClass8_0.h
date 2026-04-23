#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraEvaluationData; }

#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA027CD0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER___C__DISPLAYCLASS8_0__GETEVALUATIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA028650)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEvaluationManager___c__DisplayClass8_0_TypeDefinitionIndex = 58500;

	class ChimeraEvaluationManager___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 evaluationID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEvaluationData_b__0(::RPG::Client::ChimeraEvaluationData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraEvaluationData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER___C__DISPLAYCLASS8_0__GETEVALUATIONDATA_B__0_OFFSET))(this, data);
		}
	};
}
