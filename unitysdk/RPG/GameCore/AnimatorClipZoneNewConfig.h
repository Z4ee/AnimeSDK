#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimatorClipZoneDescConfig; }

#define RPG_GAMECORE_ANIMATORCLIPZONENEWCONFIG_METHOD_2_900EB439B8CF7903_OFFSET UNITYSDK_OFFSET(0x1CE1E720)
#define RPG_GAMECORE_ANIMATORCLIPZONENEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1E810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorClipZoneNewConfig_TypeDefinitionIndex = 16159;

	class AnimatorClipZoneNewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimatorClipZoneDescConfig*>* AnimatorClipZoneDescList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORCLIPZONENEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_900EB439B8CF7903(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimatorClipZoneNewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimatorClipZoneNewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORCLIPZONENEWCONFIG_METHOD_2_900EB439B8CF7903_OFFSET))(a1, a2);
		}
	};
}
