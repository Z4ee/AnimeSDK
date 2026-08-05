#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/System/Object.h"

#define NPCAVATARMESHASSETSSO_SEQUENCEFRAMEHIDEPARTMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6E600)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_SequenceFrameHidePartMapping_TypeDefinitionIndex = 55898;

class NPCAvatarMeshAssetsSO_SequenceFrameHidePartMapping : public ::System::Object
{
public:
	::ENPCAvatarBodyPart partType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_SEQUENCEFRAMEHIDEPARTMAPPING__CTOR_OFFSET))(this);
	}
};
