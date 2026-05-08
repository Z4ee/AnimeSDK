#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA_METHOD_1_025C10A50003DFAB_OFFSET UNITYSDK_OFFSET(0x15BA7890)
#define MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA7880)

namespace MoleMole
{
	inline static constexpr unsigned int NpcPrototypeNavMeshObstacleData_TypeDefinitionIndex = 72609;

	class NpcPrototypeNavMeshObstacleData : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_025C10A50003DFAB(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA_METHOD_1_025C10A50003DFAB_OFFSET))(this, a1);
		}
	};
}
