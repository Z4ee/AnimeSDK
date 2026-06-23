#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A997090)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CONNECT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A9970E0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9970D0)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudPipe___c_TypeDefinitionIndex = 20882;

	class CloudPipe___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe___c_TypeDefinitionIndex)->GetStaticField(0x9BA0);
		}
		static ::MiHoYo::SDK::MiHoYoCloud::CloudPipe___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoCloud::CloudPipe___c**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe___c_TypeDefinitionIndex)->GetStaticField(0x9BA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__9_0(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CONNECT_B__9_0_OFFSET))(this, data);
		}
	};
}
