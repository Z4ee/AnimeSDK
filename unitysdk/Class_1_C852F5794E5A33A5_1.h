#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5C8F237BF51192A7;
class Class_1_6417078E6DA36F89;
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }

#define CLASS_1_C852F5794E5A33A5_1_METHOD_1_EEFF76A4A86AD370_OFFSET UNITYSDK_OFFSET(0xC110750)
#define CLASS_1_C852F5794E5A33A5_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC1106A0)

inline static constexpr unsigned int Class_1_C852F5794E5A33A5_1_TypeDefinitionIndex = 79493;

class Class_1_C852F5794E5A33A5_1 : public ::System::Object
{
public:
	::Class_1_5C8F237BF51192A7* JOMBMDBLMDI; // 0x10
	::Class_1_6417078E6DA36F89* HEJEGOGBFMP; // 0x18

	::System::Void _ctor(::Class_1_5C8F237BF51192A7* a1, ::Class_1_6417078E6DA36F89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C8F237BF51192A7*, ::Class_1_6417078E6DA36F89*))((::PBYTE)hIl2Cpp + CLASS_1_C852F5794E5A33A5_1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::FateRin::CaseBoard::TeamViewModel* Method_1_EEFF76A4A86AD370(::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a1)
	{
		return ((::RPG::Client::FateRin::CaseBoard::TeamViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C852F5794E5A33A5_1_METHOD_1_EEFF76A4A86AD370_OFFSET))(this, a1);
	}
};
