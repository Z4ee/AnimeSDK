#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_E43E98799BBF474D_METHOD_3_709CF7B1B9FB703C_OFFSET UNITYSDK_OFFSET(0x16232BB0)
#define CLASS_3_E43E98799BBF474D_METHOD_3_84676820B1380184_OFFSET UNITYSDK_OFFSET(0x16232C40)
#define CLASS_3_E43E98799BBF474D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16232FB0)
#define CLASS_3_E43E98799BBF474D_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x162329B0)
#define CLASS_3_E43E98799BBF474D__CTOR_OFFSET UNITYSDK_OFFSET(0x16232E30)

inline static constexpr unsigned int Class_3_E43E98799BBF474D_TypeDefinitionIndex = 41360;

class Class_3_E43E98799BBF474D : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_2; // 0x18
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_3_3; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x30
	::Class_3_B537A0AA78803363* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_709CF7B1B9FB703C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_709CF7B1B9FB703C_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_84676820B1380184(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_84676820B1380184_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E43E98799BBF474D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
