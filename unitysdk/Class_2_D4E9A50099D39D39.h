#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CLASS_2_D4E9A50099D39D39_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AF46C80)
#define CLASS_2_D4E9A50099D39D39_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x1AF46D40)
#define CLASS_2_D4E9A50099D39D39_METHOD_2_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x1AF46DD0)
#define CLASS_2_D4E9A50099D39D39_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x1AF46C10)
#define CLASS_2_D4E9A50099D39D39_METHOD_2_FA4F0A278F440490_OFFSET UNITYSDK_OFFSET(0x1AF46F40)
#define CLASS_2_D4E9A50099D39D39_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1AF46CE0)
#define CLASS_2_D4E9A50099D39D39__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF47000)

inline static constexpr unsigned int Class_2_D4E9A50099D39D39_TypeDefinitionIndex = 65918;

class Class_2_D4E9A50099D39D39 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* HPINJBJLCBB; // 0x20
	::System::UInt32 IAMKAPIJLGP; // 0x28
	::System::Boolean DIINOIHGGHD; // 0x2C
	::System::Boolean EHCJLGODALF; // 0x2D
	::System::UInt32 JLOOPPGEADG; // 0x30
	::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x34

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
