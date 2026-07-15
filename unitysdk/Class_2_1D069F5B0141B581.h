#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

#define CLASS_2_1D069F5B0141B581_CLEAR_OFFSET UNITYSDK_OFFSET(0x17606D80)
#define CLASS_2_1D069F5B0141B581_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x17606D10)
#define CLASS_2_1D069F5B0141B581_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x17606DE0)
#define CLASS_2_1D069F5B0141B581__CTOR_OFFSET UNITYSDK_OFFSET(0x17607060)

inline static constexpr unsigned int Class_2_1D069F5B0141B581_TypeDefinitionIndex = 62939;

class Class_2_1D069F5B0141B581 : public ::Class_1_3713064DEE761936
{
public:
	::System::Boolean Field_2_0; // 0x20
	::System::UInt32 Field_2_1; // 0x24
	::RPG::Client::LittleGame::Match3::OpponentRole Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x2C

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
