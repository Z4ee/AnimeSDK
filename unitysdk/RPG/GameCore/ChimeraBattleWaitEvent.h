#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLEWAITEVENT_METHOD_3_182E32511DC00450_OFFSET UNITYSDK_OFFSET(0x17094890)
#define RPG_GAMECORE_CHIMERABATTLEWAITEVENT_METHOD_3_CCE63574FEA70BCA_OFFSET UNITYSDK_OFFSET(0x17093AE0)
#define RPG_GAMECORE_CHIMERABATTLEWAITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17093AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleWaitEvent_TypeDefinitionIndex = 14539;

	class ChimeraBattleWaitEvent : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* Content; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEWAITEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_182E32511DC00450(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleWaitEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleWaitEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEWAITEVENT_METHOD_3_182E32511DC00450_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCE63574FEA70BCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleWaitEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleWaitEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEWAITEVENT_METHOD_3_CCE63574FEA70BCA_OFFSET))(a1, a2);
		}
	};
}
