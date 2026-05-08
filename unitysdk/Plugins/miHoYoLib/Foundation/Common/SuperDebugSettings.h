#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Plugins/miHoYoLib/Foundation/Common/SuperDebugConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PLUGINS_MIHOYOLIB_FOUNDATION_COMMON_SUPERDEBUGSETTINGS_GET_SETTING_OFFSET UNITYSDK_OFFSET(0x19DBD540)
#define PLUGINS_MIHOYOLIB_FOUNDATION_COMMON_SUPERDEBUGSETTINGS_SET_SETTING_OFFSET UNITYSDK_OFFSET(0x19DBD5D0)
#define PLUGINS_MIHOYOLIB_FOUNDATION_COMMON_SUPERDEBUGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBD5E0)

namespace Plugins::miHoYoLib::Foundation::Common
{
	inline static constexpr unsigned int SuperDebugSettings_TypeDefinitionIndex = 7906;

	class SuperDebugSettings : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__init()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebugSettings_TypeDefinitionIndex)->GetStaticField(0x3900);
		}
		static ::Plugins::miHoYoLib::Foundation::Common::SuperDebugConfig* StaticGet__setting()
		{
			return (::Plugins::miHoYoLib::Foundation::Common::SuperDebugConfig*)Il2CppClass::FromTypeDefinitionIndex(SuperDebugSettings_TypeDefinitionIndex)->GetStaticField(0x3904);
		}
		// static const ::System::String* ConfigKey; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLUGINS_MIHOYOLIB_FOUNDATION_COMMON_SUPERDEBUGSETTINGS__CTOR_OFFSET))(this);
		}

		static ::Plugins::miHoYoLib::Foundation::Common::SuperDebugConfig get_Setting()
		{
			return ((::Plugins::miHoYoLib::Foundation::Common::SuperDebugConfig(*)())((::PBYTE)hIl2Cpp + PLUGINS_MIHOYOLIB_FOUNDATION_COMMON_SUPERDEBUGSETTINGS_GET_SETTING_OFFSET))();
		}

		static ::System::Void set_Setting(::Plugins::miHoYoLib::Foundation::Common::SuperDebugConfig value)
		{
			return ((::System::Void(*)(::Plugins::miHoYoLib::Foundation::Common::SuperDebugConfig))((::PBYTE)hIl2Cpp + PLUGINS_MIHOYOLIB_FOUNDATION_COMMON_SUPERDEBUGSETTINGS_SET_SETTING_OFFSET))(value);
		}
	};
}
