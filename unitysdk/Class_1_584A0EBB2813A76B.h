#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_584A0EBB2813A76B_METHOD_1_239127A8B01A1A3F_OFFSET UNITYSDK_OFFSET(0x1DC6D660)
#define CLASS_1_584A0EBB2813A76B__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6D780)

inline static constexpr unsigned int Class_1_584A0EBB2813A76B_TypeDefinitionIndex = 13795;

class Class_1_584A0EBB2813A76B : public ::System::Object
{
public:
	::System::String* BFLIFKBEOPJ; // 0x10
	::System::Int16 MNDFOPKBHKP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_584A0EBB2813A76B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_239127A8B01A1A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_584A0EBB2813A76B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_584A0EBB2813A76B*&))((::PBYTE)hIl2Cpp + CLASS_1_584A0EBB2813A76B_METHOD_1_239127A8B01A1A3F_OFFSET))(a1, a2);
	}
};
