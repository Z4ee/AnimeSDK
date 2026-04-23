#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_11.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;
namespace RPG::Client { class UIController; }

#define CLASS_2_F7817D9443EDB889_2_METHOD_2_08BD60914BBD1FFD_OFFSET UNITYSDK_OFFSET(0xAA19070)
#define CLASS_2_F7817D9443EDB889_2_METHOD_2_678B9EEFDE1953D5_OFFSET UNITYSDK_OFFSET(0xAA18FF0)
#define CLASS_2_F7817D9443EDB889_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAA18FE0)

inline static constexpr unsigned int Class_2_F7817D9443EDB889_2_TypeDefinitionIndex = 58914;

class Class_2_F7817D9443EDB889_2 : public ::Class_1_F9FBCC956DFCF137_11
{
public:
	::RPG::Client::UIController* Field_2_0; // 0x18

	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_678B9EEFDE1953D5(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_2_METHOD_2_678B9EEFDE1953D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BD60914BBD1FFD(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_2_METHOD_2_08BD60914BBD1FFD_OFFSET))(this, a1);
	}
};
