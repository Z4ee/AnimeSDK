#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AKEVENTCALLBACKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D1C90)

inline static constexpr unsigned int AkEventCallbackData_TypeDefinitionIndex = 31595;

class AkEventCallbackData : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* callbackFlags; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* callbackFunc; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* callbackGameObj; // 0x28
	::System::Int32 uFlags; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTCALLBACKDATA__CTOR_OFFSET))(this);
	}
};
