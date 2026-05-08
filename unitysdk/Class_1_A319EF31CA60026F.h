#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_13.h"
#include "unitysdk/MoleMole/Config/CharacterAliveState.h"
#include "unitysdk/System/Object.h"

class Class_1_8111D94208AF9330;
class Class_1_986F52381DF139E6;
class Class_1_BE6BF7909AD9D940;
class Class_2_2DFDAF0B881128C6_Class_1_73C31DDA126AE455;
class Class_3_028B9BAC07BE632B;
class Class_3_1F0B390B50451710;
class Class_3_5D6E6A4B36F53E3B;
class Class_3_9F091E965E210217_6;
class Class_3_EB14F0C9B3CB407C;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class TeamDataItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;
template <typename T> class Class_1_DD0DD411D84DAED3;

#define CLASS_1_A319EF31CA60026F_METHOD_1_03800C39F686B8A4_OFFSET UNITYSDK_OFFSET(0x10FE9210)
#define CLASS_1_A319EF31CA60026F_METHOD_1_247F7BF3E8CC157B_OFFSET UNITYSDK_OFFSET(0x10FE8DE0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_2C80AFC3086178D3_OFFSET UNITYSDK_OFFSET(0x10FE9060)
#define CLASS_1_A319EF31CA60026F_METHOD_1_35DA77D0A6FF0B56_OFFSET UNITYSDK_OFFSET(0x10FE8FF0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_3A2A7F8174D40CFE_OFFSET UNITYSDK_OFFSET(0x10FEB320)
#define CLASS_1_A319EF31CA60026F_METHOD_1_7B363E26367E3696_OFFSET UNITYSDK_OFFSET(0x10FE97A0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_8193456272367DD7_OFFSET UNITYSDK_OFFSET(0x10FE9540)
#define CLASS_1_A319EF31CA60026F_METHOD_1_920D8AA0BA462CC3_OFFSET UNITYSDK_OFFSET(0x10FE8BD0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_99A5531F4A7DF520_OFFSET UNITYSDK_OFFSET(0x10FE8D80)
#define CLASS_1_A319EF31CA60026F_METHOD_1_AF96870E18CAAD4E_OFFSET UNITYSDK_OFFSET(0x10FEB380)
#define CLASS_1_A319EF31CA60026F_METHOD_1_B126047E15740CD9_OFFSET UNITYSDK_OFFSET(0x10FEA2A0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_C5116ABBCB3CCC62_OFFSET UNITYSDK_OFFSET(0x10FEA7F0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_D9EAE2CFA3709229_OFFSET UNITYSDK_OFFSET(0x10FEB3E0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_F39FEA9AF2251208_OFFSET UNITYSDK_OFFSET(0x10FE9BF0)
#define CLASS_1_A319EF31CA60026F_METHOD_1_FE8936480A616B18_OFFSET UNITYSDK_OFFSET(0x10FEB070)
#define CLASS_1_A319EF31CA60026F_METHOD_1_FFFE43DD0933B317_OFFSET UNITYSDK_OFFSET(0x10FEAC20)
#define CLASS_1_A319EF31CA60026F__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE8BC0)

inline static constexpr unsigned int Class_1_A319EF31CA60026F_TypeDefinitionIndex = 68436;

class Class_1_A319EF31CA60026F : public ::System::Object
{
public:
	::Class_3_5D6E6A4B36F53E3B* Field_1_11; // 0x10
	::System::String* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_8111D94208AF9330*>* Field_1_9; // 0x20
	::System::String* Field_1_2; // 0x28
	::System::Action_3<::System::UInt32, ::MoleMole::InLevelAvatarDataItem*, ::MoleMole::InLevelBuddyDataItem*>* Field_1_10; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_986F52381DF139E6*>* Field_1_8; // 0x38
	::System::UInt32 Field_1_6; // 0x40
	::System::UInt16 Field_1_4; // 0x44
	::System::UInt32 Field_1_0; // 0x48
	::Enum_3_0A3761FE34514D6C_13 Field_1_5; // 0x4C
	::System::UInt32 Field_1_7; // 0x50
	::MoleMole::Config::CharacterAliveState Field_1_12; // 0x54
	::System::UInt64 Field_1_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F__CTOR_OFFSET))(this);
	}

	::Class_1_BE6BF7909AD9D940* Method_1_920D8AA0BA462CC3(::System::UInt32 a1)
	{
		return ((::Class_1_BE6BF7909AD9D940*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_920D8AA0BA462CC3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_99A5531F4A7DF520(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_99A5531F4A7DF520_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_35DA77D0A6FF0B56(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_35DA77D0A6FF0B56_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_2C80AFC3086178D3(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_2C80AFC3086178D3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_03800C39F686B8A4(::MoleMole::TeamDataItem* a1, ::System::Int32 a2, ::MoleMole::InLevelAvatarDataItem* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamDataItem*, ::System::Int32, ::MoleMole::InLevelAvatarDataItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_03800C39F686B8A4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_8193456272367DD7(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_8193456272367DD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B363E26367E3696(::MoleMole::InLevelAvatarDataItem* a1, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_7B363E26367E3696_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F39FEA9AF2251208(::MoleMole::TeamDataItem* a1, ::MoleMole::InLevelAvatarDataItem* a2, ::Class_1_DD0DD411D84DAED3<::Class_3_1F0B390B50451710*>* a3, ::Class_3_9F091E965E210217_6* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TeamDataItem*, ::MoleMole::InLevelAvatarDataItem*, ::Class_1_DD0DD411D84DAED3<::Class_3_1F0B390B50451710*>*, ::Class_3_9F091E965E210217_6*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_F39FEA9AF2251208_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C5116ABBCB3CCC62(::Class_3_EB14F0C9B3CB407C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EB14F0C9B3CB407C*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_C5116ABBCB3CCC62_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_FFFE43DD0933B317(::MoleMole::InLevelBuddyDataItem* a1, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::MoleMole::InLevelBuddyDataItem*, ::Class_1_516A565475879095<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_FFFE43DD0933B317_OFFSET))(a1, a2);
	}

	::Class_1_986F52381DF139E6* Method_1_247F7BF3E8CC157B(::System::UInt32 a1)
	{
		return ((::Class_1_986F52381DF139E6*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_247F7BF3E8CC157B_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_FE8936480A616B18(::MoleMole::InLevelBuddyDataItem* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::MoleMole::InLevelBuddyDataItem*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_FE8936480A616B18_OFFSET))(a1, a2, a3, a4);
	}

	::Class_1_BE6BF7909AD9D940* Method_1_3A2A7F8174D40CFE(::System::UInt32 a1)
	{
		return ((::Class_1_BE6BF7909AD9D940*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_3A2A7F8174D40CFE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_2DFDAF0B881128C6_Class_1_73C31DDA126AE455*>* Method_1_B126047E15740CD9(::Class_1_DD0DD411D84DAED3<::Class_3_1F0B390B50451710*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_2DFDAF0B881128C6_Class_1_73C31DDA126AE455*>*(*)(::PVOID, ::Class_1_DD0DD411D84DAED3<::Class_3_1F0B390B50451710*>*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_B126047E15740CD9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_AF96870E18CAAD4E(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_AF96870E18CAAD4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9EAE2CFA3709229(::Class_3_028B9BAC07BE632B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_028B9BAC07BE632B*))((::PBYTE)hIl2Cpp + CLASS_1_A319EF31CA60026F_METHOD_1_D9EAE2CFA3709229_OFFSET))(this, a1);
	}
};
