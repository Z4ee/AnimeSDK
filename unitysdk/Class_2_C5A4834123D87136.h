#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"

#define CLASS_2_C5A4834123D87136_METHOD_2_2091F34306E68C88_OFFSET UNITYSDK_OFFSET(0x14140AE0)
#define CLASS_2_C5A4834123D87136_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x14140C00)
#define CLASS_2_C5A4834123D87136__CTOR_OFFSET UNITYSDK_OFFSET(0x14140B90)

inline static constexpr unsigned int Class_2_C5A4834123D87136_TypeDefinitionIndex = 60268;

class Class_2_C5A4834123D87136 : public ::Class_1_8377BAB19A574A40
{
public:
	::MoleMole::CharacterCameraDitheringData Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5A4834123D87136__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2091F34306E68C88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5A4834123D87136_METHOD_2_2091F34306E68C88_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5A4834123D87136_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
