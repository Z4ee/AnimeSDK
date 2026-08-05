#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_53.h"

class Class_1_6122374EDA4B3534;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_959A0699E0BDB93B_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0xFFAC440)
#define CLASS_2_959A0699E0BDB93B_METHOD_2_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0xFFAC2C0)
#define CLASS_2_959A0699E0BDB93B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFFAC4D0)
#define CLASS_2_959A0699E0BDB93B__CTOR_OFFSET UNITYSDK_OFFSET(0xFFAC3C0)

inline static constexpr unsigned int Class_2_959A0699E0BDB93B_TypeDefinitionIndex = 66681;

class Class_2_959A0699E0BDB93B : public ::Class_1_43BD383C98B4C0C5_53
{
public:
	::System::Collections::Generic::List_1<::Class_1_6122374EDA4B3534*>* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_959A0699E0BDB93B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_959A0699E0BDB93B_METHOD_2_414C8F92528E4746_OFFSET))(this);
	}

	static ::Class_2_959A0699E0BDB93B* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_959A0699E0BDB93B*(*)())((::PBYTE)hIl2Cpp + CLASS_2_959A0699E0BDB93B_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_959A0699E0BDB93B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
