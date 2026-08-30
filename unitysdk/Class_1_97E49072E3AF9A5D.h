#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/System/Object.h"

class Class_1_97E49072E3AF9A5D_Class_1_AD8BA6C138079209;
class Class_2_3616FDE8A71D0590;
class Class_2_AEE59ED8DADEC1A1;
class Class_4_38B51614211CBC7D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_97E49072E3AF9A5D_METHOD_1_1F4F576FAEE229CA_OFFSET UNITYSDK_OFFSET(0x1540F970)
#define CLASS_1_97E49072E3AF9A5D_METHOD_1_5B85829F45F8EBAB_OFFSET UNITYSDK_OFFSET(0x1540FD40)
#define CLASS_1_97E49072E3AF9A5D_METHOD_1_BF808DBFDDDEE29F_OFFSET UNITYSDK_OFFSET(0x1540F840)
#define CLASS_1_97E49072E3AF9A5D_METHOD_1_C6EDB6BFBB65BE58_OFFSET UNITYSDK_OFFSET(0x1540F6C0)
#define CLASS_1_97E49072E3AF9A5D_METHOD_1_D93B2DECDE85263B_OFFSET UNITYSDK_OFFSET(0x1540F0B0)
#define CLASS_1_97E49072E3AF9A5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1540F010)

inline static constexpr unsigned int Class_1_97E49072E3AF9A5D_TypeDefinitionIndex = 35803;

class Class_1_97E49072E3AF9A5D : public ::System::Object
{
public:
	::Class_4_38B51614211CBC7D* FLMODBLFAGD; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97E49072E3AF9A5D_Class_1_AD8BA6C138079209*>* IHBMAPBBILJ; // 0x18

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_1_97E49072E3AF9A5D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D93B2DECDE85263B(::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::Class_2_AEE59ED8DADEC1A1*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_2_AEE59ED8DADEC1A1*>*))((::PBYTE)hIl2Cpp + CLASS_1_97E49072E3AF9A5D_METHOD_1_D93B2DECDE85263B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BF808DBFDDDEE29F(::Class_2_AEE59ED8DADEC1A1* a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E49072E3AF9A5D_METHOD_1_BF808DBFDDDEE29F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1F4F576FAEE229CA(::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E49072E3AF9A5D_METHOD_1_1F4F576FAEE229CA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C6EDB6BFBB65BE58(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_97E49072E3AF9A5D_METHOD_1_C6EDB6BFBB65BE58_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B85829F45F8EBAB(::Class_2_AEE59ED8DADEC1A1* a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E49072E3AF9A5D_METHOD_1_5B85829F45F8EBAB_OFFSET))(this, a1, a2, a3);
	}
};
