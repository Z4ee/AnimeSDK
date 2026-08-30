#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CLASS_2_B072CBF6C94C439B_CLEAR_OFFSET UNITYSDK_OFFSET(0xB93B850)
#define CLASS_2_B072CBF6C94C439B_METHOD_2_936773021FAF4D21_OFFSET UNITYSDK_OFFSET(0xB93BA40)
#define CLASS_2_B072CBF6C94C439B_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0xB93B7E0)
#define CLASS_2_B072CBF6C94C439B_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB93B940)
#define CLASS_2_B072CBF6C94C439B__CTOR_OFFSET UNITYSDK_OFFSET(0xB93BB30)

inline static constexpr unsigned int Class_2_B072CBF6C94C439B_TypeDefinitionIndex = 65943;

class Class_2_B072CBF6C94C439B : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* HPINJBJLCBB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B072CBF6C94C439B__CTOR_OFFSET))(this);
	}

	static ::Class_2_B072CBF6C94C439B* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_B072CBF6C94C439B*(*)())((::PBYTE)hIl2Cpp + CLASS_2_B072CBF6C94C439B_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B072CBF6C94C439B_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B072CBF6C94C439B_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_936773021FAF4D21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B072CBF6C94C439B_METHOD_2_936773021FAF4D21_OFFSET))(this);
	}
};
