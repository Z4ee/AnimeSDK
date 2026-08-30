#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE_METHOD_3_10CEDB2929E21A9A_OFFSET UNITYSDK_OFFSET(0x1CBA01D0)
#define RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE_METHOD_3_70FFE2C36537E9CD_OFFSET UNITYSDK_OFFSET(0x1CBA0210)
#define RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA0200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetColliderGroupState_TypeDefinitionIndex = 20294;

	class AdvSetColliderGroupState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* GroupName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_10CEDB2929E21A9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetColliderGroupState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetColliderGroupState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE_METHOD_3_10CEDB2929E21A9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_70FFE2C36537E9CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetColliderGroupState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetColliderGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETCOLLIDERGROUPSTATE_METHOD_3_70FFE2C36537E9CD_OFFSET))(a1, a2);
		}
	};
}
