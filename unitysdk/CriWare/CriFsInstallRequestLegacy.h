#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsInstallRequest.h"

namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsInstaller; }
namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace System { class String; }

#define CRIWARE_CRIFSINSTALLREQUESTLEGACY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146C0CD0)
#define CRIWARE_CRIFSINSTALLREQUESTLEGACY_STOP_OFFSET UNITYSDK_OFFSET(0x146C0220)
#define CRIWARE_CRIFSINSTALLREQUESTLEGACY_UPDATE_OFFSET UNITYSDK_OFFSET(0x146C0870)
#define CRIWARE_CRIFSINSTALLREQUESTLEGACY__CTOR_OFFSET UNITYSDK_OFFSET(0x146C0330)

namespace CriWare
{
	inline static constexpr unsigned int CriFsInstallRequestLegacy_TypeDefinitionIndex = 37154;

	class CriFsInstallRequestLegacy : public ::CriWare::CriFsInstallRequest
	{
	public:
		::CriWare::CriFsInstaller* installer; // 0x50

		::System::Void _ctor(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::String* a3, ::CriWare::CriFsRequest_DoneDelegate* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUESTLEGACY__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUESTLEGACY_STOP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUESTLEGACY_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLREQUESTLEGACY_DISPOSE_OFFSET))(this, a1);
		}
	};
}
