#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FF34D7C26BF683C5_ContentType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1652F9EBC7E914D9;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }

#define CLASS_1_FF34D7C26BF683C5_METHOD_1_07899E963D8C0DB8_OFFSET UNITYSDK_OFFSET(0xB63E810)
#define CLASS_1_FF34D7C26BF683C5_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0xB63E670)
#define CLASS_1_FF34D7C26BF683C5_METHOD_1_8AB3DB2ABA0D29C2_OFFSET UNITYSDK_OFFSET(0xB63E700)
#define CLASS_1_FF34D7C26BF683C5_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB63EAB0)
#define CLASS_1_FF34D7C26BF683C5_METHOD_1_DC102267BEBF3D0B_OFFSET UNITYSDK_OFFSET(0xB63E890)
#define CLASS_1_FF34D7C26BF683C5_METHOD_1_DE09C6B932E210E1_OFFSET UNITYSDK_OFFSET(0xB63EA10)
#define CLASS_1_FF34D7C26BF683C5__CTOR_OFFSET UNITYSDK_OFFSET(0xB63E740)

inline static constexpr unsigned int Class_1_FF34D7C26BF683C5_TypeDefinitionIndex = 79484;

class Class_1_FF34D7C26BF683C5 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::Class_1_FF34D7C26BF683C5_ContentType>* LFGMLJCCPCH; // 0x10
	::Class_1_1652F9EBC7E914D9* LKBKDNAMNEG; // 0x18
	::System::Nullable_1<::System::Boolean> OIMACANBFPP; // 0x20

	::System::Void _ctor(::Class_1_1652F9EBC7E914D9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1652F9EBC7E914D9*))((::PBYTE)hIl2Cpp + CLASS_1_FF34D7C26BF683C5__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF34D7C26BF683C5_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::Class_1_FF34D7C26BF683C5_ContentType>* Method_1_8AB3DB2ABA0D29C2()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::Class_1_FF34D7C26BF683C5_ContentType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF34D7C26BF683C5_METHOD_1_8AB3DB2ABA0D29C2_OFFSET))(this);
	}

	::Class_1_FF34D7C26BF683C5_ContentType Method_1_07899E963D8C0DB8(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::Class_1_FF34D7C26BF683C5_ContentType(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FF34D7C26BF683C5_METHOD_1_07899E963D8C0DB8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DC102267BEBF3D0B(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FF34D7C26BF683C5_METHOD_1_DC102267BEBF3D0B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DE09C6B932E210E1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FF34D7C26BF683C5_METHOD_1_DE09C6B932E210E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF34D7C26BF683C5_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};
