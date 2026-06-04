#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace System { class Object; }

#define CLASS_2_1DDB3E3AD4E2D794_METHOD_2_19E32F71D1A96572_OFFSET UNITYSDK_OFFSET(0x13FE67C0)
#define CLASS_2_1DDB3E3AD4E2D794__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x13FE66E0)
#define CLASS_2_1DDB3E3AD4E2D794__CTOR_OFFSET UNITYSDK_OFFSET(0x13FE6BD0)
#define CLASS_2_1DDB3E3AD4E2D794___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x13FE6BF0)

inline static constexpr unsigned int Class_2_1DDB3E3AD4E2D794_TypeDefinitionIndex = 63868;

class Class_2_1DDB3E3AD4E2D794 : public ::RPG::Client::BaseModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DDB3E3AD4E2D794__CTOR_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DDB3E3AD4E2D794__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_19E32F71D1A96572(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1DDB3E3AD4E2D794_METHOD_2_19E32F71D1A96572_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DDB3E3AD4E2D794___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}
};
