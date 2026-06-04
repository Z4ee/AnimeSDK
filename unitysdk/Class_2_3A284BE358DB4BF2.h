#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

namespace RPG::Client { class RogueKeywordInfo; }

#define CLASS_2_3A284BE358DB4BF2__CTOR_OFFSET UNITYSDK_OFFSET(0xAF94170)

inline static constexpr unsigned int Class_2_3A284BE358DB4BF2_TypeDefinitionIndex = 62726;

class Class_2_3A284BE358DB4BF2 : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueKeywordInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueKeywordInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueKeywordInfo*))((::PBYTE)hIl2Cpp + CLASS_2_3A284BE358DB4BF2__CTOR_OFFSET))(this, a1, a2);
	}
};
