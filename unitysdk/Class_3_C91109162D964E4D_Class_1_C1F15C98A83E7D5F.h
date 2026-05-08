#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_EA973170E0B2CCF6;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_C91109162D964E4D_CLASS_1_C1F15C98A83E7D5F_METHOD_1_5785961F8FA1D916_OFFSET UNITYSDK_OFFSET(0x114B5090)
#define CLASS_3_C91109162D964E4D_CLASS_1_C1F15C98A83E7D5F__CTOR_OFFSET UNITYSDK_OFFSET(0x114B5080)

inline static constexpr unsigned int Class_3_C91109162D964E4D_Class_1_C1F15C98A83E7D5F_TypeDefinitionIndex = 47098;

class Class_3_C91109162D964E4D_Class_1_C1F15C98A83E7D5F : public ::System::Object
{
public:
	::Class_2_EA973170E0B2CCF6* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_CLASS_1_C1F15C98A83E7D5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5785961F8FA1D916(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C91109162D964E4D_CLASS_1_C1F15C98A83E7D5F_METHOD_1_5785961F8FA1D916_OFFSET))(this, a1);
	}
};
