#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

namespace RPG::Client { class RogueKeywordInfo; }

#define CLASS_2_3A284BE358DB4BF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1425B090)

inline static constexpr unsigned int Class_2_3A284BE358DB4BF2_TypeDefinitionIndex = 64093;

class Class_2_3A284BE358DB4BF2 : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueKeywordInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueKeywordInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueKeywordInfo*))((::PBYTE)hIl2Cpp + CLASS_2_3A284BE358DB4BF2__CTOR_OFFSET))(this, a1, a2);
	}
};
