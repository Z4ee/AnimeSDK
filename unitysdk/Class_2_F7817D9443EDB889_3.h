#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_20.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;
namespace RPG::Client { class UIController; }

#define CLASS_2_F7817D9443EDB889_3_METHOD_2_08BD60914BBD1FFD_OFFSET UNITYSDK_OFFSET(0x1A82E8E0)
#define CLASS_2_F7817D9443EDB889_3_METHOD_2_FCC933CD82A05C24_OFFSET UNITYSDK_OFFSET(0x1A82E730)
#define CLASS_2_F7817D9443EDB889_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A82E720)

inline static constexpr unsigned int Class_2_F7817D9443EDB889_3_TypeDefinitionIndex = 64111;

class Class_2_F7817D9443EDB889_3 : public ::Class_1_F9FBCC956DFCF137_20
{
public:
	::RPG::Client::UIController* DMNONOAOJNK; // 0x18

	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCC933CD82A05C24(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_3_METHOD_2_FCC933CD82A05C24_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BD60914BBD1FFD(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_3_METHOD_2_08BD60914BBD1FFD_OFFSET))(this, a1);
	}
};
