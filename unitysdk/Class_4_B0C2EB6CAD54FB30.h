#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F5924891E2C8D3BA.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_4_B0C2EB6CAD54FB30_METHOD_4_2D9EFFF687EE2FD2_OFFSET UNITYSDK_OFFSET(0x19EB10D0)
#define CLASS_4_B0C2EB6CAD54FB30_METHOD_4_B2B6C3C08974CD85_OFFSET UNITYSDK_OFFSET(0x19EB1030)
#define CLASS_4_B0C2EB6CAD54FB30__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB1090)

inline static constexpr unsigned int Class_4_B0C2EB6CAD54FB30_TypeDefinitionIndex = 22062;

class Class_4_B0C2EB6CAD54FB30 : public ::Class_3_F5924891E2C8D3BA
{
public:
	::System::String* Field_4_0; // 0x20
	::System::String* Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B0C2EB6CAD54FB30__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_B2B6C3C08974CD85(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_B0C2EB6CAD54FB30*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_B0C2EB6CAD54FB30*&))((::PBYTE)hIl2Cpp + CLASS_4_B0C2EB6CAD54FB30_METHOD_4_B2B6C3C08974CD85_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_2D9EFFF687EE2FD2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_B0C2EB6CAD54FB30* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_B0C2EB6CAD54FB30*))((::PBYTE)hIl2Cpp + CLASS_4_B0C2EB6CAD54FB30_METHOD_4_2D9EFFF687EE2FD2_OFFSET))(a1, a2);
	}
};
