#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_21.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/System/Object.h"

class Class_1_8111D94208AF9330;
class Class_1_986F52381DF139E6;
class Class_1_BE6BF7909AD9D940;
class Class_2_2DFDAF0B881128C6_Class_1_73C31DDA126AE455;
class Class_3_1F0B390B50451710_1;
class Class_3_5AEEB8BAAD67B8F2;
class Class_3_5D6E6A4B36F53E3B;
class Class_3_9F091E965E210217_11;
class Class_3_EB14F0C9B3CB407C;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class TeamDataItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_1_A319EF31CA60026F_METHOD_1_03800C39F686B8A4_OFFSET UNITYSDK_OFFSET(0x15D55EC0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_247F7BF3E8CC157B_OFFSET UNITYSDK_OFFSET(0x15D55CB0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_2C80AFC3086178D3_OFFSET UNITYSDK_OFFSET(0x15D59020)
#define CLASS_1_A319EF31CA60026F_METHOD_1_35DA77D0A6FF0B56_OFFSET UNITYSDK_OFFSET(0x15D58FB0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_3A2A7F8174D40CFE_OFFSET UNITYSDK_OFFSET(0x15D568E0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_7B363E26367E3696_OFFSET UNITYSDK_OFFSET(0x15D571D0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_8193456272367DD7_OFFSET UNITYSDK_OFFSET(0x15D56D60)
#define CLASS_1_A319EF31CA60026F_METHOD_1_920D8AA0BA462CC3_OFFSET UNITYSDK_OFFSET(0x15D56FC0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_99A5531F4A7DF520_OFFSET UNITYSDK_OFFSET(0x15D57170)
#define CLASS_1_A319EF31CA60026F_METHOD_1_AF96870E18CAAD4E_OFFSET UNITYSDK_OFFSET(0x15D57B70)
#define CLASS_1_A319EF31CA60026F_METHOD_1_B126047E15740CD9_OFFSET UNITYSDK_OFFSET(0x15D57620)
#define CLASS_1_A319EF31CA60026F_METHOD_1_C5116ABBCB3CCC62_OFFSET UNITYSDK_OFFSET(0x15D56940)
#define CLASS_1_A319EF31CA60026F_METHOD_1_D9EAE2CFA3709229_OFFSET UNITYSDK_OFFSET(0x15D57BD0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_F39FEA9AF2251208_OFFSET UNITYSDK_OFFSET(0x15D58900)
#define CLASS_1_A319EF31CA60026F_METHOD_1_FE8936480A616B18_OFFSET UNITYSDK_OFFSET(0x15D56640)
#define CLASS_1_A319EF31CA60026F_METHOD_1_FFFE43DD0933B317_OFFSET UNITYSDK_OFFSET(0x15D561F0)
#define CLASS_1_A319EF31CA60026F__CTOR_OFFSET UNITYSDK_OFFSET(0x15D55CA0)

inline static constexpr unsigned int Class_1_A319EF31CA60026F_TypeDefinitionIndex = 52295;

class Class_1_A319EF31CA60026F : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::Action_3<::System::UInt32, ::MoleMole::InLevelAvatarDataItem*, ::MoleMole::InLevelBuddyDataItem*>* Field_1_10; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_8111D94208AF9330*>* Field_1_9; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_986F52381DF139E6*>* Field_1_8; // 0x28
	::Class_3_5D6E6A4B36F53E3B* Field_1_11; // 0x30
	::System::String* Field_1_2; // 0x38
	::System::UInt16 Field_1_4; // 0x40
	::Enum_3_0A3761FE34514D6C_21 Field_1_5; // 0x44
	::System::UInt64 Field_1_1; // 0x48
	::MoleMole::Config::CharacterAliveState Field_1_12; // 0x50
	::System::UInt32 Field_1_6; // 0x54
	::System::UInt32 Field_1_7; // 0x58
	::System::UInt32 Field_1_0; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F__CTOR_OFFSET))(this);
	}

	::Class_1_986F52381DF139E6* Method_1_247F7BF3E8CC157B(::System::UInt32 a1)
	{
		return ((::Class_1_986F52381DF139E6*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_247F7BF3E8CC157B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_03800C39F686B8A4(::MoleMole::TeamDataItem* a1, ::System::Int32 a2, ::MoleMole::InLevelAvatarDataItem* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamDataItem*, ::System::Int32, ::MoleMole::InLevelAvatarDataItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_03800C39F686B8A4_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FFFE43DD0933B317(::MoleMole::InLevelBuddyDataItem* a1, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::MoleMole::InLevelBuddyDataItem*, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_FFFE43DD0933B317_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE8936480A616B18(::MoleMole::InLevelBuddyDataItem* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::MoleMole::InLevelBuddyDataItem*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_FE8936480A616B18_OFFSET))(a1, a2, a3, a4);
	}

	::Class_1_BE6BF7909AD9D940* Method_1_3A2A7F8174D40CFE(::System::UInt32 a1)
	{
		return ((::Class_1_BE6BF7909AD9D940*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_3A2A7F8174D40CFE_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5116ABBCB3CCC62(::Class_3_EB14F0C9B3CB407C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EB14F0C9B3CB407C*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_C5116ABBCB3CCC62_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_8193456272367DD7(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_8193456272367DD7_OFFSET))(this, a1);
	}

	::Class_1_BE6BF7909AD9D940* Method_1_920D8AA0BA462CC3(::System::UInt32 a1)
	{
		return ((::Class_1_BE6BF7909AD9D940*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_920D8AA0BA462CC3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_99A5531F4A7DF520(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_99A5531F4A7DF520_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B363E26367E3696(::MoleMole::InLevelAvatarDataItem* a1, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_7B363E26367E3696_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_2DFDAF0B881128C6_Class_1_73C31DDA126AE455*>* Method_1_B126047E15740CD9(::Class_1_8CC15846339E7FB0<::Class_3_1F0B390B50451710_1*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_2DFDAF0B881128C6_Class_1_73C31DDA126AE455*>*(*)(::PVOID, ::Class_1_8CC15846339E7FB0<::Class_3_1F0B390B50451710_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_B126047E15740CD9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_AF96870E18CAAD4E(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_AF96870E18CAAD4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9EAE2CFA3709229(::Class_3_5AEEB8BAAD67B8F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5AEEB8BAAD67B8F2*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_D9EAE2CFA3709229_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_35DA77D0A6FF0B56(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_35DA77D0A6FF0B56_OFFSET))(this, a1);
	}

	::System::Void Method_1_F39FEA9AF2251208(::MoleMole::TeamDataItem* a1, ::MoleMole::InLevelAvatarDataItem* a2, ::Class_1_8CC15846339E7FB0<::Class_3_1F0B390B50451710_1*>* a3, ::Class_3_9F091E965E210217_11* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TeamDataItem*, ::MoleMole::InLevelAvatarDataItem*, ::Class_1_8CC15846339E7FB0<::Class_3_1F0B390B50451710_1*>*, ::Class_3_9F091E965E210217_11*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_F39FEA9AF2251208_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_2C80AFC3086178D3(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_2C80AFC3086178D3_OFFSET))(this, a1);
	}
};
