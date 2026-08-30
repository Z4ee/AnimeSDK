#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_20.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;
namespace RPG::Client { class UIController; }

#define CLASS_2_F7817D9443EDB889_5_METHOD_2_08BD60914BBD1FFD_OFFSET UNITYSDK_OFFSET(0xB599E60)
#define CLASS_2_F7817D9443EDB889_5_METHOD_2_0B3CC6873C8072D4_OFFSET UNITYSDK_OFFSET(0xB599D40)
#define CLASS_2_F7817D9443EDB889_5__CTOR_OFFSET UNITYSDK_OFFSET(0xB599D30)

inline static constexpr unsigned int Class_2_F7817D9443EDB889_5_TypeDefinitionIndex = 64113;

class Class_2_F7817D9443EDB889_5 : public ::Class_1_F9FBCC956DFCF137_20
{
public:
	::RPG::Client::UIController* OMDGCBMAFLD; // 0x18

	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B3CC6873C8072D4(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_5_METHOD_2_0B3CC6873C8072D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BD60914BBD1FFD(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_5_METHOD_2_08BD60914BBD1FFD_OFFSET))(this, a1);
	}
};
