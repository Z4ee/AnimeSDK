#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_F0054AC3F0D34041;
class Class_2_569DE47525C5FD32;
class Class_3_6B9658F527402856;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7428545D46EEA828_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10B0FF50)
#define CLASS_2_7428545D46EEA828_METHOD_2_56762F4F80E0DC93_OFFSET UNITYSDK_OFFSET(0x10B0FC70)
#define CLASS_2_7428545D46EEA828_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B0FEE0)
#define CLASS_2_7428545D46EEA828_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x10B0FFB0)
#define CLASS_2_7428545D46EEA828__CTOR_OFFSET UNITYSDK_OFFSET(0x10B0FC20)

inline static constexpr unsigned int Class_2_7428545D46EEA828_TypeDefinitionIndex = 48874;

class Class_2_7428545D46EEA828 : public ::Class_1_2231FD56C070349F
{
public:
	::Class_2_569DE47525C5FD32* Field_2_0; // 0x18
	::Class_1_F0054AC3F0D34041* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_2_3; // 0x28
	::System::UInt32 Field_2_1; // 0x30

	::System::Void _ctor(::Class_3_6B9658F527402856* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6B9658F527402856*, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_7428545D46EEA828__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_56762F4F80E0DC93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7428545D46EEA828_METHOD_2_56762F4F80E0DC93_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7428545D46EEA828_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7428545D46EEA828_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7428545D46EEA828_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
