#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2D2D4A639FB13B87;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_A3B6E3101528C82F_METHOD_3_D0B0E8495E8A13B8_OFFSET UNITYSDK_OFFSET(0xC035910)
#define CLASS_3_A3B6E3101528C82F_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0xC035E10)
#define CLASS_3_A3B6E3101528C82F_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xC0359A0)
#define CLASS_3_A3B6E3101528C82F_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC035A30)
#define CLASS_3_A3B6E3101528C82F__CTOR_OFFSET UNITYSDK_OFFSET(0xC035E60)

inline static constexpr unsigned int Class_3_A3B6E3101528C82F_TypeDefinitionIndex = 65904;

class Class_3_A3B6E3101528C82F : public ::Class_2_980BB27C20DEC196
{
public:
	// static const ::System::Single JCENJMALKBB; // 0x0
	::Class_1_2D2D4A639FB13B87* HNEBOCDHJGF; // 0x28
	::UnityEngine::Vector2 ICGKFDEILKA; // 0x30
	::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x38
	::System::UInt32 AOCLHNKNJHM; // 0x3C

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
