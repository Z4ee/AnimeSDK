#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_3A216973E1BA9106_METHOD_1_641A508D50284AA2_OFFSET UNITYSDK_OFFSET(0x14E725B0)
#define CLASS_1_3A216973E1BA9106_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14E72560)
#define CLASS_1_3A216973E1BA9106_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14E72510)
#define CLASS_1_3A216973E1BA9106_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14E72550)
#define CLASS_1_3A216973E1BA9106__CTOR_OFFSET UNITYSDK_OFFSET(0x14E725A0)

inline static constexpr unsigned int Class_1_3A216973E1BA9106_TypeDefinitionIndex = 49079;

class Class_1_3A216973E1BA9106 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A216973E1BA9106__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A216973E1BA9106_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A216973E1BA9106_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A216973E1BA9106_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_641A508D50284AA2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3A216973E1BA9106_METHOD_1_641A508D50284AA2_OFFSET))(this, a1);
	}
};
