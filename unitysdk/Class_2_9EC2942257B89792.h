#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_9EC2942257B89792_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17AA5960)
#define CLASS_2_9EC2942257B89792_METHOD_2_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x17AA5860)
#define CLASS_2_9EC2942257B89792_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x17AA58F0)
#define CLASS_2_9EC2942257B89792__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA5A50)
#define CLASS_2_9EC2942257B89792__ONBIND_OFFSET UNITYSDK_OFFSET(0x17AA5800)

inline static constexpr unsigned int Class_2_9EC2942257B89792_TypeDefinitionIndex = 68715;

class Class_2_9EC2942257B89792 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::Animation* Field_2_2; // 0x60
	::UnityEngine::GameObject* Field_2_3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EC2942257B89792__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EC2942257B89792__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9EC2942257B89792_METHOD_2_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EC2942257B89792_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9EC2942257B89792_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}
};
