#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

#define CLASS_2_1D069F5B0141B581_CLEAR_OFFSET UNITYSDK_OFFSET(0x18CE6A20)
#define CLASS_2_1D069F5B0141B581_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x18CE69B0)
#define CLASS_2_1D069F5B0141B581_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x18CE6A80)
#define CLASS_2_1D069F5B0141B581__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE6D00)

inline static constexpr unsigned int Class_2_1D069F5B0141B581_TypeDefinitionIndex = 65924;

class Class_2_1D069F5B0141B581 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x20
	::System::UInt32 CMNNGJKFIOM; // 0x24
	::System::UInt32 GACEMBBAGMP; // 0x28
	::System::Boolean BCDBBCEILIC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D069F5B0141B581__CTOR_OFFSET))(this);
	}

	static ::Class_2_1D069F5B0141B581* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_1D069F5B0141B581*(*)())((::PBYTE)hIl2Cpp + CLASS_2_1D069F5B0141B581_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D069F5B0141B581_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D069F5B0141B581_ONEXECUTE_OFFSET))(this);
	}
};
