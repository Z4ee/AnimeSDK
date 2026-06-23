#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCAVATARMESHASSETSSO_FMONOITEMSTATESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xF99BF40)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FMonoItemStateSettings_TypeDefinitionIndex = 67217;

class NPCAvatarMeshAssetsSO_FMonoItemStateSettings : public ::System::Object
{
public:
	::System::Int32 slotNameHash; // 0x10
	::System::String* slotName; // 0x18
	::System::String* itemKey; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FMONOITEMSTATESETTINGS__CTOR_OFFSET))(this);
	}
};
