#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimWeighted; }

#define RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY_METHOD_3_19C96B0FD48843F2_OFFSET UNITYSDK_OFFSET(0x1C56BF70)
#define RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY_METHOD_3_5865EB87721EC13B_OFFSET UNITYSDK_OFFSET(0x1C56BF30)
#define RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56BF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimTriggerRandomPlay_TypeDefinitionIndex = 22154;

	class AnimTriggerRandomPlay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ActiveDelay; // 0x18
		::System::Single ActiveDelayRange; // 0x1C
		::Il2CppArray<::RPG::GameCore::AnimWeighted*>* AnimList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5865EB87721EC13B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimTriggerRandomPlay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimTriggerRandomPlay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY_METHOD_3_5865EB87721EC13B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_19C96B0FD48843F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimTriggerRandomPlay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimTriggerRandomPlay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY_METHOD_3_19C96B0FD48843F2_OFFSET))(a1, a2);
		}
	};
}
