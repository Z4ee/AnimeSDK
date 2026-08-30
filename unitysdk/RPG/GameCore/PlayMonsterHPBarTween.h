#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYMONSTERHPBARTWEEN_METHOD_3_141468104449734D_OFFSET UNITYSDK_OFFSET(0x1D7A4EA0)
#define RPG_GAMECORE_PLAYMONSTERHPBARTWEEN_METHOD_3_9E11C1BC7FDF4770_OFFSET UNITYSDK_OFFSET(0x1D7A4EE0)
#define RPG_GAMECORE_PLAYMONSTERHPBARTWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A4ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMonsterHPBarTween_TypeDefinitionIndex = 22566;

	class PlayMonsterHPBarTween : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* BackgroundColor; // 0x20
		::System::Boolean FollowSimulationSpeed; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMONSTERHPBARTWEEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_141468104449734D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMonsterHPBarTween*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMonsterHPBarTween*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMONSTERHPBARTWEEN_METHOD_3_141468104449734D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E11C1BC7FDF4770(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMonsterHPBarTween* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMonsterHPBarTween*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMONSTERHPBARTWEEN_METHOD_3_9E11C1BC7FDF4770_OFFSET))(a1, a2);
		}
	};
}
