#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_88B381EA0903334D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x130ADEF0)
#define CLASS_4_88B381EA0903334D_METHOD_4_8AB38D899BE6F6BF_OFFSET UNITYSDK_OFFSET(0x130ADC20)
#define CLASS_4_88B381EA0903334D_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x130ADB90)
#define CLASS_4_88B381EA0903334D__CTOR_OFFSET UNITYSDK_OFFSET(0x130ADE50)

inline static constexpr unsigned int Class_4_88B381EA0903334D_TypeDefinitionIndex = 47038;

class Class_4_88B381EA0903334D : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_88B381EA0903334D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_88B381EA0903334D_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_8AB38D899BE6F6BF(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_88B381EA0903334D_METHOD_4_8AB38D899BE6F6BF_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_88B381EA0903334D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
