#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_50.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1FBD376512380E81_1_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x13EC03C0)
#define CLASS_2_1FBD376512380E81_1_METHOD_2_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x13EC0260)
#define CLASS_2_1FBD376512380E81_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13EC0450)
#define CLASS_2_1FBD376512380E81_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC0360)

inline static constexpr unsigned int Class_2_1FBD376512380E81_1_TypeDefinitionIndex = 79892;

class Class_2_1FBD376512380E81_1 : public ::Class_1_43BD383C98B4C0C5_50
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x10
	::System::UInt32 Field_2_0; // 0x18
	::System::UInt32 Field_2_7; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FBD376512380E81_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FBD376512380E81_1_METHOD_2_414C8F92528E4746_OFFSET))(this);
	}

	static ::Class_2_1FBD376512380E81_1* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_1FBD376512380E81_1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_1FBD376512380E81_1_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FBD376512380E81_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
