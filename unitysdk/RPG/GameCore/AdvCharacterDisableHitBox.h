#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX_METHOD_3_44AF52ACC94A7CB2_OFFSET UNITYSDK_OFFSET(0x1CDC3BB0)
#define RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX_METHOD_3_B3410652FC62197B_OFFSET UNITYSDK_OFFSET(0x1CDC3C00)
#define RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC3BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterDisableHitBox_TypeDefinitionIndex = 22151;

	class AdvCharacterDisableHitBox : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Boolean AffectMainCollider; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_44AF52ACC94A7CB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterDisableHitBox*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterDisableHitBox*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX_METHOD_3_44AF52ACC94A7CB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B3410652FC62197B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCharacterDisableHitBox* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCharacterDisableHitBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERDISABLEHITBOX_METHOD_3_B3410652FC62197B_OFFSET))(a1, a2);
		}
	};
}
