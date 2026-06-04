#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_18.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;

#define CLASS_2_2BF6E0FB2BF68C20_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x13A2BE50)
#define CLASS_2_2BF6E0FB2BF68C20_METHOD_2_344BE63E2CA66C7A_OFFSET UNITYSDK_OFFSET(0x13A2BEF0)
#define CLASS_2_2BF6E0FB2BF68C20_METHOD_2_859ACE00B0472E43_OFFSET UNITYSDK_OFFSET(0x13A2BB00)
#define CLASS_2_2BF6E0FB2BF68C20__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2BAF0)

inline static constexpr unsigned int Class_2_2BF6E0FB2BF68C20_TypeDefinitionIndex = 59842;

class Class_2_2BF6E0FB2BF68C20 : public ::Class_1_F9FBCC956DFCF137_18
{
public:
	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_2BF6E0FB2BF68C20__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_859ACE00B0472E43(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_2BF6E0FB2BF68C20_METHOD_2_859ACE00B0472E43_OFFSET))(this, a1);
	}

	::System::Void Method_2_344BE63E2CA66C7A(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_2BF6E0FB2BF68C20_METHOD_2_344BE63E2CA66C7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2BF6E0FB2BF68C20_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}
};
