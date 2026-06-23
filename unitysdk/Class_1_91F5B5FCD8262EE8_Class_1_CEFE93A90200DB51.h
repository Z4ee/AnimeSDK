#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_66C4D81440373C6E;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_91F5B5FCD8262EE8_CLASS_1_CEFE93A90200DB51_METHOD_1_4C7AA62905DC1988_OFFSET UNITYSDK_OFFSET(0x108280A0)
#define CLASS_1_91F5B5FCD8262EE8_CLASS_1_CEFE93A90200DB51__CTOR_OFFSET UNITYSDK_OFFSET(0x10828090)

inline static constexpr unsigned int Class_1_91F5B5FCD8262EE8_Class_1_CEFE93A90200DB51_TypeDefinitionIndex = 56789;

class Class_1_91F5B5FCD8262EE8_Class_1_CEFE93A90200DB51 : public ::System::Object
{
public:
	::Class_1_66C4D81440373C6E* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::System::Int32 Field_1_6; // 0x2C
	::MoleMole::Level::BangbooPlayType Field_1_5; // 0x30
	::System::Single Field_1_3; // 0x34
	::System::Boolean Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_1_CEFE93A90200DB51__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4C7AA62905DC1988(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_91F5B5FCD8262EE8_CLASS_1_CEFE93A90200DB51_METHOD_1_4C7AA62905DC1988_OFFSET))(this, a1);
	}
};
