#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AA09F550E1A23C5D.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"

#define CLASS_3_DCB7F8B839F0C44B_2_METHOD_3_AD91E5F8037967A4_OFFSET UNITYSDK_OFFSET(0xC474CD0)
#define CLASS_3_DCB7F8B839F0C44B_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC474D20)

inline static constexpr unsigned int Class_3_DCB7F8B839F0C44B_2_TypeDefinitionIndex = 78082;

class Class_3_DCB7F8B839F0C44B_2 : public ::Class_2_AA09F550E1A23C5D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCB7F8B839F0C44B_2__CTOR_OFFSET))(this);
	}

	::RPG::Client::Prop::DestroyRootPuzzleChessType Method_3_AD91E5F8037967A4()
	{
		return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCB7F8B839F0C44B_2_METHOD_3_AD91E5F8037967A4_OFFSET))(this);
	}
};
