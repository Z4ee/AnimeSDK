#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace NPCCrowd::Accessories { class NPCAccessoryAvatarAssetsSO; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYAVATARASSETSPACKEDSO__CTOR_OFFSET UNITYSDK_OFFSET(0xBDDF170)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAvatarAssetsPackedSO_TypeDefinitionIndex = 78392;

	class NPCAccessoryAvatarAssetsPackedSO : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO*>* allMeshSO; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYAVATARASSETSPACKEDSO__CTOR_OFFSET))(this);
		}
	};
}
