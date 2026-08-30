#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_453;
class Class_0_16E4307DCC419505_454;
class Class_0_16E4307DCC419505_455;
class Class_1_A3A2B28DB41BA84A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_BA1180926C205EE5_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x11EF09A0)
#define CLASS_1_BA1180926C205EE5_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x11EF0AA0)
#define CLASS_1_BA1180926C205EE5_METHOD_1_2B0D9265C19E15C8_OFFSET UNITYSDK_OFFSET(0x11EF0A10)
#define CLASS_1_BA1180926C205EE5_METHOD_1_63882E0318B95793_OFFSET UNITYSDK_OFFSET(0x11EF1100)
#define CLASS_1_BA1180926C205EE5_METHOD_1_AD6DA1DFA69DF1D0_OFFSET UNITYSDK_OFFSET(0x11EF08C0)
#define CLASS_1_BA1180926C205EE5_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x11EF0830)
#define CLASS_1_BA1180926C205EE5__CTOR_OFFSET UNITYSDK_OFFSET(0x11EF06F0)

inline static constexpr unsigned int Class_1_BA1180926C205EE5_TypeDefinitionIndex = 62854;

class Class_1_BA1180926C205EE5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_455* IHFNBHEIIAI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* OBEBIGAMJGF; // 0x18
	::Class_0_16E4307DCC419505_454* PMGONAJKJAE; // 0x20
	::Class_0_16E4307DCC419505_453* GOHMGCHLKLM; // 0x28
	::System::UInt32 FFFFJCOACPK; // 0x30
	::Struct_2_BC950E36747FB4C9 ODMGLBEOBDP; // 0x34

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::Class_0_16E4307DCC419505_455* a2, ::Class_0_16E4307DCC419505_453* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_0_16E4307DCC419505_455*, ::Class_0_16E4307DCC419505_453*))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_454* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_454*))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AD6DA1DFA69DF1D0(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_AD6DA1DFA69DF1D0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Method_1_2B0D9265C19E15C8()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_2B0D9265C19E15C8_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_63882E0318B95793(::Class_1_A3A2B28DB41BA84A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A3A2B28DB41BA84A*))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_63882E0318B95793_OFFSET))(this, a1);
	}
};
