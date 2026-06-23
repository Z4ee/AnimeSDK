#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_FE57B482B10DE1C8_METHOD_1_4E84FD21E7EECC5B_OFFSET UNITYSDK_OFFSET(0x188E4770)
#define CLASS_1_FE57B482B10DE1C8_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x188E4720)
#define CLASS_1_FE57B482B10DE1C8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x188E46E0)
#define CLASS_1_FE57B482B10DE1C8__CTOR_OFFSET UNITYSDK_OFFSET(0x188E46D0)

inline static constexpr unsigned int Class_1_FE57B482B10DE1C8_TypeDefinitionIndex = 53057;

class Class_1_FE57B482B10DE1C8 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Single Field_1_3; // 0x18
	::System::Single Field_1_4; // 0x1C
	::System::Boolean Field_1_5; // 0x20
	::System::Boolean Field_1_2; // 0x21
	::System::Int32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE57B482B10DE1C8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE57B482B10DE1C8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE57B482B10DE1C8_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Boolean Method_1_4E84FD21E7EECC5B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE57B482B10DE1C8_METHOD_1_4E84FD21E7EECC5B_OFFSET))(this);
	}
};
