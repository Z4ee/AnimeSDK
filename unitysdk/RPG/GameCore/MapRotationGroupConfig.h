#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAPROTATIONGROUPCONFIG_METHOD_2_5FD97E0F0BC33F10_OFFSET UNITYSDK_OFFSET(0x1D227050)
#define RPG_GAMECORE_MAPROTATIONGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2271E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationGroupConfig_TypeDefinitionIndex = 16849;

	class MapRotationGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::Boolean IsPermanent; // 0x14
		::System::Boolean IsPermanentPropTrigger; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGROUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5FD97E0F0BC33F10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MapRotationGroupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MapRotationGroupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONGROUPCONFIG_METHOD_2_5FD97E0F0BC33F10_OFFSET))(a1, a2);
		}
	};
}
