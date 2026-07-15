#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
class Class_1_12210BFF9F8CB0CA;
class Class_1_E7BD46EB43F1A06F;
class Class_1_F1CBA2F1FD2FDF38;
class Class_1_F1CBA2F1FD2FDF38_1;
class Class_1_F98A96E373E13AED;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtBattleMode; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E6E1020B071C118_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x17E84D10)
#define CLASS_1_3E6E1020B071C118_METHOD_1_483DFAC9C5C1B13D_OFFSET UNITYSDK_OFFSET(0x17E853D0)
#define CLASS_1_3E6E1020B071C118_METHOD_1_7D6AEA8A38A258AA_1_OFFSET UNITYSDK_OFFSET(0x17E85280)
#define CLASS_1_3E6E1020B071C118_METHOD_1_7D6AEA8A38A258AA_OFFSET UNITYSDK_OFFSET(0x17E85130)
#define CLASS_1_3E6E1020B071C118_METHOD_1_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x17E84EC0)
#define CLASS_1_3E6E1020B071C118_METHOD_1_8C6E68DB7E390F47_OFFSET UNITYSDK_OFFSET(0x17E84FD0)
#define CLASS_1_3E6E1020B071C118_METHOD_1_8CBCDEA6ED085A72_OFFSET UNITYSDK_OFFSET(0x17E84B00)
#define CLASS_1_3E6E1020B071C118_METHOD_1_B42F34291DF3DBD0_OFFSET UNITYSDK_OFFSET(0x17E856F0)
#define CLASS_1_3E6E1020B071C118_METHOD_1_F9096507A659C510_OFFSET UNITYSDK_OFFSET(0x17E859E0)
#define CLASS_1_3E6E1020B071C118__CTOR_OFFSET UNITYSDK_OFFSET(0x17E85A70)

inline static constexpr unsigned int Class_1_3E6E1020B071C118_TypeDefinitionIndex = 51806;

class Class_1_3E6E1020B071C118 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F1CBA2F1FD2FDF38*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::Class_1_F98A96E373E13AED*>* Field_1_1; // 0x18
	::RPG::GameCore::RtBattleMode* Field_1_2; // 0x20
	::Class_1_12210BFF9F8CB0CA* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F1CBA2F1FD2FDF38_1*>* Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38
	::RPG::GameCore::FixPoint Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E6E1020B071C118__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8CBCDEA6ED085A72(::RPG::GameCore::RtBattleMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + CLASS_1_3E6E1020B071C118_METHOD_1_8CBCDEA6ED085A72_OFFSET))(this, a1);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E6E1020B071C118_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_7F68D6D1D153FE6C(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_3E6E1020B071C118_METHOD_1_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}

	::Class_1_F98A96E373E13AED* Method_1_8C6E68DB7E390F47(::RPG::GameCore::TeamType a1)
	{
		return ((::Class_1_F98A96E373E13AED*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_3E6E1020B071C118_METHOD_1_8C6E68DB7E390F47_OFFSET))(this, a1);
	}

	::Class_1_F1CBA2F1FD2FDF38* Method_1_7D6AEA8A38A258AA(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::Class_1_F1CBA2F1FD2FDF38*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E6E1020B071C118_METHOD_1_7D6AEA8A38A258AA_OFFSET))(this, a1, a2);
	}

	::Class_1_F1CBA2F1FD2FDF38_1* Method_1_7D6AEA8A38A258AA_1(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::Class_1_F1CBA2F1FD2FDF38_1*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E6E1020B071C118_METHOD_1_7D6AEA8A38A258AA_1_OFFSET))(this, a1, a2);
	}

	::Class_1_F1CBA2F1FD2FDF38_1* Method_1_483DFAC9C5C1B13D(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2)
	{
		return ((::Class_1_F1CBA2F1FD2FDF38_1*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E6E1020B071C118_METHOD_1_483DFAC9C5C1B13D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B42F34291DF3DBD0(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_3E6E1020B071C118_METHOD_1_B42F34291DF3DBD0_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_F9096507A659C510(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3E6E1020B071C118_METHOD_1_F9096507A659C510_OFFSET))(a1);
	}
};
