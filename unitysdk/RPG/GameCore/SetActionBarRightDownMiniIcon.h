#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON_METHOD_3_507BCBDF113F1038_OFFSET UNITYSDK_OFFSET(0x176A44E0)
#define RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON_METHOD_3_FEE0C2FED21AB30B_OFFSET UNITYSDK_OFFSET(0x176A4560)
#define RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON__CTOR_OFFSET UNITYSDK_OFFSET(0x176A4530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetActionBarRightDownMiniIcon_TypeDefinitionIndex = 21518;

	class SetActionBarRightDownMiniIcon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* IconPath; // 0x20
		::System::Boolean IsShow; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_507BCBDF113F1038(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetActionBarRightDownMiniIcon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetActionBarRightDownMiniIcon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON_METHOD_3_507BCBDF113F1038_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEE0C2FED21AB30B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetActionBarRightDownMiniIcon* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetActionBarRightDownMiniIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON_METHOD_3_FEE0C2FED21AB30B_OFFSET))(a1, a2);
		}
	};
}
