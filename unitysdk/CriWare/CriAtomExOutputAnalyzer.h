#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace CriWare { class CriAtomExOutputAnalyzer_PcmCaptureCallback; }
namespace CriWare { class CriAtomExPlayer; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1C54B740)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1C54B8E0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C54B6C0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUSBYNAME_OFFSET UNITYSDK_OFFSET(0x1C54B9E0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1C54B960)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUS_OFFSET UNITYSDK_OFFSET(0x1C54B5B0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET UNITYSDK_OFFSET(0x1C54B2F0)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C54B130)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C54B120)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C54BB00)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C54BB70)
#define CRIWARE_CRIATOMEXOUTPUTANALYZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54BA80)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputAnalyzer_TypeDefinitionIndex = 32744;

	class CriAtomExOutputAnalyzer : public ::CriWare::CriDisposable
	{
	public:
		static ::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback** StaticGet_UserPcmCaptureCallback()
		{
			return (::CriWare::CriAtomExOutputAnalyzer_PcmCaptureCallback**)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0x25F80);
		}
		static ::System::IntPtr* StaticGet_InternalCallbackFunctionPointer()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(CriAtomExOutputAnalyzer_TypeDefinitionIndex)->GetStaticField(0x7F10);
		}
		::System::String* busName; // 0x20
		::CriWare::CriAtomExPlayer* player; // 0x28
		::System::IntPtr handle; // 0x30
		::System::Int32 numCapturedPcmSamples; // 0x38
		::System::Int32 numBands; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Boolean AttachExPlayer(::CriWare::CriAtomExPlayer* player)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriAtomExPlayer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET))(this, player);
		}

		::System::Void DetachExPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET))(this);
		}

		::System::Void DetachDspBus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUS_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_FINALIZE_OFFSET))(this);
		}

		static ::System::Void criAtomExOutputAnalyzer_Destroy(::System::IntPtr analyzer)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DESTROY_OFFSET))(analyzer);
		}

		static ::System::Void criAtomExOutputAnalyzer_AttachExPlayer(::System::IntPtr analyzer, ::System::IntPtr player)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_ATTACHEXPLAYER_OFFSET))(analyzer, player);
		}

		static ::System::Void criAtomExOutputAnalyzer_DetachExPlayer(::System::IntPtr analyzer, ::System::IntPtr player)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHEXPLAYER_OFFSET))(analyzer, player);
		}

		static ::System::Void criAtomExOutputAnalyzer_DetachDspBusByName(::System::IntPtr analyzer, ::System::String* busName)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTANALYZER_CRIATOMEXOUTPUTANALYZER_DETACHDSPBUSBYNAME_OFFSET))(analyzer, busName);
		}
	};
}
