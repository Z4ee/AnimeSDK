#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_AB79E5D347125DDE.h"

namespace MoleMole { class EventRange; }

#define CLASS_4_D553E24478131817__CTOR_OFFSET UNITYSDK_OFFSET(0x115C66B0)

inline static constexpr unsigned int Class_4_D553E24478131817_TypeDefinitionIndex = 79828;

class Class_4_D553E24478131817 : public ::Class_3_AB79E5D347125DDE
{
public:
	::System::Void _ctor(::MoleMole::EventRange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EventRange*))((::PBYTE)hIl2Cpp + CLASS_4_D553E24478131817__CTOR_OFFSET))(this, a1);
	}
};
