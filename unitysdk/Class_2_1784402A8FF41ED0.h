#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }

#define CLASS_2_1784402A8FF41ED0_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x131AA820)
#define CLASS_2_1784402A8FF41ED0_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x131AA810)
#define CLASS_2_1784402A8FF41ED0_ONATTACH_OFFSET UNITYSDK_OFFSET(0x131AA630)
#define CLASS_2_1784402A8FF41ED0_ONDETACH_OFFSET UNITYSDK_OFFSET(0x131AA720)
#define CLASS_2_1784402A8FF41ED0__CTOR_OFFSET UNITYSDK_OFFSET(0x131AA800)

inline static constexpr unsigned int Class_2_1784402A8FF41ED0_TypeDefinitionIndex = 58164;

class Class_2_1784402A8FF41ED0 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_1784402A8FF41ED0*>
{
public:
	::System::String* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1784402A8FF41ED0__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1784402A8FF41ED0_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1784402A8FF41ED0_ONDETACH_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1784402A8FF41ED0_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1784402A8FF41ED0_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}
};
