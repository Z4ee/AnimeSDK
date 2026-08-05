#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_53.h"

class Class_2_A48F3719AA1CF200_4;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1982942B05667672_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x123321D0)
#define CLASS_2_1982942B05667672_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x12332050)
#define CLASS_2_1982942B05667672_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12332260)
#define CLASS_2_1982942B05667672__CTOR_OFFSET UNITYSDK_OFFSET(0x12332150)

inline static constexpr unsigned int Class_2_1982942B05667672_TypeDefinitionIndex = 65612;

class Class_2_1982942B05667672 : public ::Class_1_43BD383C98B4C0C5_53
{
public:
	::System::Collections::Generic::List_1<::Class_2_A48F3719AA1CF200_4*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1982942B05667672__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1982942B05667672_METHOD_2_4679E7840A7526E1_OFFSET))(this);
	}

	static ::Class_2_1982942B05667672* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_1982942B05667672*(*)())((::PBYTE)hIl2Cpp + CLASS_2_1982942B05667672_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1982942B05667672_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
