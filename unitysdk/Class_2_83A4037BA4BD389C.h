#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class Effect_LineRenderer; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_83A4037BA4BD389C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA87560)
#define CLASS_2_83A4037BA4BD389C_METHOD_2_43C9B837F8C62A95_OFFSET UNITYSDK_OFFSET(0xBA86B70)
#define CLASS_2_83A4037BA4BD389C_METHOD_2_587686D056FC0311_OFFSET UNITYSDK_OFFSET(0xBA86B00)
#define CLASS_2_83A4037BA4BD389C_METHOD_2_B3AEB8BA754A80D4_OFFSET UNITYSDK_OFFSET(0xBA86450)
#define CLASS_2_83A4037BA4BD389C_METHOD_2_B615577972D4F819_OFFSET UNITYSDK_OFFSET(0xBA872A0)
#define CLASS_2_83A4037BA4BD389C__CTOR_OFFSET UNITYSDK_OFFSET(0xBA875D0)

inline static constexpr unsigned int Class_2_83A4037BA4BD389C_TypeDefinitionIndex = 47904;

class Class_2_83A4037BA4BD389C : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83A4037BA4BD389C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B3AEB8BA754A80D4(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_83A4037BA4BD389C_METHOD_2_B3AEB8BA754A80D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_43C9B837F8C62A95(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_83A4037BA4BD389C_METHOD_2_43C9B837F8C62A95_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_B615577972D4F819(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_83A4037BA4BD389C_METHOD_2_B615577972D4F819_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83A4037BA4BD389C_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::Effect_LineRenderer* Method_2_587686D056FC0311()
	{
		return ((::RPG::Client::Effect_LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83A4037BA4BD389C_METHOD_2_587686D056FC0311_OFFSET))(this);
	}
};
