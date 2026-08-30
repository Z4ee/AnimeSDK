#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityActionDelayExceed; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AB0A41DC686FB8E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C72FC0)
#define CLASS_1_AB0A41DC686FB8E4_METHOD_1_88E2715D1094595E_OFFSET UNITYSDK_OFFSET(0x14C73740)
#define CLASS_1_AB0A41DC686FB8E4_METHOD_1_8D281EC6ABB5DF48_OFFSET UNITYSDK_OFFSET(0x14C73160)
#define CLASS_1_AB0A41DC686FB8E4_METHOD_1_AD45AC7D6E380383_OFFSET UNITYSDK_OFFSET(0x14C730A0)
#define CLASS_1_AB0A41DC686FB8E4__CTOR_OFFSET UNITYSDK_OFFSET(0x14C72F20)

inline static constexpr unsigned int Class_1_AB0A41DC686FB8E4_TypeDefinitionIndex = 56141;

class Class_1_AB0A41DC686FB8E4 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MFOPKHCEOPJ; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CMJMLNKOOEA; // 0x20
	::RPG::GameCore::LevelEntityActionDelayExceed* DMPNBHDEMMG; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BCLGAEGFJOD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_AB0A41DC686FB8E4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB0A41DC686FB8E4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AD45AC7D6E380383(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB0A41DC686FB8E4_METHOD_1_AD45AC7D6E380383_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D281EC6ABB5DF48(::RPG::GameCore::ActionDelayChangeReason a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB0A41DC686FB8E4_METHOD_1_8D281EC6ABB5DF48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_88E2715D1094595E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AB0A41DC686FB8E4_METHOD_1_88E2715D1094595E_OFFSET))(this, a1, a2);
	}
};
