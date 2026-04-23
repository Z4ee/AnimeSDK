#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8F7D3BAFD8C03B69.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

namespace RPG::Client { class RogueBuffInfo; }

#define CLASS_2_8CBFD02F2AE45A55__CTOR_OFFSET UNITYSDK_OFFSET(0x95D3B00)

inline static constexpr unsigned int Class_2_8CBFD02F2AE45A55_TypeDefinitionIndex = 61776;

class Class_2_8CBFD02F2AE45A55 : public ::Class_1_8F7D3BAFD8C03B69
{
public:
	::RPG::Client::RogueBuffInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueBuffInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueBuffInfo*))((::PBYTE)hIl2Cpp + CLASS_2_8CBFD02F2AE45A55__CTOR_OFFSET))(this, a1, a2);
	}
};
