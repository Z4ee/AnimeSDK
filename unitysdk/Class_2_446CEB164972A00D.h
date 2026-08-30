#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

namespace RPG::Client { class RogueTournTitanBlessInfo; }

#define CLASS_2_446CEB164972A00D__CTOR_OFFSET UNITYSDK_OFFSET(0xE048410)

inline static constexpr unsigned int Class_2_446CEB164972A00D_TypeDefinitionIndex = 67119;

class Class_2_446CEB164972A00D : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueTournTitanBlessInfo* DIMPJFDCPCP; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueTournTitanBlessInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueTournTitanBlessInfo*))((::PBYTE)hIl2Cpp + CLASS_2_446CEB164972A00D__CTOR_OFFSET))(this, a1, a2);
	}
};
