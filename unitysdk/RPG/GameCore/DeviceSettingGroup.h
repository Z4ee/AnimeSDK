#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DeviceSettingInfo; }
namespace System { class String; }

#define RPG_GAMECORE_DEVICESETTINGGROUP_METHOD_2_ED1C112F1A61C362_OFFSET UNITYSDK_OFFSET(0x1D024080)
#define RPG_GAMECORE_DEVICESETTINGGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0242C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceSettingGroup_TypeDefinitionIndex = 16293;

	class DeviceSettingGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SettingName; // 0x10
		::Il2CppArray<::System::String*>* PlatformName; // 0x18
		::System::Int32 MemoryMin; // 0x20
		::System::Int32 MemoryMax; // 0x24
		::RPG::GameCore::DeviceSettingInfo* Setting; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ED1C112F1A61C362(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeviceSettingGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeviceSettingGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICESETTINGGROUP_METHOD_2_ED1C112F1A61C362_OFFSET))(a1, a2);
		}
	};
}
