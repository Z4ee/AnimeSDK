#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_05B2DA0FB841F389.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"

#define CLASS_2_869C1D0468A01B9D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3CCAE0)
#define CLASS_2_869C1D0468A01B9D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CCB90)

inline static constexpr unsigned int Class_2_869C1D0468A01B9D_TypeDefinitionIndex = 41889;

class Class_2_869C1D0468A01B9D : public ::Class_1_05B2DA0FB841F389
{
public:
	::RPG::GameCore::FiveDimOrthoDirection FFHIEMCJDJJ; // 0x100
	::System::Boolean NBKDDFNGGBP; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_869C1D0468A01B9D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_869C1D0468A01B9D_CLEAR_OFFSET))(this);
	}
};
