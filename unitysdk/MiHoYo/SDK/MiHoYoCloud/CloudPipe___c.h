#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A62E110)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CONNECT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A62E160)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62E150)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudPipe___c_TypeDefinitionIndex = 9077;

	class CloudPipe___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe___c_TypeDefinitionIndex)->GetStaticField(0x16C80);
		}
		static ::MiHoYo::SDK::MiHoYoCloud::CloudPipe___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoCloud::CloudPipe___c**)Il2CppClass::FromTypeDefinitionIndex(CloudPipe___c_TypeDefinitionIndex)->GetStaticField(0x16C88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__9_0(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CONNECT_B__9_0_OFFSET))(this, a1);
		}
	};
}
