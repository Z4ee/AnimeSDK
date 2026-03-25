#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/LevelDataComponent_BattleScoringData.h"

namespace RPG::GameCore { class SetBattleScoringItem; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_138533349EF907B6_METHOD_3_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x8A89720)
#define CLASS_3_138533349EF907B6_METHOD_3_9532FEF62A14BB42_OFFSET UNITYSDK_OFFSET(0x8A89B40)
#define CLASS_3_138533349EF907B6_METHOD_3_ABAAB230E1F789B1_OFFSET UNITYSDK_OFFSET(0x8A89C50)
#define CLASS_3_138533349EF907B6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A896A0)
#define CLASS_3_138533349EF907B6__CTOR_OFFSET UNITYSDK_OFFSET(0x8A89670)

inline static constexpr unsigned int Class_3_138533349EF907B6_TypeDefinitionIndex = 47219;

class Class_3_138533349EF907B6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBattleScoringItem*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleScoringItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleScoringItem*))((::PBYTE)hIl2Cpp + CLASS_3_138533349EF907B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138533349EF907B6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_138533349EF907B6_METHOD_3_489E0B827662C211_OFFSET))(this);
	}

	::RPG::GameCore::LevelDataComponent_BattleScoringData Method_3_9532FEF62A14BB42(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LevelDataComponent_BattleScoringData(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_138533349EF907B6_METHOD_3_9532FEF62A14BB42_OFFSET))(this, a1);
	}

	::System::Void Method_3_ABAAB230E1F789B1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_138533349EF907B6_METHOD_3_ABAAB230E1F789B1_OFFSET))(this, a1, a2);
	}
};
