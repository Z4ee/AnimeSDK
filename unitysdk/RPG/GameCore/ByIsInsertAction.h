#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISINSERTACTION_METHOD_4_086D0BE9CFBA6E7B_OFFSET UNITYSDK_OFFSET(0x17030680)
#define RPG_GAMECORE_BYISINSERTACTION_METHOD_4_7C1746FC6E5C7E37_OFFSET UNITYSDK_OFFSET(0x17030750)
#define RPG_GAMECORE_BYISINSERTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17030700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInsertAction_TypeDefinitionIndex = 20746;

	class ByIsInsertAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::InsertActionType ActionType; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypeFilter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_086D0BE9CFBA6E7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInsertAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInsertAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_METHOD_4_086D0BE9CFBA6E7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C1746FC6E5C7E37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInsertAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInsertAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINSERTACTION_METHOD_4_7C1746FC6E5C7E37_OFFSET))(a1, a2);
		}
	};
}
