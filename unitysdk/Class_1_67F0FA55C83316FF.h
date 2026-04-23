#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityActionDelayExceed; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_67F0FA55C83316FF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123F6850)
#define CLASS_1_67F0FA55C83316FF_METHOD_1_8D281EC6ABB5DF48_OFFSET UNITYSDK_OFFSET(0x123F6A00)
#define CLASS_1_67F0FA55C83316FF_METHOD_1_8E261F51A50A8595_OFFSET UNITYSDK_OFFSET(0x123F6930)
#define CLASS_1_67F0FA55C83316FF_METHOD_1_FCAE09E5575618A8_OFFSET UNITYSDK_OFFSET(0x123F7030)
#define CLASS_1_67F0FA55C83316FF__CTOR_OFFSET UNITYSDK_OFFSET(0x123F67B0)

inline static constexpr unsigned int Class_1_67F0FA55C83316FF_TypeDefinitionIndex = 51606;

class Class_1_67F0FA55C83316FF : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedGameMode* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::RPG::GameCore::LevelEntityActionDelayExceed* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_67F0FA55C83316FF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67F0FA55C83316FF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8E261F51A50A8595(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_67F0FA55C83316FF_METHOD_1_8E261F51A50A8595_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D281EC6ABB5DF48(::RPG::GameCore::ActionDelayChangeReason a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_67F0FA55C83316FF_METHOD_1_8D281EC6ABB5DF48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FCAE09E5575618A8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_67F0FA55C83316FF_METHOD_1_FCAE09E5575618A8_OFFSET))(this, a1, a2);
	}
};
