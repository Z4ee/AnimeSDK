#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_F50EE9166BE7CA48_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x17C68F40)
#define CLASS_2_F50EE9166BE7CA48_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17C69100)
#define CLASS_2_F50EE9166BE7CA48_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x17C68FF0)
#define CLASS_2_F50EE9166BE7CA48__CTOR_OFFSET UNITYSDK_OFFSET(0x17C691B0)
#define CLASS_2_F50EE9166BE7CA48__ONBIND_OFFSET UNITYSDK_OFFSET(0x17C68EE0)

inline static constexpr unsigned int Class_2_F50EE9166BE7CA48_TypeDefinitionIndex = 68563;

class Class_2_F50EE9166BE7CA48 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::Animator* Field_2_2; // 0x60
	::System::Boolean Field_2_3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F50EE9166BE7CA48__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F50EE9166BE7CA48__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F50EE9166BE7CA48_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F50EE9166BE7CA48_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F50EE9166BE7CA48_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
