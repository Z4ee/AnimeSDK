#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_4378D9A477B65EF7_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x14E9F530)
#define CLASS_2_4378D9A477B65EF7_METHOD_2_9A9CE12736031CF1_OFFSET UNITYSDK_OFFSET(0x14E9F650)
#define CLASS_2_4378D9A477B65EF7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14E9F5C0)
#define CLASS_2_4378D9A477B65EF7__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E9F4B0)
#define CLASS_2_4378D9A477B65EF7__CTOR_OFFSET UNITYSDK_OFFSET(0x14E9F520)

inline static constexpr unsigned int Class_2_4378D9A477B65EF7_TypeDefinitionIndex = 51639;

class Class_2_4378D9A477B65EF7 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xBD; // 0x0
	::System::String* Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4378D9A477B65EF7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4378D9A477B65EF7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4378D9A477B65EF7_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4378D9A477B65EF7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_9A9CE12736031CF1(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4378D9A477B65EF7_METHOD_2_9A9CE12736031CF1_OFFSET))(this, a1, a2, a3);
	}
};
