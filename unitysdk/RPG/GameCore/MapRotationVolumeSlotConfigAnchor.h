#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeSlotConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR_METHOD_3_8A407EBA982173F4_OFFSET UNITYSDK_OFFSET(0x1D227A40)
#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR_METHOD_3_9E786E97244CA868_OFFSET UNITYSDK_OFFSET(0x1D227AA0)
#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D227A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeSlotConfigAnchor_TypeDefinitionIndex = 16851;

	class MapRotationVolumeSlotConfigAnchor : public ::RPG::GameCore::MapRotationVolumeSlotConfigBase
	{
	public:
		::RPG::GameCore::DynamicString* LevelAnchorKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A407EBA982173F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationVolumeSlotConfigAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationVolumeSlotConfigAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR_METHOD_3_8A407EBA982173F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E786E97244CA868(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationVolumeSlotConfigAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationVolumeSlotConfigAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGANCHOR_METHOD_3_9E786E97244CA868_OFFSET))(a1, a2);
		}
	};
}
