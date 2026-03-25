#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_65;

#define CLASS_1_5959E346C8AF7EDC_GET_ISDISAPPEAREDONCE_OFFSET UNITYSDK_OFFSET(0x11832FE0)
#define CLASS_1_5959E346C8AF7EDC_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x11832F80)
#define CLASS_1_5959E346C8AF7EDC_SET_ISDISAPPEAREDONCE_OFFSET UNITYSDK_OFFSET(0x11832FF0)
#define CLASS_1_5959E346C8AF7EDC__CTOR_OFFSET UNITYSDK_OFFSET(0x11833000)

inline static constexpr unsigned int Class_1_5959E346C8AF7EDC_TypeDefinitionIndex = 54151;

class Class_1_5959E346C8AF7EDC : public ::System::Object
{
public:
	::System::Boolean _IsDisappearedOnce_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5959E346C8AF7EDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_4CF8088A158DCE25_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_65*))((::PBYTE)hIl2Cpp + CLASS_1_5959E346C8AF7EDC_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDisappearedOnce()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5959E346C8AF7EDC_GET_ISDISAPPEAREDONCE_OFFSET))(this);
	}

	::System::Void set_IsDisappearedOnce(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5959E346C8AF7EDC_SET_ISDISAPPEAREDONCE_OFFSET))(this, value);
	}
};
