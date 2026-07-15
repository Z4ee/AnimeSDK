#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSETUPSCALEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A37E8C0)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardSetupScaleParams_TypeDefinitionIndex = 75845;

	class CaseBoardSetupScaleParams : public ::System::Object
	{
	public:
		::System::Single Scale; // 0x10
		::System::Single Duration; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDSETUPSCALEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
