#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_1CC55DBCD2190226.h"
#include "unitysdk/Struct_2_D22B52808FACD415.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HackerDroneConfig; }

#define CLASS_1_3F2E265789E0C820__CTOR_OFFSET UNITYSDK_OFFSET(0x11803680)

inline static constexpr unsigned int Class_1_3F2E265789E0C820_TypeDefinitionIndex = 86654;

class Class_1_3F2E265789E0C820 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10
	::Struct_2_D22B52808FACD415 Field_1_3; // 0x20
	::MoleMole::Config::HackerDroneConfig* Field_1_1; // 0x40
	::Struct_2_1CC55DBCD2190226 Field_1_2; // 0x48

	::System::Void _ctor(::MoleMole::EntityHandle a1, ::MoleMole::Config::HackerDroneConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::HackerDroneConfig*))((::PBYTE)hIl2Cpp + CLASS_1_3F2E265789E0C820__CTOR_OFFSET))(this, a1, a2);
	}
};
