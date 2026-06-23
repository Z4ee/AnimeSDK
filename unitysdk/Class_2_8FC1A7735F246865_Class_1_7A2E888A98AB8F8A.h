#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A0999DD62F5BF03;
class Class_2_8FC1A7735F246865;
class Class_3_8EF31353EACEB291;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_8FC1A7735F246865_CLASS_1_7A2E888A98AB8F8A_METHOD_1_807906C73D90A272_OFFSET UNITYSDK_OFFSET(0x14F4A330)
#define CLASS_2_8FC1A7735F246865_CLASS_1_7A2E888A98AB8F8A__CTOR_OFFSET UNITYSDK_OFFSET(0x14F4A320)

inline static constexpr unsigned int Class_2_8FC1A7735F246865_Class_1_7A2E888A98AB8F8A_TypeDefinitionIndex = 59512;

class Class_2_8FC1A7735F246865_Class_1_7A2E888A98AB8F8A : public ::System::Object
{
public:
	::Class_2_8FC1A7735F246865* Field_1_0; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::Action_1<::Class_1_7A0999DD62F5BF03*>* Field_1_2; // 0x20
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FC1A7735F246865_CLASS_1_7A2E888A98AB8F8A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_807906C73D90A272(::System::Boolean a1, ::Class_3_8EF31353EACEB291* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_8EF31353EACEB291*))((::PBYTE)hIl2Cpp + CLASS_2_8FC1A7735F246865_CLASS_1_7A2E888A98AB8F8A_METHOD_1_807906C73D90A272_OFFSET))(this, a1, a2);
	}
};
