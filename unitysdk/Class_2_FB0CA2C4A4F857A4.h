#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_0_16E4307DCC419505;

#define CLASS_2_FB0CA2C4A4F857A4_METHOD_2_016E85CEDEE00FF4_OFFSET UNITYSDK_OFFSET(0x1BE5A9C0)
#define CLASS_2_FB0CA2C4A4F857A4_METHOD_2_0DCA45EDA639F38E_OFFSET UNITYSDK_OFFSET(0x1BE5A900)
#define CLASS_2_FB0CA2C4A4F857A4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE5A8F0)
#define CLASS_2_FB0CA2C4A4F857A4__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE5A8D0)

inline static constexpr unsigned int Class_2_FB0CA2C4A4F857A4_TypeDefinitionIndex = 8145;

class Class_2_FB0CA2C4A4F857A4 : public ::Foundation::Singleton_1<::Class_2_FB0CA2C4A4F857A4*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB0CA2C4A4F857A4_TypeDefinitionIndex)->GetStaticField(0x3A10);
	}
	::Class_0_16E4307DCC419505* Field_2_2; // 0x10
	::Class_0_16E4307DCC419505* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB0CA2C4A4F857A4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FB0CA2C4A4F857A4__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505* Method_2_0DCA45EDA639F38E()
	{
		return ((::Class_0_16E4307DCC419505*(*)())((::PBYTE)hIl2Cpp + CLASS_2_FB0CA2C4A4F857A4_METHOD_2_0DCA45EDA639F38E_OFFSET))();
	}

	::Class_0_16E4307DCC419505* Method_2_016E85CEDEE00FF4()
	{
		return ((::Class_0_16E4307DCC419505*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB0CA2C4A4F857A4_METHOD_2_016E85CEDEE00FF4_OFFSET))(this);
	}
};
