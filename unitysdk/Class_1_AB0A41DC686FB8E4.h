#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityActionDelayExceed; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AB0A41DC686FB8E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1858D120)
#define CLASS_1_AB0A41DC686FB8E4_METHOD_1_5AE6669FF3979E3A_OFFSET UNITYSDK_OFFSET(0x1858D200)
#define CLASS_1_AB0A41DC686FB8E4_METHOD_1_88E2715D1094595E_OFFSET UNITYSDK_OFFSET(0x1858D8A0)
#define CLASS_1_AB0A41DC686FB8E4_METHOD_1_8D281EC6ABB5DF48_OFFSET UNITYSDK_OFFSET(0x1858D2C0)
#define CLASS_1_AB0A41DC686FB8E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1858D080)

inline static constexpr unsigned int Class_1_AB0A41DC686FB8E4_TypeDefinitionIndex = 53427;

class Class_1_AB0A41DC686FB8E4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::RPG::GameCore::LevelEntityActionDelayExceed* Field_1_2; // 0x20
	::RPG::GameCore::TurnBasedGameMode* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_4; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_AB0A41DC686FB8E4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB0A41DC686FB8E4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5AE6669FF3979E3A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB0A41DC686FB8E4_METHOD_1_5AE6669FF3979E3A_OFFSET))(this, a1);
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
