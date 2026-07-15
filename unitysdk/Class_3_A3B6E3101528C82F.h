#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2D2D4A639FB13B87;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_A3B6E3101528C82F_METHOD_3_D0B0E8495E8A13B8_OFFSET UNITYSDK_OFFSET(0x14E68720)
#define CLASS_3_A3B6E3101528C82F_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x14E68C20)
#define CLASS_3_A3B6E3101528C82F_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x14E687B0)
#define CLASS_3_A3B6E3101528C82F_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x14E68840)
#define CLASS_3_A3B6E3101528C82F__CTOR_OFFSET UNITYSDK_OFFSET(0x14E68C70)

inline static constexpr unsigned int Class_3_A3B6E3101528C82F_TypeDefinitionIndex = 62919;

class Class_3_A3B6E3101528C82F : public ::Class_2_980BB27C20DEC196
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	::Class_1_2D2D4A639FB13B87* Field_3_1; // 0x28
	::RPG::Client::LittleGame::Match3::OpponentRole Field_3_2; // 0x30
	::UnityEngine::Vector2 Field_3_3; // 0x34
	::System::UInt32 Field_3_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F__CTOR_OFFSET))(this);
	}

	static ::Class_3_A3B6E3101528C82F* Method_3_D0B0E8495E8A13B8(::RPG::Client::MatchThreeBoard* a1, ::Class_1_2D2D4A639FB13B87* a2)
	{
		return ((::Class_3_A3B6E3101528C82F*(*)(::RPG::Client::MatchThreeBoard*, ::Class_1_2D2D4A639FB13B87*))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F_METHOD_3_D0B0E8495E8A13B8_OFFSET))(a1, a2);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3B6E3101528C82F_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
