#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BC892FF2CA890F74_Class_1_E7B1DF5735A03963;
class Class_1_BC892FF2CA890F74_Section;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_BC892FF2CA890F74_METHOD_1_00DBDFCCF3D00D23_OFFSET UNITYSDK_OFFSET(0x104DE760)
#define CLASS_1_BC892FF2CA890F74_METHOD_1_041F97E0CA582690_OFFSET UNITYSDK_OFFSET(0x104E09E0)
#define CLASS_1_BC892FF2CA890F74_METHOD_1_5F4B3E5884010841_OFFSET UNITYSDK_OFFSET(0x104E02C0)
#define CLASS_1_BC892FF2CA890F74_METHOD_1_A4063A876EE66180_OFFSET UNITYSDK_OFFSET(0x104DEE70)
#define CLASS_1_BC892FF2CA890F74__CTOR_OFFSET UNITYSDK_OFFSET(0x104E13F0)

inline static constexpr unsigned int Class_1_BC892FF2CA890F74_TypeDefinitionIndex = 60350;

class Class_1_BC892FF2CA890F74 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC892FF2CA890F74__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Mesh* Method_1_00DBDFCCF3D00D23(::System::Collections::Generic::List_1<::Class_1_BC892FF2CA890F74_Class_1_E7B1DF5735A03963*>* a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::List_1<::Class_1_BC892FF2CA890F74_Class_1_E7B1DF5735A03963*>*, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC892FF2CA890F74_METHOD_1_00DBDFCCF3D00D23_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Mesh* Method_1_A4063A876EE66180(::Class_1_BC892FF2CA890F74_Section* a1, ::System::Collections::Generic::List_1<::Class_1_BC892FF2CA890F74_Class_1_E7B1DF5735A03963*>* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Mesh*(*)(::Class_1_BC892FF2CA890F74_Section*, ::System::Collections::Generic::List_1<::Class_1_BC892FF2CA890F74_Class_1_E7B1DF5735A03963*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC892FF2CA890F74_METHOD_1_A4063A876EE66180_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Mesh* Method_1_5F4B3E5884010841(::Class_1_BC892FF2CA890F74_Section* a1, ::Class_1_BC892FF2CA890F74_Class_1_E7B1DF5735A03963* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Mesh*(*)(::Class_1_BC892FF2CA890F74_Section*, ::Class_1_BC892FF2CA890F74_Class_1_E7B1DF5735A03963*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BC892FF2CA890F74_METHOD_1_5F4B3E5884010841_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Mesh* Method_1_041F97E0CA582690(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BC892FF2CA890F74_METHOD_1_041F97E0CA582690_OFFSET))(a1, a2, a3);
	}
};
