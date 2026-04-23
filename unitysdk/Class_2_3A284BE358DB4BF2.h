#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8F7D3BAFD8C03B69.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

namespace RPG::Client { class RogueKeywordInfo; }

#define CLASS_2_3A284BE358DB4BF2__CTOR_OFFSET UNITYSDK_OFFSET(0x11D51E70)

inline static constexpr unsigned int Class_2_3A284BE358DB4BF2_TypeDefinitionIndex = 61793;

class Class_2_3A284BE358DB4BF2 : public ::Class_1_8F7D3BAFD8C03B69
{
public:
	::RPG::Client::RogueKeywordInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueKeywordInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueKeywordInfo*))((::PBYTE)hIl2Cpp + CLASS_2_3A284BE358DB4BF2__CTOR_OFFSET))(this, a1, a2);
	}
};
