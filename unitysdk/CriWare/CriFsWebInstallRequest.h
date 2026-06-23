#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsInstallRequest.h"

namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace CriWare { class CriFsWebInstaller; }
namespace System { class String; }

#define CRIWARE_CRIFSWEBINSTALLREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E24B450)
#define CRIWARE_CRIFSWEBINSTALLREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E24B160)
#define CRIWARE_CRIFSWEBINSTALLREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E24AFF0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstallRequest_TypeDefinitionIndex = 34318;

	class CriFsWebInstallRequest : public ::CriWare::CriFsInstallRequest
	{
	public:
		::CriWare::CriFsWebInstaller* installer; // 0x50
		::System::UInt32 crc32; // 0x58
		::System::Boolean crc32_set; // 0x5C

		::System::Void _ctor(::System::String* srcPath, ::System::String* dstPath, ::CriWare::CriFsRequest_DoneDelegate* doneDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLREQUEST__CTOR_OFFSET))(this, srcPath, dstPath, doneDelegate);
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
