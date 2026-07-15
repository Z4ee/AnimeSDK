#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

class Class_1_342C8260013D3499;

#define CLASS_2_0253021EA65772BE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1786C580)
#define CLASS_2_0253021EA65772BE_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x1786C510)
#define CLASS_2_0253021EA65772BE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1786C5E0)
#define CLASS_2_0253021EA65772BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1786C760)

inline static constexpr unsigned int Class_2_0253021EA65772BE_TypeDefinitionIndex = 62937;

class Class_2_0253021EA65772BE : public ::Class_1_3713064DEE761936
{
public:
	::Class_1_342C8260013D3499* Field_2_0; // 0x20
	::System::Boolean Field_2_1; // 0x28
	::System::UInt32 Field_2_2; // 0x2C
	::RPG::Client::LittleGame::Match3::OpponentRole Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0253021EA65772BE__CTOR_OFFSET))(this);
	}

	static ::Class_2_0253021EA65772BE* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_0253021EA65772BE*(*)())((::PBYTE)hIl2Cpp + CLASS_2_0253021EA65772BE_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0253021EA65772BE_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0253021EA65772BE_ONEXECUTE_OFFSET))(this);
	}
};
