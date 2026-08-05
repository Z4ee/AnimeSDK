#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_FC5ECD4B3EA17CB6_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x11C693C0)
#define CLASS_4_FC5ECD4B3EA17CB6_METHOD_4_2B846241F3BE030D_OFFSET UNITYSDK_OFFSET(0x11C69010)
#define CLASS_4_FC5ECD4B3EA17CB6_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11C68F80)
#define CLASS_4_FC5ECD4B3EA17CB6__CTOR_OFFSET UNITYSDK_OFFSET(0x11C69320)

inline static constexpr unsigned int Class_4_FC5ECD4B3EA17CB6_TypeDefinitionIndex = 83261;

class Class_4_FC5ECD4B3EA17CB6 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FC5ECD4B3EA17CB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FC5ECD4B3EA17CB6_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_2B846241F3BE030D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_FC5ECD4B3EA17CB6_METHOD_4_2B846241F3BE030D_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FC5ECD4B3EA17CB6_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
