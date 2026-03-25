#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FilterEffectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_METHOD_3_46D7F4805C60DF8A_OFFSET UNITYSDK_OFFSET(0x172A8D70)
#define RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_METHOD_3_901F236C4FD4B4FB_OFFSET UNITYSDK_OFFSET(0x172A8CE0)
#define RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x172A8D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideCharacterFilteredEffect_TypeDefinitionIndex = 21350;

	class HideCharacterFilteredEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FilterEffectType FilterType; // 0x20
		::System::Boolean AliveOnly; // 0x24
		::System::Boolean IsHide; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_901F236C4FD4B4FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideCharacterFilteredEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideCharacterFilteredEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_METHOD_3_901F236C4FD4B4FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46D7F4805C60DF8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideCharacterFilteredEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideCharacterFilteredEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDECHARACTERFILTEREDEFFECT_METHOD_3_46D7F4805C60DF8A_OFFSET))(a1, a2);
		}
	};
}
