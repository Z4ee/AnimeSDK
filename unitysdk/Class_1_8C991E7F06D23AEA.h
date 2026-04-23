#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_8C991E7F06D23AEA_METHOD_1_ECA72114536D14FE_OFFSET UNITYSDK_OFFSET(0x12949430)
#define CLASS_1_8C991E7F06D23AEA__CTOR_OFFSET UNITYSDK_OFFSET(0x12949530)

inline static constexpr unsigned int Class_1_8C991E7F06D23AEA_TypeDefinitionIndex = 66031;

class Class_1_8C991E7F06D23AEA : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::UnityEngine::UI::Text* Field_1_5; // 0x10
	::UnityEngine::UI::Text* Field_1_3; // 0x18
	::UnityEngine::UI::Image* Field_1_2; // 0x20
	::UnityEngine::Transform* Field_1_1; // 0x28
	::UnityEngine::UI::Text* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C991E7F06D23AEA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ECA72114536D14FE(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_8C991E7F06D23AEA_METHOD_1_ECA72114536D14FE_OFFSET))(this, a1);
	}
};
