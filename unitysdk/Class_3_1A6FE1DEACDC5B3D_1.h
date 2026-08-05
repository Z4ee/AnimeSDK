#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_3_1A6FE1DEACDC5B3D_1_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x12569250)
#define CLASS_3_1A6FE1DEACDC5B3D_1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x125691C0)
#define CLASS_3_1A6FE1DEACDC5B3D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12569210)

inline static constexpr unsigned int Class_3_1A6FE1DEACDC5B3D_1_TypeDefinitionIndex = 87582;

class Class_3_1A6FE1DEACDC5B3D_1 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_1A6FE1DEACDC5B3D_1*>
{
public:
	::System::Int32 Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A6FE1DEACDC5B3D_1__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A6FE1DEACDC5B3D_1_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A6FE1DEACDC5B3D_1_METHOD_3_832295EC279E5994_OFFSET))(this);
	}
};
