#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_1_B44AD120F2ED8328_CLASS_1_D9F0207D9C11A4E7__CTOR_OFFSET UNITYSDK_OFFSET(0xFBD7020)

inline static constexpr unsigned int Class_1_B44AD120F2ED8328_Class_1_D9F0207D9C11A4E7_TypeDefinitionIndex = 86625;

class Class_1_B44AD120F2ED8328_Class_1_D9F0207D9C11A4E7 : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B44AD120F2ED8328_CLASS_1_D9F0207D9C11A4E7__CTOR_OFFSET))(this);
	}
};
