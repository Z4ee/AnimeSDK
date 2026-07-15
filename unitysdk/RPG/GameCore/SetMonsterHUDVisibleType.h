#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterHUDVisibleType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_METHOD_3_3C1EE7C01010C189_OFFSET UNITYSDK_OFFSET(0x1C6024A0)
#define RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_METHOD_3_9776F3A31F97E9C6_OFFSET UNITYSDK_OFFSET(0x1C602460)
#define RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C602490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterHUDVisibleType_TypeDefinitionIndex = 21998;

	class SetMonsterHUDVisibleType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::MonsterHUDVisibleType ChildPanelVisibleType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9776F3A31F97E9C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHUDVisibleType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHUDVisibleType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_METHOD_3_9776F3A31F97E9C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3C1EE7C01010C189(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterHUDVisibleType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterHUDVisibleType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERHUDVISIBLETYPE_METHOD_3_3C1EE7C01010C189_OFFSET))(a1, a2);
		}
	};
}
