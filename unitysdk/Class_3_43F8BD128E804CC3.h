#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_39.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceTalkBubbleMonoView; }

#define CLASS_3_43F8BD128E804CC3_METHOD_3_DB549928E9497557_OFFSET UNITYSDK_OFFSET(0xE5CD350)
#define CLASS_3_43F8BD128E804CC3_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xE5CD590)
#define CLASS_3_43F8BD128E804CC3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xE5CD3F0)
#define CLASS_3_43F8BD128E804CC3__CTOR_OFFSET UNITYSDK_OFFSET(0xE5CD610)

inline static constexpr unsigned int Class_3_43F8BD128E804CC3_TypeDefinitionIndex = 77698;

class Class_3_43F8BD128E804CC3 : public ::Class_2_A48F3719AA1CF200_39
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* OFHPEPANKAL; // 0x20
	::System::Boolean FMNEEONAMNO; // 0x28
	::RPG::Client::TextID DIDPADKMCAL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43F8BD128E804CC3__CTOR_OFFSET))(this);
	}

	static ::Class_3_43F8BD128E804CC3* Method_3_DB549928E9497557(::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView* a1, ::System::Boolean a2, ::RPG::Client::TextID a3)
	{
		return ((::Class_3_43F8BD128E804CC3*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceTalkBubbleMonoView*, ::System::Boolean, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_3_43F8BD128E804CC3_METHOD_3_DB549928E9497557_OFFSET))(a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43F8BD128E804CC3_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43F8BD128E804CC3_ONCLEAR_OFFSET))(this);
	}
};
