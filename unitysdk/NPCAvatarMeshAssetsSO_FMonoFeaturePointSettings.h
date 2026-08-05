#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCAVATARMESHASSETSSO_FMONOFEATUREPOINTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x114D2820)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FMonoFeaturePointSettings_TypeDefinitionIndex = 55902;

class NPCAvatarMeshAssetsSO_FMonoFeaturePointSettings : public ::System::Object
{
public:
	::System::Int32 slotNameHash; // 0x10
	::System::String* slotName; // 0x18
	::System::Single minAngle; // 0x20
	::System::Single maxAngle; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FMONOFEATUREPOINTSETTINGS__CTOR_OFFSET))(this);
	}
};
