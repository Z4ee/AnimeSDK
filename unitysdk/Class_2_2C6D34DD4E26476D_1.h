#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2C6D34DD4E26476D_1_METHOD_2_1BC72208CAFF7D4E_OFFSET UNITYSDK_OFFSET(0x17F5C730)
#define CLASS_2_2C6D34DD4E26476D_1_METHOD_2_3F5962F94C41A5EA_OFFSET UNITYSDK_OFFSET(0x17F5BFB0)
#define CLASS_2_2C6D34DD4E26476D_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x17F5CDF0)
#define CLASS_2_2C6D34DD4E26476D_1_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x17F5CE60)
#define CLASS_2_2C6D34DD4E26476D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5BFA0)

inline static constexpr unsigned int Class_2_2C6D34DD4E26476D_1_TypeDefinitionIndex = 38737;

class Class_2_2C6D34DD4E26476D_1 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_2_5; // 0x18
	::System::Boolean Field_2_3; // 0x20
	::System::UInt32 Field_2_4; // 0x24
	::System::Single Field_2_0; // 0x28
	::System::Int32 Field_2_2; // 0x2C
	::System::Single Field_2_1; // 0x30

	::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3F5962F94C41A5EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_1_METHOD_2_3F5962F94C41A5EA_OFFSET))(this);
	}

	::System::Void Method_2_1BC72208CAFF7D4E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_1_METHOD_2_1BC72208CAFF7D4E_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C6D34DD4E26476D_1_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
