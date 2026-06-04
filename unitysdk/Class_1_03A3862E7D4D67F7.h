#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_03A3862E7D4D67F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1375EA70)
#define CLASS_1_03A3862E7D4D67F7_METHOD_1_1CE3B984165452FA_OFFSET UNITYSDK_OFFSET(0x1375EB20)
#define CLASS_1_03A3862E7D4D67F7_METHOD_1_931EE974D38570F3_OFFSET UNITYSDK_OFFSET(0x1375F120)
#define CLASS_1_03A3862E7D4D67F7_METHOD_1_D1AB61D4F9A5B7D6_OFFSET UNITYSDK_OFFSET(0x1375EE30)
#define CLASS_1_03A3862E7D4D67F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1375E9F0)

inline static constexpr unsigned int Class_1_03A3862E7D4D67F7_TypeDefinitionIndex = 52276;

class Class_1_03A3862E7D4D67F7 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedGameMode* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::PoolList_1<::RPG::GameCore::GameEntity*>*>* Field_1_1; // 0x18

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

	::System::Void Method_1_D1AB61D4F9A5B7D6(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_03A3862E7D4D67F7_METHOD_1_D1AB61D4F9A5B7D6_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* Method_1_931EE974D38570F3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_03A3862E7D4D67F7_METHOD_1_931EE974D38570F3_OFFSET))(this, a1);
	}
};
