#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_04B1B832A07DF5B9_OFFSET UNITYSDK_OFFSET(0x19C14140)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_1832BEB7CA9060C0_OFFSET UNITYSDK_OFFSET(0x19C13F30)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_71801AF12C27BCBE_OFFSET UNITYSDK_OFFSET(0x19C13E60)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_E50808850A26DBBD_OFFSET UNITYSDK_OFFSET(0x19C140C0)
#define RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C13EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasAdvBehaviorFlag_TypeDefinitionIndex = 18958;

	class ST_ByHasAdvBehaviorFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureModifierBehaviorFlag>* Flags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_71801AF12C27BCBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_71801AF12C27BCBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1832BEB7CA9060C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_1832BEB7CA9060C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E50808850A26DBBD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_E50808850A26DBBD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_04B1B832A07DF5B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasAdvBehaviorFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASADVBEHAVIORFLAG_METHOD_4_04B1B832A07DF5B9_OFFSET))(a1, a2);
		}
	};
}
