#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_C427585D3B690B54_METHOD_1_4902E6AECD9F20DD_OFFSET UNITYSDK_OFFSET(0x171078C0)
#define CLASS_1_C427585D3B690B54__CCTOR_OFFSET UNITYSDK_OFFSET(0x17107A70)
#define CLASS_1_C427585D3B690B54__CTOR_OFFSET UNITYSDK_OFFSET(0x17107A60)

inline static constexpr unsigned int Class_1_C427585D3B690B54_TypeDefinitionIndex = 73790;

class Class_1_C427585D3B690B54 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>** StaticGet_AKPBPAGFPCP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C427585D3B690B54_TypeDefinitionIndex)->GetStaticField(0x66F60);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_HDINMFOOIEK()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C427585D3B690B54_TypeDefinitionIndex)->GetStaticField(0x66F68);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C427585D3B690B54__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C427585D3B690B54__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::UnityEngine::Material*>* Method_1_4902E6AECD9F20DD(::System::Int32 a1)
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C427585D3B690B54_METHOD_1_4902E6AECD9F20DD_OFFSET))(a1);
	}
};
