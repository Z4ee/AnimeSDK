#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimatorStateGroupZoneDescConfig; }

#define RPG_GAMECORE_ANIMATORSTATEGROUPZONENEWCONFIG_METHOD_2_5D29E097954E7729_OFFSET UNITYSDK_OFFSET(0x186A6AB0)
#define RPG_GAMECORE_ANIMATORSTATEGROUPZONENEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x186A6B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorStateGroupZoneNewConfig_TypeDefinitionIndex = 15455;

	class AnimatorStateGroupZoneNewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimatorStateGroupZoneDescConfig*>* AnimatorStateGroupZoneDescList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEGROUPZONENEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5D29E097954E7729(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimatorStateGroupZoneNewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimatorStateGroupZoneNewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEGROUPZONENEWCONFIG_METHOD_2_5D29E097954E7729_OFFSET))(a1, a2);
		}
	};
}
