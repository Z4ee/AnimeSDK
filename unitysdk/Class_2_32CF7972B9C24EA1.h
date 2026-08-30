#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_32CF7972B9C24EA1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17911320)
#define CLASS_2_32CF7972B9C24EA1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x179113F0)
#define CLASS_2_32CF7972B9C24EA1_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x17910FF0)
#define CLASS_2_32CF7972B9C24EA1_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x179110E0)
#define CLASS_2_32CF7972B9C24EA1_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x179111D0)
#define CLASS_2_32CF7972B9C24EA1_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x17911080)
#define CLASS_2_32CF7972B9C24EA1_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17911240)
#define CLASS_2_32CF7972B9C24EA1__CTOR_OFFSET UNITYSDK_OFFSET(0x17911490)
#define CLASS_2_32CF7972B9C24EA1__ONBIND_OFFSET UNITYSDK_OFFSET(0x17910F90)

inline static constexpr unsigned int Class_2_32CF7972B9C24EA1_TypeDefinitionIndex = 71784;

class Class_2_32CF7972B9C24EA1 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* CJONLJJPLJM; // 0x0
	// static const ::System::String* JHNBEJJJLCO; // 0x0
	// static const ::System::String* NGMDDBJNPNC; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::System::Boolean AKBPNMEFGAO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF7972B9C24EA1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF7972B9C24EA1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF7972B9C24EA1_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_32CF7972B9C24EA1_METHOD_2_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF7972B9C24EA1_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF7972B9C24EA1_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_32CF7972B9C24EA1_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF7972B9C24EA1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32CF7972B9C24EA1_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
