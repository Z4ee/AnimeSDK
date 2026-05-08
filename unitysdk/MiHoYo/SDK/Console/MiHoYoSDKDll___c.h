#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A50E340)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CONSOLE_SWITCH_CONTROL_B__167_0_OFFSET UNITYSDK_OFFSET(0x1A50E5E0)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50E380)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__INIT_B__18_0_OFFSET UNITYSDK_OFFSET(0x1A50E390)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int MiHoYoSDKDll___c_TypeDefinitionIndex = 19535;

	class MiHoYoSDKDll___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::System::Int32, ::System::String*>** StaticGet___9__167_0()
		{
			return (::System::Converter_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll___c_TypeDefinitionIndex)->GetStaticField(0x8FB0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll___c_TypeDefinitionIndex)->GetStaticField(0x8FB8);
		}
		static ::MiHoYo::SDK::Console::MiHoYoSDKDll___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::MiHoYoSDKDll___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll___c_TypeDefinitionIndex)->GetStaticField(0x8FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__18_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__INIT_B__18_0_OFFSET))(this, response);
		}

		::System::String* _console_switch_control_b__167_0(::System::Int32 m)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL___C__CONSOLE_SWITCH_CONTROL_B__167_0_OFFSET))(this, m);
		}
	};
}
