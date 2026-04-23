#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_A5D7FB2591F6B008_METHOD_1_AA8CB4D4CAC6C0C6_OFFSET UNITYSDK_OFFSET(0x1176CC80)
#define CLASS_1_A5D7FB2591F6B008__CCTOR_OFFSET UNITYSDK_OFFSET(0x1176CE70)
#define CLASS_1_A5D7FB2591F6B008__CTOR_OFFSET UNITYSDK_OFFSET(0x1176CE60)

inline static constexpr unsigned int Class_1_A5D7FB2591F6B008_TypeDefinitionIndex = 68017;

class Class_1_A5D7FB2591F6B008 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5D7FB2591F6B008_TypeDefinitionIndex)->GetStaticField(0x66F40);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5D7FB2591F6B008_TypeDefinitionIndex)->GetStaticField(0x66F48);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5D7FB2591F6B008__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5D7FB2591F6B008__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::UnityEngine::Material*>* Method_1_AA8CB4D4CAC6C0C6(::System::Int32 a1)
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A5D7FB2591F6B008_METHOD_1_AA8CB4D4CAC6C0C6_OFFSET))(a1);
	}
};
