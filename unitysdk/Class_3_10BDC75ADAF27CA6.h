#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_10BDC75ADAF27CA6_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1900C5C0)
#define CLASS_3_10BDC75ADAF27CA6_METHOD_3_42AE4B7779F3CD9E_OFFSET UNITYSDK_OFFSET(0x1900C770)
#define CLASS_3_10BDC75ADAF27CA6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1900CB90)
#define CLASS_3_10BDC75ADAF27CA6__CTOR_OFFSET UNITYSDK_OFFSET(0x1900CA50)

inline static constexpr unsigned int Class_3_10BDC75ADAF27CA6_TypeDefinitionIndex = 54734;

class Class_3_10BDC75ADAF27CA6 : public ::Class_2_52F82E04F7FEE529
{
public:
	// static const ::System::String* Field_3_4; // 0x0
	::Class_3_B537A0AA78803363* Field_3_3; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_2; // 0x20
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_10BDC75ADAF27CA6__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_10BDC75ADAF27CA6_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_42AE4B7779F3CD9E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_10BDC75ADAF27CA6_METHOD_3_42AE4B7779F3CD9E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_10BDC75ADAF27CA6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
