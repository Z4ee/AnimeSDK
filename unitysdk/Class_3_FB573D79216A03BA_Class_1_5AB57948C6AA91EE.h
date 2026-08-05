#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_EA02B975BED3466B;
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_FB573D79216A03BA_CLASS_1_5AB57948C6AA91EE__CTOR_OFFSET UNITYSDK_OFFSET(0xE9842F0)

inline static constexpr unsigned int Class_3_FB573D79216A03BA_Class_1_5AB57948C6AA91EE_TypeDefinitionIndex = 55286;

class Class_3_FB573D79216A03BA_Class_1_5AB57948C6AA91EE : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::Class_3_EA02B975BED3466B* Field_1_1; // 0x18
	::MoleMole::MonoSpawnPoint* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB573D79216A03BA_CLASS_1_5AB57948C6AA91EE__CTOR_OFFSET))(this);
	}
};
