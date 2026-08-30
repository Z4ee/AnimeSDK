#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class EOSParametersModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTIDGFX_OFFSET UNITYSDK_OFFSET(0xB22C780)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTSECRETGFX_OFFSET UNITYSDK_OFFSET(0xB22C970)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETDEPLOYMENTIDGFX_OFFSET UNITYSDK_OFFSET(0xB22CD50)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPLATFORMHANDLERGFX_OFFSET UNITYSDK_OFFSET(0xB22C510)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPRODUCTIDGFX_OFFSET UNITYSDK_OFFSET(0xB22C590)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETSANDBOXIDGFX_OFFSET UNITYSDK_OFFSET(0xB22CB60)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETEOSPARAMETERSMODEL_OFFSET UNITYSDK_OFFSET(0xB22D070)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETPLATFORMHANDLER_OFFSET UNITYSDK_OFFSET(0xB22D060)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETSTRINGFROMNATIVE_OFFSET UNITYSDK_OFFSET(0xB22CF40)
#define MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xB225970)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSPluginImport_TypeDefinitionIndex = 46770;

	class MiHoYoSDKEOSPluginImport : public ::System::Object
	{
	public:
		::MiHoYo::SDK::EOSParametersModel* parametersModel; // 0x10
		::System::IntPtr eosPlatform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr EOS_Unity_GetPlatformHandlerGfx()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPLATFORMHANDLERGFX_OFFSET))();
		}

		static ::System::Int32 EOS_Unity_GetProductIdGfx(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETPRODUCTIDGFX_OFFSET))(a1, a2);
		}

		static ::System::Int32 EOS_Unity_GetClientIdGfx(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTIDGFX_OFFSET))(a1, a2);
		}

		static ::System::Int32 EOS_Unity_GetClientSecretGfx(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETCLIENTSECRETGFX_OFFSET))(a1, a2);
		}

		static ::System::Int32 EOS_Unity_GetSandboxIdGfx(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETSANDBOXIDGFX_OFFSET))(a1, a2);
		}

		static ::System::Int32 EOS_Unity_GetDeploymentIdGfx(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_EOS_UNITY_GETDEPLOYMENTIDGFX_OFFSET))(a1, a2);
		}

		static ::System::String* GetStringFromNative(::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>* a1)
		{
			return ((::System::String*(*)(::System::Func_3<::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETSTRINGFROMNATIVE_OFFSET))(a1);
		}

		::System::IntPtr GetPlatformHandler()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETPLATFORMHANDLER_OFFSET))(this);
		}

		::MiHoYo::SDK::EOSParametersModel* GetEOSParametersModel()
		{
			return ((::MiHoYo::SDK::EOSParametersModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSPLUGINIMPORT_GETEOSPARAMETERSMODEL_OFFSET))(this);
		}
	};
}
