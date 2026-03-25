#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7A55E81F9F4D4709_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1691A890)
#define CLASS_2_7A55E81F9F4D4709_METHOD_2_170F1EAD3E667A14_OFFSET UNITYSDK_OFFSET(0x1691AAA0)
#define CLASS_2_7A55E81F9F4D4709_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1691B6C0)
#define CLASS_2_7A55E81F9F4D4709_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x1691B730)
#define CLASS_2_7A55E81F9F4D4709__CTOR_OFFSET UNITYSDK_OFFSET(0x1691B660)

inline static constexpr unsigned int Class_2_7A55E81F9F4D4709_TypeDefinitionIndex = 32672;

class Class_2_7A55E81F9F4D4709 : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x18
	::System::Int32 Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x24
	::System::Single Field_2_3; // 0x28
	::System::Single Field_2_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A55E81F9F4D4709__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A55E81F9F4D4709_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_170F1EAD3E667A14(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A55E81F9F4D4709_METHOD_2_170F1EAD3E667A14_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A55E81F9F4D4709_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7A55E81F9F4D4709_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
