#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_03A3862E7D4D67F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15528820)
#define CLASS_1_03A3862E7D4D67F7_METHOD_1_1CE3B984165452FA_OFFSET UNITYSDK_OFFSET(0x155288D0)
#define CLASS_1_03A3862E7D4D67F7_METHOD_1_574D5F84FF85983F_OFFSET UNITYSDK_OFFSET(0x15528BE0)
#define CLASS_1_03A3862E7D4D67F7_METHOD_1_931EE974D38570F3_OFFSET UNITYSDK_OFFSET(0x15528E30)
#define CLASS_1_03A3862E7D4D67F7__CTOR_OFFSET UNITYSDK_OFFSET(0x155287A0)

inline static constexpr unsigned int Class_1_03A3862E7D4D67F7_TypeDefinitionIndex = 56142;

class Class_1_03A3862E7D4D67F7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::PoolList_1<::RPG::GameCore::GameEntity*>*>* MFEJOOBOJBF; // 0x10
	::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x18

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_03A3862E7D4D67F7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03A3862E7D4D67F7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1CE3B984165452FA(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_03A3862E7D4D67F7_METHOD_1_1CE3B984165452FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_574D5F84FF85983F(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_03A3862E7D4D67F7_METHOD_1_574D5F84FF85983F_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* Method_1_931EE974D38570F3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_03A3862E7D4D67F7_METHOD_1_931EE974D38570F3_OFFSET))(this, a1);
	}
};
