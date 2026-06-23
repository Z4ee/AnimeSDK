#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_F54EC479C3A9E435_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x16B30850)
#define CLASS_3_F54EC479C3A9E435_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x16B300A0)
#define CLASS_3_F54EC479C3A9E435_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16B30B10)
#define CLASS_3_F54EC479C3A9E435_METHOD_3_D0356BCE1E1B52DD_OFFSET UNITYSDK_OFFSET(0x16B30360)
#define CLASS_3_F54EC479C3A9E435__CTOR_OFFSET UNITYSDK_OFFSET(0x16B30890)

inline static constexpr unsigned int Class_3_F54EC479C3A9E435_TypeDefinitionIndex = 58941;

class Class_3_F54EC479C3A9E435 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_3_2; // 0x18
	::Class_3_B537A0AA78803363* Field_3_5; // 0x20
	::Class_3_B537A0AA78803363* Field_3_6; // 0x28
	::Class_3_B537A0AA78803363* Field_3_4; // 0x30
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x38
	::Class_4_B51FB35349ACD175<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_3; // 0x40
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F54EC479C3A9E435__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F54EC479C3A9E435_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_D0356BCE1E1B52DD(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_F54EC479C3A9E435_METHOD_3_D0356BCE1E1B52DD_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F54EC479C3A9E435_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_F54EC479C3A9E435_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}
};
