#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Unreal { class SerializableGameplayTagQuery; }
namespace NPCCrowd::AI { class AIActionRefItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCAVATARMESHASSETSSO_GAMEPLAYTAGACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10B386C0)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_GameplayTagActionConfig_TypeDefinitionIndex = 55884;

class NPCAvatarMeshAssetsSO_GameplayTagActionConfig : public ::System::Object
{
public:
	::Foundation::Unreal::SerializableGameplayTagQuery* tagMatchExpression; // 0x10
	::System::Collections::Generic::List_1<::NPCCrowd::AI::AIActionRefItem*>* actions; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_GAMEPLAYTAGACTIONCONFIG__CTOR_OFFSET))(this);
	}
};
