#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D8B614E7EF4033A4;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_2_D8B614E7EF4033A4_CLASS_1_B563DAF775ED87D0_METHOD_1_1C9F2AB4D7ED3ADD_OFFSET UNITYSDK_OFFSET(0x16259720)
#define CLASS_2_D8B614E7EF4033A4_CLASS_1_B563DAF775ED87D0__CTOR_OFFSET UNITYSDK_OFFSET(0x16259710)

inline static constexpr unsigned int Class_2_D8B614E7EF4033A4_Class_1_B563DAF775ED87D0_TypeDefinitionIndex = 68894;

class Class_2_D8B614E7EF4033A4_Class_1_B563DAF775ED87D0 : public ::System::Object
{
public:
	::Class_2_D8B614E7EF4033A4* Field_1_2; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18
	::MoleMole::Battle::Entity* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8B614E7EF4033A4_CLASS_1_B563DAF775ED87D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C9F2AB4D7ED3ADD(::System::Int32 a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D8B614E7EF4033A4_CLASS_1_B563DAF775ED87D0_METHOD_1_1C9F2AB4D7ED3ADD_OFFSET))(this, a1, a2, a3);
	}
};
