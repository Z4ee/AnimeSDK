#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_NpcNameShowTags.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPCNAMESHOWINFO_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x705230)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_NPCNAMESHOWINFO_REMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x705280)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem_NpcNameShowInfo_TypeDefinitionIndex = 54625;

	struct alignas(8) VOPerformSubSystem_NpcNameShowInfo
	{
		::System::String* configID; // 0x10
		::MoleMole::VOPerformSubSystem_NpcNameShowTags showTag; // 0x18
		::System::Boolean bindInteract; // 0x1C
		::System::String* iconKey; // 0x20
		::Foundation::AssetPath iconFullPath; // 0x28
		::System::Single heightOffset; // 0x38
		::System::Boolean autoHide; // 0x3C
		::System::Single hideRadius; // 0x40
		::System::Object* guideUserData; // 0x48
		::System::String* splitStrategy; // 0x50
		::System::Boolean isGuideTargetExtractPos; // 0x58
		::UnityEngine::Vector3 extractPos; // 0x5C
		::System::UInt32 associatedEntityID; // 0x68

		::System::Void AddFlag(::MoleMole::VOPerformSubSystem_NpcNameShowTags tag)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VOPerformSubSystem_NpcNameShowTags))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPCNAMESHOWINFO_ADDFLAG_OFFSET))(this, tag);
		}

		::System::Void RemoveFlag(::MoleMole::VOPerformSubSystem_NpcNameShowTags tag)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VOPerformSubSystem_NpcNameShowTags))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_NPCNAMESHOWINFO_REMOVEFLAG_OFFSET))(this, tag);
		}
	};
}
