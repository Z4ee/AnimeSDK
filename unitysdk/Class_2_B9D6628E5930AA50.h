#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_2_B9D6628E5930AA50__CTOR_OFFSET UNITYSDK_OFFSET(0x152F8D30)

inline static constexpr unsigned int Class_2_B9D6628E5930AA50_TypeDefinitionIndex = 64104;

class Class_2_B9D6628E5930AA50 : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueTournPersonaStyleInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueTournPersonaStyleInfo*))((::PBYTE)hIl2Cpp + CLASS_2_B9D6628E5930AA50__CTOR_OFFSET))(this, a1, a2);
	}
};
