#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

namespace RPG::Client { class RogueBuffInfo; }

#define CLASS_2_8CBFD02F2AE45A55__CTOR_OFFSET UNITYSDK_OFFSET(0xA44E8D0)

inline static constexpr unsigned int Class_2_8CBFD02F2AE45A55_TypeDefinitionIndex = 62709;

class Class_2_8CBFD02F2AE45A55 : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueBuffInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueBuffInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueBuffInfo*))((::PBYTE)hIl2Cpp + CLASS_2_8CBFD02F2AE45A55__CTOR_OFFSET))(this, a1, a2);
	}
};
