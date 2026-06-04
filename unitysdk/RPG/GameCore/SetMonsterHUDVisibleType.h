#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterHUDVisibleType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_METHOD_3_BDDEA7FAD7E9D30C_OFFSET UNITYSDK_OFFSET(0x19C57CE0)
#define RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_METHOD_3_DE5EB9C9342219C7_OFFSET UNITYSDK_OFFSET(0x19C57D60)
#define RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C57D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterHUDVisibleType_TypeDefinitionIndex = 21576;

	class SetMonsterHUDVisibleType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MonsterHUDVisibleType ChildPanelVisibleType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BDDEA7FAD7E9D30C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHUDVisibleType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHUDVisibleType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_METHOD_3_BDDEA7FAD7E9D30C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE5EB9C9342219C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHUDVisibleType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHUDVisibleType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_METHOD_3_DE5EB9C9342219C7_OFFSET))(a1, a2);
		}
	};
}
