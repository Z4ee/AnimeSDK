#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;

#define CLASS_1_C4FD36003027AC99___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x903C970)
#define CLASS_1_C4FD36003027AC99___C__DISPLAYCLASS34_0__SELECTTEAMFIELD_B__0_OFFSET UNITYSDK_OFFSET(0x903D5B0)

inline static constexpr unsigned int Class_1_C4FD36003027AC99___c__DisplayClass34_0_TypeDefinitionIndex = 71011;

class Class_1_C4FD36003027AC99___c__DisplayClass34_0 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelTeamType team; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FD36003027AC99___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SelectTeamField_b__0(::Class_2_49CAB3DE74280C58* field)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_C4FD36003027AC99___C__DISPLAYCLASS34_0__SELECTTEAMFIELD_B__0_OFFSET))(this, field);
	}
};
