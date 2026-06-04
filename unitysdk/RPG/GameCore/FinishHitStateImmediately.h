#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_METHOD_3_19765CAD45C06517_OFFSET UNITYSDK_OFFSET(0x19721890)
#define RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_METHOD_3_361E3664C06DE166_OFFSET UNITYSDK_OFFSET(0x19721810)
#define RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0x19721860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishHitStateImmediately_TypeDefinitionIndex = 22178;

	class FinishHitStateImmediately : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_361E3664C06DE166(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishHitStateImmediately*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishHitStateImmediately*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_METHOD_3_361E3664C06DE166_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_19765CAD45C06517(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishHitStateImmediately* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishHitStateImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHHITSTATEIMMEDIATELY_METHOD_3_19765CAD45C06517_OFFSET))(a1, a2);
		}
	};
}
