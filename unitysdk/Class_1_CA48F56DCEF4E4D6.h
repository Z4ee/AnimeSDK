#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_CA48F56DCEF4E4D6_METHOD_1_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0xB460FF0)
#define CLASS_1_CA48F56DCEF4E4D6_METHOD_1_886CAAE5A9C7BCEB_OFFSET UNITYSDK_OFFSET(0xB461040)
#define CLASS_1_CA48F56DCEF4E4D6__CTOR_OFFSET UNITYSDK_OFFSET(0xB460F70)

inline static constexpr unsigned int Class_1_CA48F56DCEF4E4D6_TypeDefinitionIndex = 66002;

class Class_1_CA48F56DCEF4E4D6 : public ::System::Object
{
public:
	::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x10
	::System::String* GEJIJFFILEB; // 0x18
	::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* BEHHICMOFIE; // 0x20
	::Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831* IGHAHBNLIJA; // 0x28

	::System::Void _ctor(::System::String* a1, ::Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_CA48F56DCEF4E4D6_Class_1_36A0020EEB62E831*))((::PBYTE)hIl2Cpp + CLASS_1_CA48F56DCEF4E4D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_763B70E1B527E566()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA48F56DCEF4E4D6_METHOD_1_763B70E1B527E566_OFFSET))(this);
	}

	::System::Void Method_1_886CAAE5A9C7BCEB(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_CA48F56DCEF4E4D6_METHOD_1_886CAAE5A9C7BCEB_OFFSET))(this, a1);
	}
};
