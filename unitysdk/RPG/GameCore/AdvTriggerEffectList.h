#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVTRIGGEREFFECTLIST_METHOD_3_7A5373EB8EBEB84C_OFFSET UNITYSDK_OFFSET(0x16F45E90)
#define RPG_GAMECORE_ADVTRIGGEREFFECTLIST_METHOD_3_9FFF782D9471E65A_OFFSET UNITYSDK_OFFSET(0x16F45E10)
#define RPG_GAMECORE_ADVTRIGGEREFFECTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x16F45E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTriggerEffectList_TypeDefinitionIndex = 20513;

	class AdvTriggerEffectList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* ConfigNameList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGEREFFECTLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FFF782D9471E65A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTriggerEffectList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTriggerEffectList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGEREFFECTLIST_METHOD_3_9FFF782D9471E65A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A5373EB8EBEB84C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTriggerEffectList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGEREFFECTLIST_METHOD_3_7A5373EB8EBEB84C_OFFSET))(a1, a2);
		}
	};
}
