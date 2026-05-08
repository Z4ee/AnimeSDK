#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_A3D70040351F1D57_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1208A000)
#define CLASS_2_A3D70040351F1D57_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1208A090)
#define CLASS_2_A3D70040351F1D57_METHOD_2_FE741AC952848E83_OFFSET UNITYSDK_OFFSET(0x1208A120)
#define CLASS_2_A3D70040351F1D57__CCTOR_OFFSET UNITYSDK_OFFSET(0x12089F80)
#define CLASS_2_A3D70040351F1D57__CTOR_OFFSET UNITYSDK_OFFSET(0x12089FF0)

inline static constexpr unsigned int Class_2_A3D70040351F1D57_TypeDefinitionIndex = 58613;

class Class_2_A3D70040351F1D57 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0x96; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::Single Field_2_2; // 0x28
	::System::Single Field_2_4; // 0x2C
	::System::Single Field_2_5; // 0x30
	::System::Single Field_2_1; // 0x34
	::System::Single Field_2_3; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3D70040351F1D57__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D70040351F1D57__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D70040351F1D57_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D70040351F1D57_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_FE741AC952848E83(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3D70040351F1D57_METHOD_2_FE741AC952848E83_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
