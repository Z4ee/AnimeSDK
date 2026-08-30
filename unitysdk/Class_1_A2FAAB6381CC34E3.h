#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2BF728C01BDEF973.h"
#include "unitysdk/System/Object.h"

class Class_1_89AD82AEAD720173;
namespace RPG::GameCore { class FiveDimCustomVisibilityConfig; }

#define CLASS_1_A2FAAB6381CC34E3_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CDDABB0)
#define CLASS_1_A2FAAB6381CC34E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDAC10)

inline static constexpr unsigned int Class_1_A2FAAB6381CC34E3_TypeDefinitionIndex = 41659;

class Class_1_A2FAAB6381CC34E3 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimCustomVisibilityConfig* EABKOHGCHFP; // 0x10
	::Class_1_89AD82AEAD720173* NNANJMDMAOC; // 0x18
	::Struct_2_2BF728C01BDEF973 PBOCJBPJJOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2FAAB6381CC34E3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2FAAB6381CC34E3_CLEAR_OFFSET))(this);
	}
};
