#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NpcPrototypeNavMeshObstacleData; }
namespace MoleMole { class NpcPrototypeRigidbodyData; }
namespace System { class String; }

#define MOLEMOLE_NPCPROTOTYPEDATAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x160E0810)

namespace MoleMole
{
	inline static constexpr unsigned int NpcPrototypeDataInfo_TypeDefinitionIndex = 68281;

	class NpcPrototypeDataInfo : public ::System::Object
	{
	public:
		::System::Int32 Key; // 0x10
		::System::String* comment; // 0x18
		::System::Boolean EnableRigidbody; // 0x20
		::MoleMole::NpcPrototypeRigidbodyData* Rigidbody; // 0x28
		::System::Boolean EnableNavMeshObstacle; // 0x30
		::MoleMole::NpcPrototypeNavMeshObstacleData* NavMeshObstacle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPEDATAINFO__CTOR_OFFSET))(this);
		}
	};
}
