#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_1832BEB7CA9060C0_OFFSET UNITYSDK_OFFSET(0x1D4C4030)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_5E3711823738BBF0_OFFSET UNITYSDK_OFFSET(0x1D4C41C0)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_9BA6BABE2C239055_OFFSET UNITYSDK_OFFSET(0x1D4C3FF0)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_E0195C49A3D97D87_OFFSET UNITYSDK_OFFSET(0x1D4C41F0)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C4020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasAdvBehaviorFlag_TypeDefinitionIndex = 19849;

	class ST_ByHasAdvBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureModifierBehaviorFlag>* Flags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9BA6BABE2C239055(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_9BA6BABE2C239055_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1832BEB7CA9060C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_1832BEB7CA9060C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E3711823738BBF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_5E3711823738BBF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E0195C49A3D97D87(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_E0195C49A3D97D87_OFFSET))(a1, a2);
		}
	};
}
