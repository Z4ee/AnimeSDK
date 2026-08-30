#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_20.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;
namespace RPG::Client { class UIController; }

#define CLASS_2_F7817D9443EDB889_1_METHOD_2_08BD60914BBD1FFD_OFFSET UNITYSDK_OFFSET(0x180A8830)
#define CLASS_2_F7817D9443EDB889_1_METHOD_2_C07708CFEFCEEDAF_OFFSET UNITYSDK_OFFSET(0x180A8720)
#define CLASS_2_F7817D9443EDB889_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180A8710)

inline static constexpr unsigned int Class_2_F7817D9443EDB889_1_TypeDefinitionIndex = 64107;

class Class_2_F7817D9443EDB889_1 : public ::Class_1_F9FBCC956DFCF137_20
{
public:
	::RPG::Client::UIController* FAJFHDCOEGE; // 0x18

	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_C07708CFEFCEEDAF(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_1_METHOD_2_C07708CFEFCEEDAF_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BD60914BBD1FFD(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_1_METHOD_2_08BD60914BBD1FFD_OFFSET))(this, a1);
	}
};
