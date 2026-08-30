#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT_HIDEATTACHPOINTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1225AAC0)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT_HIDEATTACHPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1225AB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisibleComponent_HideAttachPointInfo_TypeDefinitionIndex = 57380;

	class CharacterVisibleComponent_HideAttachPointInfo : public ::System::Object
	{
	public:
		::System::UInt64 HideReason; // 0x10
		::System::Int32 RendererIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT_HIDEATTACHPOINTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT_HIDEATTACHPOINTINFO_CLEAR_OFFSET))(this);
		}
	};
}
