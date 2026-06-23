#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_C4748041DF1EC33A_METHOD_3_1E71BF274C88B983_OFFSET UNITYSDK_OFFSET(0x1269B620)
#define CLASS_3_C4748041DF1EC33A_METHOD_3_39C5B1ECC8AC318D_OFFSET UNITYSDK_OFFSET(0x1269B790)
#define CLASS_3_C4748041DF1EC33A_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1269B470)
#define CLASS_3_C4748041DF1EC33A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1269BC40)
#define CLASS_3_C4748041DF1EC33A__CTOR_OFFSET UNITYSDK_OFFSET(0x1269BB00)

inline static constexpr unsigned int Class_3_C4748041DF1EC33A_TypeDefinitionIndex = 78942;

class Class_3_C4748041DF1EC33A : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_3; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_2; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4748041DF1EC33A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4748041DF1EC33A_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_1E71BF274C88B983(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_C4748041DF1EC33A_METHOD_3_1E71BF274C88B983_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C4748041DF1EC33A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_39C5B1ECC8AC318D(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_C4748041DF1EC33A_METHOD_3_39C5B1ECC8AC318D_OFFSET))(a1, a2);
	}
};
