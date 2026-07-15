#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CLASS_2_D4E9A50099D39D39_CLEAR_OFFSET UNITYSDK_OFFSET(0x18AF6420)
#define CLASS_2_D4E9A50099D39D39_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x18AF64E0)
#define CLASS_2_D4E9A50099D39D39_METHOD_2_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x18AF6570)
#define CLASS_2_D4E9A50099D39D39_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x18AF63B0)
#define CLASS_2_D4E9A50099D39D39_METHOD_2_FA4F0A278F440490_OFFSET UNITYSDK_OFFSET(0x18AF66E0)
#define CLASS_2_D4E9A50099D39D39_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x18AF6480)
#define CLASS_2_D4E9A50099D39D39__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF67A0)

inline static constexpr unsigned int Class_2_D4E9A50099D39D39_TypeDefinitionIndex = 62933;

class Class_2_D4E9A50099D39D39 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* Field_2_0; // 0x20
	::System::UInt32 Field_2_1; // 0x28
	::RPG::Client::LittleGame::Match3::OpponentRole Field_2_2; // 0x2C
	::System::Boolean Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x31
	::System::UInt32 Field_2_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4E9A50099D39D39__CTOR_OFFSET))(this);
	}

	static ::Class_2_D4E9A50099D39D39* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_D4E9A50099D39D39*(*)())((::PBYTE)hIl2Cpp + CLASS_2_D4E9A50099D39D39_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4E9A50099D39D39_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4E9A50099D39D39_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4E9A50099D39D39_METHOD_2_232E79648899E21B_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4E9A50099D39D39_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::RPG::Client::MatchThreeGameOpponent* Method_2_FA4F0A278F440490()
	{
		return ((::RPG::Client::MatchThreeGameOpponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4E9A50099D39D39_METHOD_2_FA4F0A278F440490_OFFSET))(this);
	}
};
