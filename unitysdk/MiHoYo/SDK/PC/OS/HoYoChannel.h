#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KibanaLogLevel.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETCHANNELSTRING_OFFSET UNITYSDK_OFFSET(0x1A17BED0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERNAME_OFFSET UNITYSDK_OFFSET(0x1A17BF30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A17BAD0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISINITERROR_OFFSET UNITYSDK_OFFSET(0x1A17C560)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1A17BF70)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1A17CF80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A17CFA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17CF90)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel_TypeDefinitionIndex = 19344;

	class HoYoChannel : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::HoYoChannel** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannel**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0xA210);
		}
		static ::System::Int32* StaticGet__thirdErrorCode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HoYoChannel_TypeDefinitionIndex)->GetStaticField(0x4520);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		// static const ::System::Int32 RESULT_TIMEOUT = 0x80000000; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannel* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannel*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* GetChannelString(::MiHoYo::SDK::SubChannelType type)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::SubChannelType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETCHANNELSTRING_OFFSET))(type);
		}

		::System::String* GetUserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_GETUSERNAME_OFFSET))(this);
		}

		::System::Void LogReport(::MiHoYo::SDK::KibanaLogLevel level, ::System::String* key, ::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KibanaLogLevel, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_LOGREPORT_OFFSET))(this, level, key, msg, code);
		}

		static ::System::Boolean IsInitError(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Boolean(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ISINITERROR_OFFSET))(callback);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL_ONAPPLICATIONQUIT_OFFSET))(this);
		}
	};
}
