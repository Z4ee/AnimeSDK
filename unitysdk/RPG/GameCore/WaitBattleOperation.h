#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialBattleOperationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITBATTLEOPERATION_METHOD_3_5136D6CE7A88E050_OFFSET UNITYSDK_OFFSET(0x1B8A14A0)
#define RPG_GAMECORE_WAITBATTLEOPERATION_METHOD_3_A77F3706D322B82D_OFFSET UNITYSDK_OFFSET(0x1B8A1450)
#define RPG_GAMECORE_WAITBATTLEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A1490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBattleOperation_TypeDefinitionIndex = 23514;

	class WaitBattleOperation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialBattleOperationType OperationType; // 0x18
		::System::String* Param; // 0x20
		::System::Single ProtectTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A77F3706D322B82D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBattleOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBattleOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEOPERATION_METHOD_3_A77F3706D322B82D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5136D6CE7A88E050(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBattleOperation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBattleOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATTLEOPERATION_METHOD_3_5136D6CE7A88E050_OFFSET))(a1, a2);
		}
	};
}
