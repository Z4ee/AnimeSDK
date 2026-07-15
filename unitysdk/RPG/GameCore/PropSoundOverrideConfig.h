#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropSoundConfigOverrideConfig; }

#define RPG_GAMECORE_PROPSOUNDOVERRIDECONFIG_METHOD_2_1838ECD114C9E507_OFFSET UNITYSDK_OFFSET(0x1B9A2D50)
#define RPG_GAMECORE_PROPSOUNDOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A2E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSoundOverrideConfig_TypeDefinitionIndex = 16847;

	class PropSoundOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropSoundConfigOverrideConfig*>* OverridePropSoundConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1838ECD114C9E507(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSoundOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSoundOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDOVERRIDECONFIG_METHOD_2_1838ECD114C9E507_OFFSET))(a1, a2);
		}
	};
}
