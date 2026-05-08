#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_2443E1CA0D50CF67_METHOD_1_2E208F59FF9618F4_OFFSET UNITYSDK_OFFSET(0x1296EE30)
#define CLASS_1_2443E1CA0D50CF67_METHOD_1_2EC08A3DF3EE073C_OFFSET UNITYSDK_OFFSET(0x1296ECE0)
#define CLASS_1_2443E1CA0D50CF67_METHOD_1_6C16590658327567_OFFSET UNITYSDK_OFFSET(0x1296EF40)
#define CLASS_1_2443E1CA0D50CF67__CTOR_OFFSET UNITYSDK_OFFSET(0x1296ECD0)

inline static constexpr unsigned int Class_1_2443E1CA0D50CF67_TypeDefinitionIndex = 51629;

class Class_1_2443E1CA0D50CF67 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2443E1CA0D50CF67__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_2EC08A3DF3EE073C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_2443E1CA0D50CF67_METHOD_1_2EC08A3DF3EE073C_OFFSET))(a1);
	}

	static ::System::String* Method_1_2E208F59FF9618F4(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2443E1CA0D50CF67_METHOD_1_2E208F59FF9618F4_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C16590658327567(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_2443E1CA0D50CF67_METHOD_1_6C16590658327567_OFFSET))(a1, a2);
	}
};
