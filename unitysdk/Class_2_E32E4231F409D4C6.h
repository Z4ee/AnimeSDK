#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_687ED6D71E8F6551.h"

class Class_1_D375C91CCE5D3999;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_E32E4231F409D4C6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x128A0CE0)
#define CLASS_2_E32E4231F409D4C6_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x128A05A0)
#define CLASS_2_E32E4231F409D4C6__CTOR_OFFSET UNITYSDK_OFFSET(0x128A0580)

inline static constexpr unsigned int Class_2_E32E4231F409D4C6_TypeDefinitionIndex = 47628;

class Class_2_E32E4231F409D4C6 : public ::Class_1_687ED6D71E8F6551
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x18
	::Class_1_D375C91CCE5D3999* Field_2_1; // 0x20

	::System::Void _ctor(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_2_E32E4231F409D4C6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E32E4231F409D4C6_METHOD_2_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E32E4231F409D4C6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
