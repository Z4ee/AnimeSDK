#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8529CFB6C20D4749_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8836BC0)
#define CLASS_1_8529CFB6C20D4749_METHOD_1_0B319E7EC57C5D62_OFFSET UNITYSDK_OFFSET(0x8836F40)
#define CLASS_1_8529CFB6C20D4749_METHOD_1_BA48B1868306EC96_OFFSET UNITYSDK_OFFSET(0x88371B0)
#define CLASS_1_8529CFB6C20D4749_METHOD_1_FF7350288883C47C_OFFSET UNITYSDK_OFFSET(0x8836C70)
#define CLASS_1_8529CFB6C20D4749__CTOR_OFFSET UNITYSDK_OFFSET(0x8836B40)

inline static constexpr unsigned int Class_1_8529CFB6C20D4749_TypeDefinitionIndex = 44860;

class Class_1_8529CFB6C20D4749 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedGameMode* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::PoolList_1<::RPG::GameCore::GameEntity*>*>* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_8529CFB6C20D4749__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8529CFB6C20D4749_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FF7350288883C47C(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_8529CFB6C20D4749_METHOD_1_FF7350288883C47C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B319E7EC57C5D62(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_8529CFB6C20D4749_METHOD_1_0B319E7EC57C5D62_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* Method_1_BA48B1868306EC96(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8529CFB6C20D4749_METHOD_1_BA48B1868306EC96_OFFSET))(this, a1);
	}
};
