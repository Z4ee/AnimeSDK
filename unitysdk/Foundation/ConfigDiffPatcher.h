#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_CONFIGDIFFPATCHER_GETDEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x108372D0)
#define FOUNDATION_CONFIGDIFFPATCHER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10837380)
#define FOUNDATION_CONFIGDIFFPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x10837370)
#define FOUNDATION_CONFIGDIFFPATCHER___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10837460)

namespace Foundation
{
	inline static constexpr unsigned int ConfigDiffPatcher_TypeDefinitionIndex = 53441;

	class ConfigDiffPatcher : public ::System::Object
	{
	public:
		static ::Foundation::ConfigDiffPatcher** StaticGet__configDiffPatcher()
		{
			return (::Foundation::ConfigDiffPatcher**)Il2CppClass::FromTypeDefinitionIndex(ConfigDiffPatcher_TypeDefinitionIndex)->GetStaticField(0x32EE0);
		}
		::System::Int32 diffThreadCount; // 0x10
		::System::Int32 timeSlice; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONFIGDIFFPATCHER__CTOR_OFFSET))(this);
		}

		static ::Foundation::ConfigDiffPatcher* GetDefaultConfig()
		{
			return ((::Foundation::ConfigDiffPatcher*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_CONFIGDIFFPATCHER_GETDEFAULTCONFIG_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONFIGDIFFPATCHER_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONFIGDIFFPATCHER___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
