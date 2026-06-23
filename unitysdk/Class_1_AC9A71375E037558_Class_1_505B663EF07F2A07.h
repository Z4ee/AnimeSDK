#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AC9A71375E037558;
namespace System { class Action; }
namespace System { class Exception; }

#define CLASS_1_AC9A71375E037558_CLASS_1_505B663EF07F2A07_METHOD_1_9BA3CFF3EBCB9273_OFFSET UNITYSDK_OFFSET(0x15CC5210)
#define CLASS_1_AC9A71375E037558_CLASS_1_505B663EF07F2A07__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC5200)

inline static constexpr unsigned int Class_1_AC9A71375E037558_Class_1_505B663EF07F2A07_TypeDefinitionIndex = 50512;

class Class_1_AC9A71375E037558_Class_1_505B663EF07F2A07 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Class_1_AC9A71375E037558* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_505B663EF07F2A07__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9BA3CFF3EBCB9273(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_AC9A71375E037558_CLASS_1_505B663EF07F2A07_METHOD_1_9BA3CFF3EBCB9273_OFFSET))(this, a1);
	}
};
