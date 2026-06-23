#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B6C74DD58A25C617.h"
#include "unitysdk/Enum_3_BB2C27F60FA583B0.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCAVATARMESHASSETSSO_FMONOINTERACTIONPOINTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xD403360)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FMonoInteractionPointSettings_TypeDefinitionIndex = 67211;

class NPCAvatarMeshAssetsSO_FMonoInteractionPointSettings : public ::System::Object
{
public:
	::System::Int32 slotNameHash; // 0x10
	::System::String* slotName; // 0x18
	::System::Single range; // 0x20
	::System::Single minAngle; // 0x24
	::System::Single maxAngle; // 0x28
	::Enum_3_BB2C27F60FA583B0 DirectionType; // 0x2C
	::System::Boolean useNavmesh; // 0x30
	::Enum_3_B6C74DD58A25C617 interactType; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FMONOINTERACTIONPOINTSETTINGS__CTOR_OFFSET))(this);
	}
};
