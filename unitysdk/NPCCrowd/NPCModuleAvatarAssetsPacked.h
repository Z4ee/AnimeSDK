#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd { class NPCModuleAvatarAssetsPackedInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCMODULEAVATARASSETSPACKED__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD5760)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCModuleAvatarAssetsPacked_TypeDefinitionIndex = 69068;

	class NPCModuleAvatarAssetsPacked : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*>* packedAssets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMODULEAVATARASSETSPACKED__CTOR_OFFSET))(this);
		}
	};
}
