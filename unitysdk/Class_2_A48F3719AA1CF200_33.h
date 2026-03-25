#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16CA124888A687A8.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"

#define CLASS_2_A48F3719AA1CF200_33_METHOD_2_978520BE6FC682A9_OFFSET UNITYSDK_OFFSET(0x116C19E0)
#define CLASS_2_A48F3719AA1CF200_33_METHOD_2_AD91E5F8037967A4_OFFSET UNITYSDK_OFFSET(0x116C1980)
#define CLASS_2_A48F3719AA1CF200_33__CTOR_OFFSET UNITYSDK_OFFSET(0x116C19D0)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_33_TypeDefinitionIndex = 64003;

class Class_2_A48F3719AA1CF200_33 : public ::Class_1_16CA124888A687A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_33__CTOR_OFFSET))(this);
	}

	::RPG::Client::Prop::DestroyRootPuzzleChessType Method_2_AD91E5F8037967A4()
	{
		return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_33_METHOD_2_AD91E5F8037967A4_OFFSET))(this);
	}

	::RPG::Client::Prop::DestroyRootPuzzleChessType Method_2_978520BE6FC682A9()
	{
		return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_33_METHOD_2_978520BE6FC682A9_OFFSET))(this);
	}
};
