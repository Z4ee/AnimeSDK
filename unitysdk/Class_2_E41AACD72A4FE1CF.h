#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

namespace RPG::Client { class RogueTournHexInfo; }

#define CLASS_2_E41AACD72A4FE1CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1887E860)

inline static constexpr unsigned int Class_2_E41AACD72A4FE1CF_TypeDefinitionIndex = 67082;

class Class_2_E41AACD72A4FE1CF : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueTournHexInfo* PKAMJPDMHOA; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueTournHexInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueTournHexInfo*))((::PBYTE)hIl2Cpp + CLASS_2_E41AACD72A4FE1CF__CTOR_OFFSET))(this, a1, a2);
	}
};
