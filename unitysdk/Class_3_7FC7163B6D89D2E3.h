#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_3_7FC7163B6D89D2E3_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1960CE00)
#define CLASS_3_7FC7163B6D89D2E3_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1960CE10)
#define CLASS_3_7FC7163B6D89D2E3_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1960CE20)
#define CLASS_3_7FC7163B6D89D2E3_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1960CD30)
#define CLASS_3_7FC7163B6D89D2E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1960CD70)

inline static constexpr unsigned int Class_3_7FC7163B6D89D2E3_TypeDefinitionIndex = 54381;

class Class_3_7FC7163B6D89D2E3 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_7FC7163B6D89D2E3*>
{
public:
	::System::Boolean Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FC7163B6D89D2E3__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FC7163B6D89D2E3_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FC7163B6D89D2E3_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7FC7163B6D89D2E3_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FC7163B6D89D2E3_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}
};
