#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_5929499EEA9E9B12_METHOD_1_A814306820B9ED13_1_OFFSET UNITYSDK_OFFSET(0x105F7770)
#define CLASS_1_5929499EEA9E9B12_METHOD_1_A814306820B9ED13_2_OFFSET UNITYSDK_OFFSET(0x105F7840)
#define CLASS_1_5929499EEA9E9B12_METHOD_1_A814306820B9ED13_OFFSET UNITYSDK_OFFSET(0x105F76A0)
#define CLASS_1_5929499EEA9E9B12_METHOD_1_C2E96BFE5E31CC37_OFFSET UNITYSDK_OFFSET(0x105F7910)
#define CLASS_1_5929499EEA9E9B12_METHOD_1_FB9BDC73E608BDCF_OFFSET UNITYSDK_OFFSET(0x105F6E00)
#define CLASS_1_5929499EEA9E9B12__CTOR_OFFSET UNITYSDK_OFFSET(0x105F7D80)

inline static constexpr unsigned int Class_1_5929499EEA9E9B12_TypeDefinitionIndex = 46048;

class Class_1_5929499EEA9E9B12 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5929499EEA9E9B12__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_FB9BDC73E608BDCF(::System::String*& a1, ::System::String*& a2, ::UnityEngine::GameObject*& a3, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*& a4, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& a5)
	{
		return ((::System::Void(*)(::System::String*&, ::System::String*&, ::UnityEngine::GameObject*&, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*&, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + CLASS_1_5929499EEA9E9B12_METHOD_1_FB9BDC73E608BDCF_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_C2E96BFE5E31CC37(::System::String*& a1, ::System::String*& a2, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*& a3, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& a4)
	{
		return ((::System::Void(*)(::System::String*&, ::System::String*&, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*&, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + CLASS_1_5929499EEA9E9B12_METHOD_1_C2E96BFE5E31CC37_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A814306820B9ED13(::UnityEngine::Renderer* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5929499EEA9E9B12_METHOD_1_A814306820B9ED13_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A814306820B9ED13_1(::UnityEngine::Renderer* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5929499EEA9E9B12_METHOD_1_A814306820B9ED13_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A814306820B9ED13_2(::UnityEngine::Renderer* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5929499EEA9E9B12_METHOD_1_A814306820B9ED13_2_OFFSET))(a1, a2);
	}
};
