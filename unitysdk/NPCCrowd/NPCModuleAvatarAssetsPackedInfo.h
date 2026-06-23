#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCMODULEAVATARASSETSPACKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDE770)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCModuleAvatarAssetsPackedInfo_TypeDefinitionIndex = 72074;

	class NPCModuleAvatarAssetsPackedInfo : public ::System::Object
	{
	public:
		::System::String* sceneTag; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* avatarPaths; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* accessoryPaths; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCMODULEAVATARASSETSPACKEDINFO__CTOR_OFFSET))(this);
		}
	};
}
