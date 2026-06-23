#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9795F0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A979630)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__STARTLOADINGCOROUTINEIFNEED_B__21_0_OFFSET UNITYSDK_OFFSET(0x1A979640)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudDataStorage___c_TypeDefinitionIndex = 20627;

	class CloudDataStorage___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CloudDataStorage___c_TypeDefinitionIndex)->GetStaticField(0x9800);
		}
		static ::MiHoYo::SDK::Cloud::CloudDataStorage___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Cloud::CloudDataStorage___c**)Il2CppClass::FromTypeDefinitionIndex(CloudDataStorage___c_TypeDefinitionIndex)->GetStaticField(0x9808);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__CTOR_OFFSET))(this);
		}

		::System::Void _StartLoadingCoroutineIfNeed_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__STARTLOADINGCOROUTINEIFNEED_B__21_0_OFFSET))(this);
		}
	};
}
