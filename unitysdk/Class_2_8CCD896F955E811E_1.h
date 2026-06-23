#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_8CCD896F955E811E_1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x12050DE0)
#define CLASS_2_8CCD896F955E811E_1_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x12050E70)
#define CLASS_2_8CCD896F955E811E_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12050EC0)
#define CLASS_2_8CCD896F955E811E_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x12050D60)
#define CLASS_2_8CCD896F955E811E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12050DD0)

inline static constexpr unsigned int Class_2_8CCD896F955E811E_1_TypeDefinitionIndex = 46555;

class Class_2_8CCD896F955E811E_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x122; // 0x0
	::System::Int32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8CCD896F955E811E_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CCD896F955E811E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CCD896F955E811E_1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8CCD896F955E811E_1_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CCD896F955E811E_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
