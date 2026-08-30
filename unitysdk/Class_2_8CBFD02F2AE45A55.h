#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

namespace RPG::Client { class RogueBuffInfo; }

#define CLASS_2_8CBFD02F2AE45A55__CTOR_OFFSET UNITYSDK_OFFSET(0xB6F0250)

inline static constexpr unsigned int Class_2_8CBFD02F2AE45A55_TypeDefinitionIndex = 67069;

class Class_2_8CBFD02F2AE45A55 : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueBuffInfo* ENICGHHFDHP; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueBuffInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueBuffInfo*))((::PBYTE)hIl2Cpp + CLASS_2_8CBFD02F2AE45A55__CTOR_OFFSET))(this, a1, a2);
	}
};
