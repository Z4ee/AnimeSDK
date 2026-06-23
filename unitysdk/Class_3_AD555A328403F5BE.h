#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

#define CLASS_3_AD555A328403F5BE_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x13779590)
#define CLASS_3_AD555A328403F5BE_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x137795A0)
#define CLASS_3_AD555A328403F5BE_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x13779580)
#define CLASS_3_AD555A328403F5BE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13779230)
#define CLASS_3_AD555A328403F5BE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x137793D0)
#define CLASS_3_AD555A328403F5BE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13779270)
#define CLASS_3_AD555A328403F5BE__CTOR_OFFSET UNITYSDK_OFFSET(0x137794F0)

inline static constexpr unsigned int Class_3_AD555A328403F5BE_TypeDefinitionIndex = 80764;

class Class_3_AD555A328403F5BE : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_AD555A328403F5BE*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD555A328403F5BE__CTOR_OFFSET))(this);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD555A328403F5BE_ONAWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD555A328403F5BE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD555A328403F5BE_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD555A328403F5BE_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD555A328403F5BE_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD555A328403F5BE_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
