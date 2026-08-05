#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA072F0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA07330)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE___C__STARTLOADINGCOROUTINEIFNEED_B__21_0_OFFSET UNITYSDK_OFFSET(0x1DA07340)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudDataStorage___c_TypeDefinitionIndex = 21225;

	class CloudDataStorage___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CloudDataStorage___c_TypeDefinitionIndex)->GetStaticField(0xB1E0);
		}
		static ::MiHoYo::SDK::MiHoYoCloud::CloudDataStorage___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoCloud::CloudDataStorage___c**)Il2CppClass::FromTypeDefinitionIndex(CloudDataStorage___c_TypeDefinitionIndex)->GetStaticField(0xB1E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE___C__CTOR_OFFSET))(this);
		}

		::System::Void _StartLoadingCoroutineIfNeed_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE___C__STARTLOADINGCOROUTINEIFNEED_B__21_0_OFFSET))(this);
		}
	};
}
