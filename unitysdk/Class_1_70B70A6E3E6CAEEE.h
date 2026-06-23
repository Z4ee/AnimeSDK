#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_70B70A6E3E6CAEEE_METHOD_1_21408F9A90B10FA2_OFFSET UNITYSDK_OFFSET(0x113F51F0)
#define CLASS_1_70B70A6E3E6CAEEE_METHOD_1_59803B2D40C464EA_OFFSET UNITYSDK_OFFSET(0x113F5060)
#define CLASS_1_70B70A6E3E6CAEEE_METHOD_1_869B4908081DF784_OFFSET UNITYSDK_OFFSET(0x113F50F0)
#define CLASS_1_70B70A6E3E6CAEEE__CTOR_OFFSET UNITYSDK_OFFSET(0x113F53D0)

inline static constexpr unsigned int Class_1_70B70A6E3E6CAEEE_TypeDefinitionIndex = 67557;

class Class_1_70B70A6E3E6CAEEE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70B70A6E3E6CAEEE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_59803B2D40C464EA(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_70B70A6E3E6CAEEE_METHOD_1_59803B2D40C464EA_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_1_21408F9A90B10FA2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_70B70A6E3E6CAEEE_METHOD_1_21408F9A90B10FA2_OFFSET))();
	}

	static ::System::Boolean Method_1_869B4908081DF784(::System::String* a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_70B70A6E3E6CAEEE_METHOD_1_869B4908081DF784_OFFSET))(a1, a2, a3);
	}
};
