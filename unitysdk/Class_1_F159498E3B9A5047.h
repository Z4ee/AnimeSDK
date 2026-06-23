#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_1_F159498E3B9A5047_METHOD_1_7B92EBAC218DB5A1_OFFSET UNITYSDK_OFFSET(0xD32AC10)

inline static constexpr unsigned int Class_1_F159498E3B9A5047_TypeDefinitionIndex = 40549;

class Class_1_F159498E3B9A5047 : public ::System::Object
{
public:
	static ::System::Void Method_1_7B92EBAC218DB5A1(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2, ::System::Action* a3, ::UnityEngine::Rendering::Volume* a4)
	{
		return ((::System::Void(*)(::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Action*, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_F159498E3B9A5047_METHOD_1_7B92EBAC218DB5A1_OFFSET))(a1, a2, a3, a4);
	}
};
