#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_9038145D85E9F490_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x164B6590)
#define CLASS_3_9038145D85E9F490_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x164B6680)
#define CLASS_3_9038145D85E9F490_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x164B6610)
#define CLASS_3_9038145D85E9F490__CTOR_OFFSET UNITYSDK_OFFSET(0x164B66E0)

inline static constexpr unsigned int Class_3_9038145D85E9F490_TypeDefinitionIndex = 65916;

class Class_3_9038145D85E9F490 : public ::Class_2_980BB27C20DEC196
{
public:
	::System::UInt32 KLOEJIMMPJM; // 0x28
	::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x2C
	::System::UInt32 MNDFOPKBHKP; // 0x30
	::UnityEngine::Vector2 GMDBHJKEAEI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9038145D85E9F490__CTOR_OFFSET))(this);
	}

	static ::Class_3_9038145D85E9F490* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_9038145D85E9F490*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_9038145D85E9F490_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9038145D85E9F490_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9038145D85E9F490_ONCLEAR_OFFSET))(this);
	}
};
