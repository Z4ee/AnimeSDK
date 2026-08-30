#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PerformanceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_DIAGNOSTICSSTATISTICMANAGER_DIAGNOSTICSSTART_OFFSET UNITYSDK_OFFSET(0x1C5FD790)
#define MIHOYO_SDK_DIAGNOSTICSSTATISTICMANAGER_DIAGNOSTICSSTOP_OFFSET UNITYSDK_OFFSET(0x1C5FDAD0)
#define MIHOYO_SDK_DIAGNOSTICSSTATISTICMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5FE010)
#define MIHOYO_SDK_DIAGNOSTICSSTATISTICMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FE000)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DiagnosticsStatisticManager_TypeDefinitionIndex = 7902;

	class DiagnosticsStatisticManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::DiagnosticsStatisticManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::DiagnosticsStatisticManager**)Il2CppClass::FromTypeDefinitionIndex(DiagnosticsStatisticManager_TypeDefinitionIndex)->GetStaticField(0x28A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PerformanceInfo*>** StaticGet_startPerforamceInfoDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PerformanceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DiagnosticsStatisticManager_TypeDefinitionIndex)->GetStaticField(0x28A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DIAGNOSTICSSTATISTICMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DIAGNOSTICSSTATISTICMANAGER__CCTOR_OFFSET))();
		}

		::System::Void DiagnosticsStart(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DIAGNOSTICSSTATISTICMANAGER_DIAGNOSTICSSTART_OFFSET))(this, a1, a2);
		}

		::System::Void DiagnosticsStop(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DIAGNOSTICSSTATISTICMANAGER_DIAGNOSTICSSTOP_OFFSET))(this, a1, a2, a3);
		}
	};
}
