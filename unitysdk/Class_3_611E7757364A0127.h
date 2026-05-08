#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9C00C44C10E42328.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_611E7757364A0127_METHOD_3_EDD6BDC9678E641E_OFFSET UNITYSDK_OFFSET(0x131339B0)
#define CLASS_3_611E7757364A0127__CTOR_OFFSET UNITYSDK_OFFSET(0x13133A40)

inline static constexpr unsigned int Class_3_611E7757364A0127_TypeDefinitionIndex = 80160;

class Class_3_611E7757364A0127 : public ::Class_2_9C00C44C10E42328
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_611E7757364A0127__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_EDD6BDC9678E641E(::MoleMole::Battle::Entity*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_3_611E7757364A0127_METHOD_3_EDD6BDC9678E641E_OFFSET))(this, a1);
	}
};
