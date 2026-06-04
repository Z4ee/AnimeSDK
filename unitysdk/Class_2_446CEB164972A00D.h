#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

namespace RPG::Client { class RogueTournTitanBlessInfo; }

#define CLASS_2_446CEB164972A00D__CTOR_OFFSET UNITYSDK_OFFSET(0xC965710)

inline static constexpr unsigned int Class_2_446CEB164972A00D_TypeDefinitionIndex = 62757;

class Class_2_446CEB164972A00D : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueTournTitanBlessInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueTournTitanBlessInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueTournTitanBlessInfo*))((::PBYTE)hIl2Cpp + CLASS_2_446CEB164972A00D__CTOR_OFFSET))(this, a1, a2);
	}
};
