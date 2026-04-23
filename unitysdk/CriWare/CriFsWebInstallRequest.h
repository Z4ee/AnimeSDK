#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsInstallRequest.h"

namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace CriWare { class CriFsWebInstaller; }
namespace System { class String; }

#define CRIWARE_CRIFSWEBINSTALLREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C0BBD0)
#define CRIWARE_CRIFSWEBINSTALLREQUEST_GETCRC32_OFFSET UNITYSDK_OFFSET(0x12C0B4D0)
#define CRIWARE_CRIFSWEBINSTALLREQUEST_STOP_OFFSET UNITYSDK_OFFSET(0x12C0B3C0)
#define CRIWARE_CRIFSWEBINSTALLREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x12C0B6C0)
#define CRIWARE_CRIFSWEBINSTALLREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0A4F0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstallRequest_TypeDefinitionIndex = 36855;

	class CriFsWebInstallRequest : public ::CriWare::CriFsInstallRequest
	{
	public:
		::CriWare::CriFsWebInstaller* installer; // 0x50
		::System::Boolean crc32_set; // 0x58
		::System::UInt32 crc32; // 0x5C

		::System::Void _ctor(::System::String* srcPath, ::System::String* dstPath, ::CriWare::CriFsRequest_DoneDelegate* doneDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLREQUEST__CTOR_OFFSET))(this, srcPath, dstPath, doneDelegate);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLREQUEST_STOP_OFFSET))(this);
		}

		::System::Boolean GetCRC32(::System::UInt32& ret_val)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLREQUEST_GETCRC32_OFFSET))(this, ret_val);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLREQUEST_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
