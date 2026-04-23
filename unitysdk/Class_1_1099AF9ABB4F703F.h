#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/System/Object.h"

class Class_1_1099AF9ABB4F703F_Class_1_AD8BA6C138079209;
class Class_2_1BB8CA1042AACD99;
class Class_2_8C608625ABC8C4FA_1;
class Class_4_38B51614211CBC7D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_1099AF9ABB4F703F_METHOD_1_0729CBF39E65275C_OFFSET UNITYSDK_OFFSET(0x17D1B6C0)
#define CLASS_1_1099AF9ABB4F703F_METHOD_1_1BE13C820C520EDD_OFFSET UNITYSDK_OFFSET(0x17D3B650)
#define CLASS_1_1099AF9ABB4F703F_METHOD_1_C6EDB6BFBB65BE58_OFFSET UNITYSDK_OFFSET(0x17D3B560)
#define CLASS_1_1099AF9ABB4F703F_METHOD_1_D93B2DECDE85263B_OFFSET UNITYSDK_OFFSET(0x17D1ABD0)
#define CLASS_1_1099AF9ABB4F703F_METHOD_1_E17B3AF5F6C52DEB_OFFSET UNITYSDK_OFFSET(0x17D1B1A0)
#define CLASS_1_1099AF9ABB4F703F__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3B4C0)

inline static constexpr unsigned int Class_1_1099AF9ABB4F703F_TypeDefinitionIndex = 34278;

class Class_1_1099AF9ABB4F703F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1099AF9ABB4F703F_Class_1_AD8BA6C138079209*>* Field_1_1; // 0x10
	::Class_4_38B51614211CBC7D* Field_1_0; // 0x18

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_8C608625ABC8C4FA_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_8C608625ABC8C4FA_1*))((::PBYTE)hIl2Cpp + CLASS_1_1099AF9ABB4F703F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D93B2DECDE85263B(::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::Class_2_1BB8CA1042AACD99*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::Class_2_1BB8CA1042AACD99*>*))((::PBYTE)hIl2Cpp + CLASS_1_1099AF9ABB4F703F_METHOD_1_D93B2DECDE85263B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0729CBF39E65275C(::Class_2_1BB8CA1042AACD99* a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1099AF9ABB4F703F_METHOD_1_0729CBF39E65275C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E17B3AF5F6C52DEB(::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1099AF9ABB4F703F_METHOD_1_E17B3AF5F6C52DEB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C6EDB6BFBB65BE58(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_1099AF9ABB4F703F_METHOD_1_C6EDB6BFBB65BE58_OFFSET))(this, a1);
	}

	::System::Void Method_1_1BE13C820C520EDD(::Class_2_1BB8CA1042AACD99* a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1099AF9ABB4F703F_METHOD_1_1BE13C820C520EDD_OFFSET))(this, a1, a2, a3);
	}
};
