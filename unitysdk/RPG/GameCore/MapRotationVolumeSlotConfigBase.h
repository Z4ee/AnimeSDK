#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE_METHOD_2_D09F207CF7F8D1AB_OFFSET UNITYSDK_OFFSET(0x17381770)
#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE_METHOD_2_EE8449C16FFC1037_OFFSET UNITYSDK_OFFSET(0x173815E0)
#define RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17381450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeSlotConfigBase_TypeDefinitionIndex = 20500;

	class MapRotationVolumeSlotConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SlotID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EE8449C16FFC1037(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationVolumeSlotConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationVolumeSlotConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE_METHOD_2_EE8449C16FFC1037_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_D09F207CF7F8D1AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationVolumeSlotConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationVolumeSlotConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMESLOTCONFIGBASE_METHOD_2_D09F207CF7F8D1AB_OFFSET))(a1, a2);
		}
	};
}
