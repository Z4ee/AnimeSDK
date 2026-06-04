#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_2_B9D6628E5930AA50__CTOR_OFFSET UNITYSDK_OFFSET(0xA55EE80)

inline static constexpr unsigned int Class_2_B9D6628E5930AA50_TypeDefinitionIndex = 62737;

class Class_2_B9D6628E5930AA50 : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueTournPersonaStyleInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueTournPersonaStyleInfo*))((::PBYTE)hIl2Cpp + CLASS_2_B9D6628E5930AA50__CTOR_OFFSET))(this, a1, a2);
	}
};
