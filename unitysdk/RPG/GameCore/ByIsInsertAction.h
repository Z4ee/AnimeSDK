#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISINSERTACTION_METHOD_4_1B9E9A6ED6F3EC94_OFFSET UNITYSDK_OFFSET(0x18755270)
#define RPG_GAMECORE_BYISINSERTACTION_METHOD_4_E67CE8DCAE851584_OFFSET UNITYSDK_OFFSET(0x187551A0)
#define RPG_GAMECORE_BYISINSERTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18755220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInsertAction_TypeDefinitionIndex = 21448;

	class ByIsInsertAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::InsertActionType ActionType; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypeFilter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E67CE8DCAE851584(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInsertAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInsertAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_METHOD_4_E67CE8DCAE851584_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1B9E9A6ED6F3EC94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInsertAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_METHOD_4_1B9E9A6ED6F3EC94_OFFSET))(a1, a2);
		}
	};
}
