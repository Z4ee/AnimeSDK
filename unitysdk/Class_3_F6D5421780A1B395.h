#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_F6D5421780A1B395_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x124992E0)
#define CLASS_3_F6D5421780A1B395_METHOD_3_4B1B4E746B9F33BA_OFFSET UNITYSDK_OFFSET(0x12499420)
#define CLASS_3_F6D5421780A1B395_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12499780)
#define CLASS_3_F6D5421780A1B395__CTOR_OFFSET UNITYSDK_OFFSET(0x12499630)

inline static constexpr unsigned int Class_3_F6D5421780A1B395_TypeDefinitionIndex = 41517;

class Class_3_F6D5421780A1B395 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_0; // 0x20
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6D5421780A1B395__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6D5421780A1B395_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_4B1B4E746B9F33BA(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_F6D5421780A1B395_METHOD_3_4B1B4E746B9F33BA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6D5421780A1B395_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
