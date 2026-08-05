#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_33FA60A0452137B1_CLASS_1_55A0F26A4A3E1224_METHOD_1_D33DB187A341B664_OFFSET UNITYSDK_OFFSET(0x157F48D0)
#define CLASS_1_33FA60A0452137B1_CLASS_1_55A0F26A4A3E1224__CTOR_OFFSET UNITYSDK_OFFSET(0x157F48C0)

inline static constexpr unsigned int Class_1_33FA60A0452137B1_Class_1_55A0F26A4A3E1224_TypeDefinitionIndex = 91028;

class Class_1_33FA60A0452137B1_Class_1_55A0F26A4A3E1224 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_CLASS_1_55A0F26A4A3E1224__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D33DB187A341B664(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_33FA60A0452137B1_CLASS_1_55A0F26A4A3E1224_METHOD_1_D33DB187A341B664_OFFSET))(this, a1);
	}
};
