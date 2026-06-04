#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

namespace RPG::Client { class RogueTournHexInfo; }

#define CLASS_2_E41AACD72A4FE1CF__CTOR_OFFSET UNITYSDK_OFFSET(0x14403C80)

inline static constexpr unsigned int Class_2_E41AACD72A4FE1CF_TypeDefinitionIndex = 62722;

class Class_2_E41AACD72A4FE1CF : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueTournHexInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueTournHexInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueTournHexInfo*))((::PBYTE)hIl2Cpp + CLASS_2_E41AACD72A4FE1CF__CTOR_OFFSET))(this, a1, a2);
	}
};
