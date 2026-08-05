#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_73D72062BE725391_METHOD_1_0998161DCCA976FC_OFFSET UNITYSDK_OFFSET(0x171A0B40)
#define CLASS_1_73D72062BE725391_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x171A0A50)
#define CLASS_1_73D72062BE725391_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x171A0A90)
#define CLASS_1_73D72062BE725391_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x171A0AF0)
#define CLASS_1_73D72062BE725391_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x171A0CE0)
#define CLASS_1_73D72062BE725391_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x171A0C30)
#define CLASS_1_73D72062BE725391__CTOR_OFFSET UNITYSDK_OFFSET(0x171A0E20)

inline static constexpr unsigned int Class_1_73D72062BE725391_TypeDefinitionIndex = 47377;

class Class_1_73D72062BE725391 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	::System::Boolean Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73D72062BE725391__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73D72062BE725391_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73D72062BE725391_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73D72062BE725391_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_0998161DCCA976FC(::System::Byte a1, ::System::Byte a2, ::System::Byte a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_73D72062BE725391_METHOD_1_0998161DCCA976FC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73D72062BE725391_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73D72062BE725391_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}
};
