#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_4.h"
#include "unitysdk/System/Object.h"

class Class_1_D4714BA97EC5BBC2_1;

#define CLASS_1_AE30349E456D5B05_METHOD_1_9403ED911BE6EC15_OFFSET UNITYSDK_OFFSET(0x8D3BE20)
#define CLASS_1_AE30349E456D5B05__CTOR_OFFSET UNITYSDK_OFFSET(0x8D3CC40)

inline static constexpr unsigned int Class_1_AE30349E456D5B05_TypeDefinitionIndex = 50884;

class Class_1_AE30349E456D5B05 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE30349E456D5B05__CTOR_OFFSET))(this);
	}

	::Class_1_D4714BA97EC5BBC2_1* Method_1_9403ED911BE6EC15(::Struct_2_019938BC9C50B169_4& a1)
	{
		return ((::Class_1_D4714BA97EC5BBC2_1*(*)(::PVOID, ::Struct_2_019938BC9C50B169_4&))((::PBYTE)hIl2Cpp + CLASS_1_AE30349E456D5B05_METHOD_1_9403ED911BE6EC15_OFFSET))(this, a1);
	}
};
