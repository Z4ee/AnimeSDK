#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_401;
class Class_1_12210BFF9F8CB0CA;
class Class_1_E7BD46EB43F1A06F;
class Class_1_F1CBA2F1FD2FDF38;
class Class_1_F1CBA2F1FD2FDF38_1;
class Class_1_F98A96E373E13AED;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtBattleMode; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8A333169D3B7AF8C_METHOD_1_7D6AEA8A38A258AA_1_OFFSET UNITYSDK_OFFSET(0x1354C700)
#define CLASS_1_8A333169D3B7AF8C_METHOD_1_7D6AEA8A38A258AA_OFFSET UNITYSDK_OFFSET(0x1354C5B0)
#define CLASS_1_8A333169D3B7AF8C_METHOD_1_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x1354C340)
#define CLASS_1_8A333169D3B7AF8C_METHOD_1_832BC2678D88AE57_OFFSET UNITYSDK_OFFSET(0x1354C850)
#define CLASS_1_8A333169D3B7AF8C_METHOD_1_8C6E68DB7E390F47_OFFSET UNITYSDK_OFFSET(0x1354C450)
#define CLASS_1_8A333169D3B7AF8C_METHOD_1_8CBCDEA6ED085A72_OFFSET UNITYSDK_OFFSET(0x1354C000)
#define CLASS_1_8A333169D3B7AF8C_METHOD_1_B694503C7C03619C_OFFSET UNITYSDK_OFFSET(0x1354CAA0)
#define CLASS_1_8A333169D3B7AF8C_METHOD_1_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x1354C210)
#define CLASS_1_8A333169D3B7AF8C_METHOD_1_F9096507A659C510_OFFSET UNITYSDK_OFFSET(0x1354CE40)
#define CLASS_1_8A333169D3B7AF8C__CTOR_OFFSET UNITYSDK_OFFSET(0x1354CED0)

inline static constexpr unsigned int Class_1_8A333169D3B7AF8C_TypeDefinitionIndex = 50724;

class Class_1_8A333169D3B7AF8C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F1CBA2F1FD2FDF38*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F1CBA2F1FD2FDF38_1*>* Field_1_1; // 0x18
	::RPG::GameCore::RtBattleMode* Field_1_2; // 0x20
	::Class_1_12210BFF9F8CB0CA* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::Class_1_F98A96E373E13AED*>* Field_1_4; // 0x30
	::RPG::GameCore::FixPoint Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A333169D3B7AF8C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8CBCDEA6ED085A72(::RPG::GameCore::RtBattleMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + CLASS_1_8A333169D3B7AF8C_METHOD_1_8CBCDEA6ED085A72_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A333169D3B7AF8C_METHOD_1_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_1_7F68D6D1D153FE6C(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_8A333169D3B7AF8C_METHOD_1_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}

	::Class_1_F98A96E373E13AED* Method_1_8C6E68DB7E390F47(::RPG::GameCore::TeamType a1)
	{
		return ((::Class_1_F98A96E373E13AED*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_8A333169D3B7AF8C_METHOD_1_8C6E68DB7E390F47_OFFSET))(this, a1);
	}

	::Class_1_F1CBA2F1FD2FDF38* Method_1_7D6AEA8A38A258AA(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::Class_1_F1CBA2F1FD2FDF38*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A333169D3B7AF8C_METHOD_1_7D6AEA8A38A258AA_OFFSET))(this, a1, a2);
	}

	::Class_1_F1CBA2F1FD2FDF38_1* Method_1_7D6AEA8A38A258AA_1(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::Class_1_F1CBA2F1FD2FDF38_1*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A333169D3B7AF8C_METHOD_1_7D6AEA8A38A258AA_1_OFFSET))(this, a1, a2);
	}

	::Class_1_F1CBA2F1FD2FDF38_1* Method_1_832BC2678D88AE57(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2)
	{
		return ((::Class_1_F1CBA2F1FD2FDF38_1*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A333169D3B7AF8C_METHOD_1_832BC2678D88AE57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B694503C7C03619C(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_8A333169D3B7AF8C_METHOD_1_B694503C7C03619C_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_F9096507A659C510(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A333169D3B7AF8C_METHOD_1_F9096507A659C510_OFFSET))(a1);
	}
};
