#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_11.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"

class Class_1_582AF6875845819E;

#define CLASS_2_67819D1F917D2B60_METHOD_2_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x99A59B0)
#define CLASS_2_67819D1F917D2B60_METHOD_2_2DD35DAACE3B10FA_OFFSET UNITYSDK_OFFSET(0x99A5660)
#define CLASS_2_67819D1F917D2B60_METHOD_2_344BE63E2CA66C7A_OFFSET UNITYSDK_OFFSET(0x99A5A50)
#define CLASS_2_67819D1F917D2B60__CTOR_OFFSET UNITYSDK_OFFSET(0x99A5650)

inline static constexpr unsigned int Class_2_67819D1F917D2B60_TypeDefinitionIndex = 58912;

class Class_2_67819D1F917D2B60 : public ::Class_1_F9FBCC956DFCF137_11
{
public:
	::System::Void _ctor(::Class_1_582AF6875845819E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_582AF6875845819E*))((::PBYTE)hIl2Cpp + CLASS_2_67819D1F917D2B60__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DD35DAACE3B10FA(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_67819D1F917D2B60_METHOD_2_2DD35DAACE3B10FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_344BE63E2CA66C7A(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_2_67819D1F917D2B60_METHOD_2_344BE63E2CA66C7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67819D1F917D2B60_METHOD_2_0581090195E9C81F_OFFSET))(this);
	}
};
