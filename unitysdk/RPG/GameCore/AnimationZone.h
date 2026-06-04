#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ANIMATIONZONE_METHOD_2_1E1C0F3AC9351894_OFFSET UNITYSDK_OFFSET(0x1947AD30)
#define RPG_GAMECORE_ANIMATIONZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1947AF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimationZone_TypeDefinitionIndex = 15513;

	class AnimationZone : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimZoneType ZoneType; // 0x10
		::System::Single NTimeStart; // 0x14
		::System::Single NTimeEnd; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1E1C0F3AC9351894(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimationZone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimationZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONZONE_METHOD_2_1E1C0F3AC9351894_OFFSET))(a1, a2);
		}
	};
}
