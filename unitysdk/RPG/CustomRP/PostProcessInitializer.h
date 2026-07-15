#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_POSTPROCESSINITIALIZER_INITVOLUMEMANAGER_OFFSET UNITYSDK_OFFSET(0x16BF4F20)
#define RPG_CUSTOMRP_POSTPROCESSINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF5B20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PostProcessInitializer_TypeDefinitionIndex = 36232;

	class PostProcessInitializer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_POSTPROCESSINITIALIZER__CTOR_OFFSET))(this);
		}

		static ::System::Void InitVolumeManager()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_POSTPROCESSINITIALIZER_INITVOLUMEMANAGER_OFFSET))();
		}
	};
}
