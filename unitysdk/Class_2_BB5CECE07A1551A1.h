#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_2_BB5CECE07A1551A1_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x15167140)
#define CLASS_2_BB5CECE07A1551A1_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x15167150)
#define CLASS_2_BB5CECE07A1551A1_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15167130)
#define CLASS_2_BB5CECE07A1551A1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15166FB0)
#define CLASS_2_BB5CECE07A1551A1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15166E40)
#define CLASS_2_BB5CECE07A1551A1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x151670D0)
#define CLASS_2_BB5CECE07A1551A1__CTOR_OFFSET UNITYSDK_OFFSET(0x15167120)

inline static constexpr unsigned int Class_2_BB5CECE07A1551A1_TypeDefinitionIndex = 46464;

class Class_2_BB5CECE07A1551A1 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_BB5CECE07A1551A1*>
{
public:
	::System::UInt32 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB5CECE07A1551A1__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB5CECE07A1551A1_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB5CECE07A1551A1_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB5CECE07A1551A1_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB5CECE07A1551A1_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB5CECE07A1551A1_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB5CECE07A1551A1_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}
};
