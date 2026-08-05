#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_472679C84451629A_9;
namespace System { class Action; }

#define CLASS_2_01A9580380D362EF_CLASS_1_FE2B677254502657_METHOD_1_94E8489AFC492FD1_OFFSET UNITYSDK_OFFSET(0x11F94E50)
#define CLASS_2_01A9580380D362EF_CLASS_1_FE2B677254502657__CTOR_OFFSET UNITYSDK_OFFSET(0x11F94E40)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_FE2B677254502657_TypeDefinitionIndex = 52238;

class Class_2_01A9580380D362EF_Class_1_FE2B677254502657 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Class_2_01A9580380D362EF* Field_1_3; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_FE2B677254502657__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_94E8489AFC492FD1(::Class_3_472679C84451629A_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_9*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_FE2B677254502657_METHOD_1_94E8489AFC492FD1_OFFSET))(this, a1);
	}
};
