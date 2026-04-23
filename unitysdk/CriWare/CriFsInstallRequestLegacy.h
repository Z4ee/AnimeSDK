#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsInstallRequest.h"

namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsInstaller; }
namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace System { class String; }

#define CRIWARE_CRIFSINSTALLREQUESTLEGACY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C061B0)
#define CRIWARE_CRIFSINSTALLREQUESTLEGACY_STOP_OFFSET UNITYSDK_OFFSET(0x12C05780)
#define CRIWARE_CRIFSINSTALLREQUESTLEGACY_UPDATE_OFFSET UNITYSDK_OFFSET(0x12C05DD0)
#define CRIWARE_CRIFSINSTALLREQUESTLEGACY__CTOR_OFFSET UNITYSDK_OFFSET(0x12C05890)

namespace CriWare
{
	inline static constexpr unsigned int CriFsInstallRequestLegacy_TypeDefinitionIndex = 36854;

	class CriFsInstallRequestLegacy : public ::CriWare::CriFsInstallRequest
	{
	public:
		::CriWare::CriFsInstaller* installer; // 0x50

		::System::Void _ctor(::CriWare::CriFsBinder* srcBinder, ::System::String* srcPath, ::System::String* dstPath, ::CriWare::CriFsRequest_DoneDelegate* doneDelegate, ::System::Int32 installBufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUESTLEGACY__CTOR_OFFSET))(this, srcBinder, srcPath, dstPath, doneDelegate, installBufferSize);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUESTLEGACY_STOP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUESTLEGACY_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUESTLEGACY_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
