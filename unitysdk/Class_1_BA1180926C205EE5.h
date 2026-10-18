#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_540;
class Class_0_16E4307DCC419505_541;
class Class_0_16E4307DCC419505_542;
class Class_1_A3A2B28DB41BA84A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_BA1180926C205EE5_METHOD_1_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x11FDCCF0)
#define CLASS_1_BA1180926C205EE5_METHOD_1_2B0D9265C19E15C8_OFFSET UNITYSDK_OFFSET(0x11FDCED0)
#define CLASS_1_BA1180926C205EE5_METHOD_1_63882E0318B95793_OFFSET UNITYSDK_OFFSET(0x11FDD710)
#define CLASS_1_BA1180926C205EE5_METHOD_1_67C142C8523FB4DC_OFFSET UNITYSDK_OFFSET(0x11FDCD80)
#define CLASS_1_BA1180926C205EE5_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x11FDCF60)
#define CLASS_1_BA1180926C205EE5_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x11FDCC60)
#define CLASS_1_BA1180926C205EE5__CTOR_OFFSET UNITYSDK_OFFSET(0x11FDCB20)

inline static constexpr unsigned int Class_1_BA1180926C205EE5_TypeDefinitionIndex = 62787;

class Class_1_BA1180926C205EE5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_540* GOHMGCHLKLM; // 0x10
	::Class_0_16E4307DCC419505_542* IHFNBHEIIAI; // 0x18
	::Class_0_16E4307DCC419505_541* PMGONAJKJAE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* OBEBIGAMJGF; // 0x28
	::Struct_2_BC950E36747FB4C9 ODMGLBEOBDP; // 0x30
	::System::UInt32 FFFFJCOACPK; // 0x38

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::Class_0_16E4307DCC419505_542* a2, ::Class_0_16E4307DCC419505_540* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_0_16E4307DCC419505_542*, ::Class_0_16E4307DCC419505_540*))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_541* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_541*))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Method_1_2B0D9265C19E15C8()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_2B0D9265C19E15C8_OFFSET))(this);
	}

	::System::Boolean Method_1_67C142C8523FB4DC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_67C142C8523FB4DC_OFFSET))(this);
	}

	::System::Void Method_1_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void Method_1_63882E0318B95793(::Class_1_A3A2B28DB41BA84A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A3A2B28DB41BA84A*))((::PBYTE)hIl2Cpp + CLASS_1_BA1180926C205EE5_METHOD_1_63882E0318B95793_OFFSET))(this, a1);
	}
};
