#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLEPOSTEVENT_METHOD_3_28C0D6C49E1C0090_OFFSET UNITYSDK_OFFSET(0x1C38E180)
#define RPG_GAMECORE_CHIMERABATTLEPOSTEVENT_METHOD_3_CD2F3851201553D8_OFFSET UNITYSDK_OFFSET(0x1C38FA30)
#define RPG_GAMECORE_CHIMERABATTLEPOSTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38E170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattlePostEvent_TypeDefinitionIndex = 15235;

	class ChimeraBattlePostEvent : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* To; // 0x18
		::System::String* Content; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPOSTEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD2F3851201553D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattlePostEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattlePostEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPOSTEVENT_METHOD_3_CD2F3851201553D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28C0D6C49E1C0090(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattlePostEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattlePostEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPOSTEVENT_METHOD_3_28C0D6C49E1C0090_OFFSET))(a1, a2);
		}
	};
}
