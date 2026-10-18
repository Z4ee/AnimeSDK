#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_BLOCKREPORT_OFFSET UNITYSDK_OFFSET(0xAF59D70)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTDELETEUNSENT_OFFSET UNITYSDK_OFFSET(0xAF594B0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTSETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xAF59680)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORT_OFFSET UNITYSDK_OFFSET(0xAF59890)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_GAMELOGREPORT_OFFSET UNITYSDK_OFFSET(0xAF58D80)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_INITCONFIG_OFFSET UNITYSDK_OFFSET(0xAF560C0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTDELETEUNSENT_OFFSET UNITYSDK_OFFSET(0xAF59600)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTSETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xAF597F0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORT_OFFSET UNITYSDK_OFFSET(0xAF59CD0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_GAMELOGREPORT_OFFSET UNITYSDK_OFFSET(0xAF593A0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INIT_OFFSET UNITYSDK_OFFSET(0xAF57270)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLCRASHREPORT_OFFSET UNITYSDK_OFFSET(0xAF58940)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLGAMELOG_OFFSET UNITYSDK_OFFSET(0xAF58830)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLHANG_OFFSET UNITYSDK_OFFSET(0xAF589E0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLLOGPLUGIN_OFFSET UNITYSDK_OFFSET(0xAF58A80)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLREPLAY_OFFSET UNITYSDK_OFFSET(0xAF588C0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_ONHANG_OFFSET UNITYSDK_OFFSET(0xAF5A670)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCONFIG_OFFSET UNITYSDK_OFFSET(0xAF57320)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xAF58CE0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETFTCSWITCH_OFFSET UNITYSDK_OFFSET(0xAF5AAA0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETLRSAG_OFFSET UNITYSDK_OFFSET(0xAF5A8D0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_START_OFFSET UNITYSDK_OFFSET(0xAF58B20)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCONFIG_OFFSET UNITYSDK_OFFSET(0xAF573C0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xAF58BA0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETFTCSWITCH_OFFSET UNITYSDK_OFFSET(0xAF5A950)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETLRSAG_OFFSET UNITYSDK_OFFSET(0xAF5A780)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_START_OFFSET UNITYSDK_OFFSET(0xAF57500)
#define MIHOYO_SDK_ASTROLABEINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF5AB30)
#define MIHOYO_SDK_ASTROLABEINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF5AB20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AstrolabeInterface_TypeDefinitionIndex = 46506;

	class AstrolabeInterface : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_crashCustomData()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AstrolabeInterface_TypeDefinitionIndex)->GetStaticField(0x1EDB0);
		}
		static ::System::String** StaticGet_crashDumpPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AstrolabeInterface_TypeDefinitionIndex)->GetStaticField(0x1EDB8);
		}
		static ::System::String** StaticGet_sensitiveKeys()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AstrolabeInterface_TypeDefinitionIndex)->GetStaticField(0x1EDC0);
		}
		static ::System::Boolean* StaticGet_isSensitiveEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AstrolabeInterface_TypeDefinitionIndex)->GetStaticField(0x6F80);
		}
		static ::System::Int32* StaticGet_maxStackDepth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AstrolabeInterface_TypeDefinitionIndex)->GetStaticField(0x6F84);
		}
		// static const ::System::String* MODULE_NAME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE__CCTOR_OFFSET))();
		}

		static ::System::Void Astrolabe_InitConfig(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_INITCONFIG_OFFSET))(a1, a2);
		}

		static ::System::Void Astrolabe_SetConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCONFIG_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Start(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_START_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_SetCustomData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCUSTOMDATA_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_GameLogReport(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_GAMELOGREPORT_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_CrashReportDeleteUnSent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTDELETEUNSENT_OFFSET))();
		}

		static ::System::Void Astrolabe_CrashReportSetCustomData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTSETCUSTOMDATA_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_CrashReport(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORT_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_BlockReport(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_BLOCKREPORT_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_SetLrsag(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETLRSAG_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_SetFtcSwitch(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETFTCSWITCH_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_Init(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INIT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Astrolabe_Native_SetConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCONFIG_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_Start()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_START_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_SetCustomData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCUSTOMDATA_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_InstallGameLog(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLGAMELOG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Astrolabe_Native_GameLogReport(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_GAMELOGREPORT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Astrolabe_Native_InstallCrashReport(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLCRASHREPORT_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_CrashReportDeleteUnSent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTDELETEUNSENT_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_CrashReportSetCustomData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTSETCUSTOMDATA_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_CrashReport(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORT_OFFSET))(a1, a2);
		}

		static ::System::Void Astrolabe_Native_InstallHang(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLHANG_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_OnHang(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt32 a3, ::System::String* a4, ::System::UInt32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::UInt64, ::System::UInt32, ::System::String*, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_ONHANG_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void Astrolabe_Native_InstallLogPlugin(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLLOGPLUGIN_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_InstallReplay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLREPLAY_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_SetLrsag(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETLRSAG_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_SetFtcSwitch(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETFTCSWITCH_OFFSET))(a1);
		}
	};
}
