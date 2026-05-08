#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_8.h"

class Class_3_3C27FB03C7F640D0_8;
class Class_3_C2C59D21761C8826;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_86B3C791290970F4_METHOD_2_607508F85072F4C4_OFFSET UNITYSDK_OFFSET(0x1740ACB0)
#define CLASS_2_86B3C791290970F4_METHOD_2_710D0F93472E6738_OFFSET UNITYSDK_OFFSET(0x1740A870)
#define CLASS_2_86B3C791290970F4_METHOD_2_7A310FDCDE635116_OFFSET UNITYSDK_OFFSET(0x1740ABA0)
#define CLASS_2_86B3C791290970F4_METHOD_2_8AF85FA7544DCE26_OFFSET UNITYSDK_OFFSET(0x1740AF50)
#define CLASS_2_86B3C791290970F4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1740A830)
#define CLASS_2_86B3C791290970F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1740A820)

inline static constexpr unsigned int Class_2_86B3C791290970F4_TypeDefinitionIndex = 62135;

class Class_2_86B3C791290970F4 : public ::Class_1_BE149A7D6310B037
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_C2C59D21761C8826*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_710D0F93472E6738(::Class_3_3C27FB03C7F640D0_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3C27FB03C7F640D0_8*))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4_METHOD_2_710D0F93472E6738_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7A310FDCDE635116(::System::UInt32 a1, ::Class_3_C2C59D21761C8826*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_3_C2C59D21761C8826*&))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4_METHOD_2_7A310FDCDE635116_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_607508F85072F4C4(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4_METHOD_2_607508F85072F4C4_OFFSET))(this, a1, a2);
	}

	::Enum_3_0A3761FE34514D6C_8 Method_2_8AF85FA7544DCE26(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Enum_3_0A3761FE34514D6C_8(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4_METHOD_2_8AF85FA7544DCE26_OFFSET))(this, a1, a2);
	}
};
