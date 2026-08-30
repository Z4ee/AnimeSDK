#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIFSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x164EC540)

namespace CriWare
{
	inline static constexpr unsigned int CriFsConfig_TypeDefinitionIndex = 38854;

	class CriFsConfig : public ::System::Object
	{
	public:
		// static const ::System::Int32 defaultAndroidDeviceReadBitrate = 0x2FAF080; // 0x0
		::System::Int32 numberOfLoaders; // 0x10
		::System::Int32 numberOfBinders; // 0x14
		::System::Int32 numberOfInstallers; // 0x18
		::System::Int32 installBufferSize; // 0x1C
		::System::Int32 maxPath; // 0x20
		::System::String* userAgentString; // 0x28
		::System::Boolean minimizeFileDescriptorUsage; // 0x30
		::System::Boolean enableCrcCheck; // 0x31
		::System::Int32 androidDeviceReadBitrate; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
