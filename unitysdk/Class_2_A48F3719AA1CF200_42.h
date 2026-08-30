#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16CA124888A687A8.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"

#define CLASS_2_A48F3719AA1CF200_42_METHOD_2_AD91E5F8037967A4_OFFSET UNITYSDK_OFFSET(0x164AB010)
#define CLASS_2_A48F3719AA1CF200_42__CTOR_OFFSET UNITYSDK_OFFSET(0x164AB060)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_42_TypeDefinitionIndex = 78084;

class Class_2_A48F3719AA1CF200_42 : public ::Class_1_16CA124888A687A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_42__CTOR_OFFSET))(this);
	}

	::RPG::Client::Prop::DestroyRootPuzzleChessType Method_2_AD91E5F8037967A4()
	{
		return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_42_METHOD_2_AD91E5F8037967A4_OFFSET))(this);
	}
};
