#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT_HIDEATTACHPOINTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xCD81C10)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT_HIDEATTACHPOINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCD81C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisibleComponent_HideAttachPointInfo_TypeDefinitionIndex = 53443;

	class CharacterVisibleComponent_HideAttachPointInfo : public ::System::Object
	{
	public:
		::System::Int32 RendererIndex; // 0x10
		::System::UInt64 HideReason; // 0x18

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
