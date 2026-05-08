#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7D1C3866B99AF44C.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

namespace MoleMole::HollowChessboard { class UVAnimSection; }

#define CLASS_3_64A09207922EA8F7_METHOD_3_6516B39957C2E680_OFFSET UNITYSDK_OFFSET(0x14BC37E0)
#define CLASS_3_64A09207922EA8F7_METHOD_3_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x14BC32A0)
#define CLASS_3_64A09207922EA8F7_METHOD_3_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x14BC3A70)
#define CLASS_3_64A09207922EA8F7_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x14BC3740)
#define CLASS_3_64A09207922EA8F7__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC3280)

inline static constexpr unsigned int Class_3_64A09207922EA8F7_TypeDefinitionIndex = 55468;

class Class_3_64A09207922EA8F7 : public ::Class_2_7D1C3866B99AF44C<::MoleMole::HollowChessboard::UVAnimSection*>
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_3_0; // 0x28

	::System::Void _ctor(::MoleMole::HollowChessboard::UVAnimSection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::UVAnimSection*))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_METHOD_3_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_6516B39957C2E680(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_METHOD_3_6516B39957C2E680_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64A09207922EA8F7_METHOD_3_B1936CE4DA97AA45_1_OFFSET))(this);
	}
};
