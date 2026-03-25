#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E21BE680AAA04C0C.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"

#define CLASS_3_DCB7F8B839F0C44B_5_METHOD_3_978520BE6FC682A9_OFFSET UNITYSDK_OFFSET(0x8B88820)
#define CLASS_3_DCB7F8B839F0C44B_5_METHOD_3_AD91E5F8037967A4_OFFSET UNITYSDK_OFFSET(0x8B887C0)
#define CLASS_3_DCB7F8B839F0C44B_5__CTOR_OFFSET UNITYSDK_OFFSET(0x8B88810)

inline static constexpr unsigned int Class_3_DCB7F8B839F0C44B_5_TypeDefinitionIndex = 64004;

class Class_3_DCB7F8B839F0C44B_5 : public ::Class_2_E21BE680AAA04C0C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCB7F8B839F0C44B_5__CTOR_OFFSET))(this);
	}

	::RPG::Client::Prop::DestroyRootPuzzleChessType Method_3_AD91E5F8037967A4()
	{
		return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCB7F8B839F0C44B_5_METHOD_3_AD91E5F8037967A4_OFFSET))(this);
	}

	::RPG::Client::Prop::DestroyRootPuzzleChessType Method_3_978520BE6FC682A9()
	{
		return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCB7F8B839F0C44B_5_METHOD_3_978520BE6FC682A9_OFFSET))(this);
	}
};
