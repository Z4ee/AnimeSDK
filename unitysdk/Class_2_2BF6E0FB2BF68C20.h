#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_20.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;

#define CLASS_2_2BF6E0FB2BF68C20_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x15847040)
#define CLASS_2_2BF6E0FB2BF68C20_METHOD_2_344BE63E2CA66C7A_OFFSET UNITYSDK_OFFSET(0x158470E0)
#define CLASS_2_2BF6E0FB2BF68C20_METHOD_2_FEF354D772FF7890_OFFSET UNITYSDK_OFFSET(0x15846C20)
#define CLASS_2_2BF6E0FB2BF68C20__CTOR_OFFSET UNITYSDK_OFFSET(0x15846C10)

inline static constexpr unsigned int Class_2_2BF6E0FB2BF68C20_TypeDefinitionIndex = 64108;

class Class_2_2BF6E0FB2BF68C20 : public ::Class_1_F9FBCC956DFCF137_20
{
public:
	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_2BF6E0FB2BF68C20__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_FEF354D772FF7890(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_2BF6E0FB2BF68C20_METHOD_2_FEF354D772FF7890_OFFSET))(this, a1);
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
