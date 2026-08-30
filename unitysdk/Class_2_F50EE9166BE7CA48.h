#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_F50EE9166BE7CA48_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x19A16AE0)
#define CLASS_2_F50EE9166BE7CA48_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x19A16CA0)
#define CLASS_2_F50EE9166BE7CA48_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x19A16B90)
#define CLASS_2_F50EE9166BE7CA48__CTOR_OFFSET UNITYSDK_OFFSET(0x19A16D50)
#define CLASS_2_F50EE9166BE7CA48__ONBIND_OFFSET UNITYSDK_OFFSET(0x19A16A80)

inline static constexpr unsigned int Class_2_F50EE9166BE7CA48_TypeDefinitionIndex = 71760;

class Class_2_F50EE9166BE7CA48 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* AMKNNFCOBDG; // 0x0
	// static const ::System::String* NMDMPOOFGFD; // 0x0
	::UnityEngine::Animator* APPGGMLEPLN; // 0x60
	::System::Boolean AKBPNMEFGAO; // 0x68

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
