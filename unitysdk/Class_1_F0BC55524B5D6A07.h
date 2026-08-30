#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963;
class Class_1_F0BC55524B5D6A07_Section;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_F0BC55524B5D6A07_METHOD_1_20682CF8BD59F071_OFFSET UNITYSDK_OFFSET(0x15878E80)
#define CLASS_1_F0BC55524B5D6A07_METHOD_1_5232C6FB96D66DE8_OFFSET UNITYSDK_OFFSET(0x1587A4E0)
#define CLASS_1_F0BC55524B5D6A07_METHOD_1_A033B4D8A04411F7_OFFSET UNITYSDK_OFFSET(0x158798B0)
#define CLASS_1_F0BC55524B5D6A07_METHOD_1_C5DA31036A614969_OFFSET UNITYSDK_OFFSET(0x1587AEB0)
#define CLASS_1_F0BC55524B5D6A07__CTOR_OFFSET UNITYSDK_OFFSET(0x1587BA00)

inline static constexpr unsigned int Class_1_F0BC55524B5D6A07_TypeDefinitionIndex = 73524;

class Class_1_F0BC55524B5D6A07 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0BC55524B5D6A07__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Mesh* Method_1_20682CF8BD59F071(::System::Collections::Generic::List_1<::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963*>* a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::List_1<::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963*>*, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0BC55524B5D6A07_METHOD_1_20682CF8BD59F071_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Mesh* Method_1_A033B4D8A04411F7(::Class_1_F0BC55524B5D6A07_Section* a1, ::System::Collections::Generic::List_1<::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963*>* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Mesh*(*)(::Class_1_F0BC55524B5D6A07_Section*, ::System::Collections::Generic::List_1<::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0BC55524B5D6A07_METHOD_1_A033B4D8A04411F7_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Mesh* Method_1_5232C6FB96D66DE8(::Class_1_F0BC55524B5D6A07_Section* a1, ::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Mesh*(*)(::Class_1_F0BC55524B5D6A07_Section*, ::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F0BC55524B5D6A07_METHOD_1_5232C6FB96D66DE8_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Mesh* Method_1_C5DA31036A614969(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F0BC55524B5D6A07_METHOD_1_C5DA31036A614969_OFFSET))(a1, a2, a3);
	}
};
