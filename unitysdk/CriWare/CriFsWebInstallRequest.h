#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsInstallRequest.h"

namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace CriWare { class CriFsWebInstaller; }
namespace System { class String; }

#define CRIWARE_CRIFSWEBINSTALLREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146C67A0)
#define CRIWARE_CRIFSWEBINSTALLREQUEST_GETCRC32_OFFSET UNITYSDK_OFFSET(0x146C6050)
#define CRIWARE_CRIFSWEBINSTALLREQUEST_STOP_OFFSET UNITYSDK_OFFSET(0x146C5F40)
#define CRIWARE_CRIFSWEBINSTALLREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x146C6240)
#define CRIWARE_CRIFSWEBINSTALLREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x146C4F20)

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstallRequest_TypeDefinitionIndex = 37155;

	class CriFsWebInstallRequest : public ::CriWare::CriFsInstallRequest
	{
	public:
		::CriWare::CriFsWebInstaller* installer; // 0x50
		::System::Boolean crc32_set; // 0x58
		::System::UInt32 crc32; // 0x5C

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::CriWare::CriFsRequest_DoneDelegate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLREQUEST__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLREQUEST_STOP_OFFSET))(this);
		}

		::System::Boolean GetCRC32(::System::UInt32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLREQUEST_GETCRC32_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLREQUEST_DISPOSE_OFFSET))(this, a1);
		}
	};
}
