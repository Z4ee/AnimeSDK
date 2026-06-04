#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_PROPINITFARMELEMENT_METHOD_3_48A742533CB33DC8_OFFSET UNITYSDK_OFFSET(0x19A90180)
#define RPG_GAMECORE_PROPINITFARMELEMENT_METHOD_3_DE6F7308C8C5F90B_OFFSET UNITYSDK_OFFSET(0x19A90200)
#define RPG_GAMECORE_PROPINITFARMELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A901D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInitFarmElement_TypeDefinitionIndex = 20867;

	class PropInitFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AssistantEffectPath; // 0x18
		::RPG::GameCore::DynamicString* DetectPlayerTriggerName; // 0x20
		::RPG::GameCore::DynamicString* ActiveFarmElementGroundBurstAnimTriggerName; // 0x28
		::RPG::GameCore::DynamicString* ActiveFarmElementMonsterAnimName; // 0x30
		::Il2CppArray<::System::String*>* FarmElementPropColliders; // 0x38
		::RPG::Client::TextID AssistantLeaveTextID; // 0x40
		::RPG::GameCore::DynamicString* MonsterDieAndDissolveEffectPath; // 0x50
		::RPG::GameCore::DynamicString* InactiveFarmElementRestartAnimTriggerName; // 0x58
		::Il2CppArray<::RPG::GameCore::DynamicString*>* InactiveFarmElementFadeOutEffectName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFARMELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48A742533CB33DC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitFarmElement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFARMELEMENT_METHOD_3_48A742533CB33DC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE6F7308C8C5F90B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitFarmElement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITFARMELEMENT_METHOD_3_DE6F7308C8C5F90B_OFFSET))(a1, a2);
		}
	};
}
