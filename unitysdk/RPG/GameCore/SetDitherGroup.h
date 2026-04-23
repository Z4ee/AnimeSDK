#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDITHERGROUP_METHOD_3_A6B25F25C67E701F_OFFSET UNITYSDK_OFFSET(0x18E14CC0)
#define RPG_GAMECORE_SETDITHERGROUP_METHOD_3_B75B7931A16809D4_OFFSET UNITYSDK_OFFSET(0x18E14C40)
#define RPG_GAMECORE_SETDITHERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18E14C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDitherGroup_TypeDefinitionIndex = 21824;

	class SetDitherGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::RPG::GameCore::TargetEvaluator* ShowList; // 0x20
		::RPG::GameCore::TargetEvaluator* HideList; // 0x28
		::System::Int32 Priority; // 0x30
		::System::Single FadeDuration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDITHERGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B75B7931A16809D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDitherGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDitherGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDITHERGROUP_METHOD_3_B75B7931A16809D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A6B25F25C67E701F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDitherGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDitherGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDITHERGROUP_METHOD_3_A6B25F25C67E701F_OFFSET))(a1, a2);
		}
	};
}
