#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_11.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;
namespace RPG::Client { class UIController; }

#define CLASS_2_F7817D9443EDB889_METHOD_2_08BD60914BBD1FFD_OFFSET UNITYSDK_OFFSET(0x91491E0)
#define CLASS_2_F7817D9443EDB889_METHOD_2_DB2C445C443001FE_OFFSET UNITYSDK_OFFSET(0x91490B0)
#define CLASS_2_F7817D9443EDB889__CTOR_OFFSET UNITYSDK_OFFSET(0x91490A0)

inline static constexpr unsigned int Class_2_F7817D9443EDB889_TypeDefinitionIndex = 58909;

class Class_2_F7817D9443EDB889 : public ::Class_1_F9FBCC956DFCF137_11
{
public:
	::RPG::Client::UIController* Field_2_0; // 0x18

	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB2C445C443001FE(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_METHOD_2_DB2C445C443001FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BD60914BBD1FFD(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_F7817D9443EDB889_METHOD_2_08BD60914BBD1FFD_OFFSET))(this, a1);
	}
};
