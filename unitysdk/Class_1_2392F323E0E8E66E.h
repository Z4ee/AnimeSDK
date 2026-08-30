#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2392F323E0E8E66E_METHOD_1_0341989C46A3E14D_OFFSET UNITYSDK_OFFSET(0x18A27810)
#define CLASS_1_2392F323E0E8E66E_METHOD_1_364BBA224DBE13B9_OFFSET UNITYSDK_OFFSET(0x18A27690)
#define CLASS_1_2392F323E0E8E66E_METHOD_1_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0x18A27640)
#define CLASS_1_2392F323E0E8E66E_METHOD_1_E8B490103535A555_OFFSET UNITYSDK_OFFSET(0x18A279C0)
#define CLASS_1_2392F323E0E8E66E__CTOR_OFFSET UNITYSDK_OFFSET(0x18A275C0)

inline static constexpr unsigned int Class_1_2392F323E0E8E66E_TypeDefinitionIndex = 71144;

class Class_1_2392F323E0E8E66E : public ::System::Object
{
public:
	::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x10
	::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* BEHHICMOFIE; // 0x18
	::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1* IGHAHBNLIJA; // 0x20
	::System::String* GEJIJFFILEB; // 0x28

	::System::Void _ctor(::System::String* a1, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2392F323E0E8E66E_Class_1_36A0020EEB62E831_1*))((::PBYTE)hIl2Cpp + CLASS_1_2392F323E0E8E66E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_763B70E1B527E566()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2392F323E0E8E66E_METHOD_1_763B70E1B527E566_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_364BBA224DBE13B9()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2392F323E0E8E66E_METHOD_1_364BBA224DBE13B9_OFFSET))(this);
	}

	::System::Void Method_1_E8B490103535A555(::UnityEngine::Component* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_2392F323E0E8E66E_METHOD_1_E8B490103535A555_OFFSET))(this, a1);
	}

	::System::Void Method_1_0341989C46A3E14D(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2392F323E0E8E66E_METHOD_1_0341989C46A3E14D_OFFSET))(this, a1, a2);
	}
};
