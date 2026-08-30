#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_06AF4F2D74642704_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x1A0C2CE0)
#define CLASS_3_06AF4F2D74642704_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x1A0C2E80)
#define CLASS_3_06AF4F2D74642704_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A0C2D60)
#define CLASS_3_06AF4F2D74642704__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C2ED0)

inline static constexpr unsigned int Class_3_06AF4F2D74642704_TypeDefinitionIndex = 65912;

class Class_3_06AF4F2D74642704 : public ::Class_2_980BB27C20DEC196
{
public:
	::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x28
	::UnityEngine::Vector2Int PECPBEOHOJC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06AF4F2D74642704__CTOR_OFFSET))(this);
	}

	static ::Class_3_06AF4F2D74642704* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_06AF4F2D74642704*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_06AF4F2D74642704_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06AF4F2D74642704_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06AF4F2D74642704_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
