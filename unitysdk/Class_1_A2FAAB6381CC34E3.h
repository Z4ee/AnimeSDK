#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2BF728C01BDEF973.h"
#include "unitysdk/System/Object.h"

class Class_1_89AD82AEAD720173;
namespace RPG::GameCore { class FiveDimCustomVisibilityConfig; }

#define CLASS_1_A2FAAB6381CC34E3_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9E7370)
#define CLASS_1_A2FAAB6381CC34E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E73D0)

inline static constexpr unsigned int Class_1_A2FAAB6381CC34E3_TypeDefinitionIndex = 40706;

class Class_1_A2FAAB6381CC34E3 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimCustomVisibilityConfig* Field_1_0; // 0x10
	::Class_1_89AD82AEAD720173* Field_1_1; // 0x18
	::Struct_2_2BF728C01BDEF973 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2FAAB6381CC34E3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2FAAB6381CC34E3_CLEAR_OFFSET))(this);
	}
};
