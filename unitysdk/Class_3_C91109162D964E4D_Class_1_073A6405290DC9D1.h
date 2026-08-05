#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_EA973170E0B2CCF6;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_C91109162D964E4D_CLASS_1_073A6405290DC9D1_METHOD_1_CC2EA1FB8A679AAA_OFFSET UNITYSDK_OFFSET(0x1CB7F7E0)
#define CLASS_3_C91109162D964E4D_CLASS_1_073A6405290DC9D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7F7D0)

inline static constexpr unsigned int Class_3_C91109162D964E4D_Class_1_073A6405290DC9D1_TypeDefinitionIndex = 59404;

class Class_3_C91109162D964E4D_Class_1_073A6405290DC9D1 : public ::System::Object
{
public:
	::Class_2_EA973170E0B2CCF6* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_CLASS_1_073A6405290DC9D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CC2EA1FB8A679AAA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_CLASS_1_073A6405290DC9D1_METHOD_1_CC2EA1FB8A679AAA_OFFSET))(this, a1);
	}
};
