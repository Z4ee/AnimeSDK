#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_9EC2942257B89792_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17ECB250)
#define CLASS_2_9EC2942257B89792_METHOD_2_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x17ECB150)
#define CLASS_2_9EC2942257B89792_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x17ECB1E0)
#define CLASS_2_9EC2942257B89792__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECB340)
#define CLASS_2_9EC2942257B89792__ONBIND_OFFSET UNITYSDK_OFFSET(0x17ECB0F0)

inline static constexpr unsigned int Class_2_9EC2942257B89792_TypeDefinitionIndex = 71913;

class Class_2_9EC2942257B89792 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* AILCOOFIDPG; // 0x0
	// static const ::System::String* IIPEBGKKNLC; // 0x0
	::UnityEngine::Animation* PMOJILOJEPE; // 0x60
	::UnityEngine::GameObject* ADBCGAPLGOL; // 0x68

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
