#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Terrain; }

#define CLASS_1_8AA81578911579B8_METHOD_1_24832CF05B921037_OFFSET UNITYSDK_OFFSET(0x11CA7BC0)
#define CLASS_1_8AA81578911579B8_METHOD_1_2F9D4854ED863984_OFFSET UNITYSDK_OFFSET(0x11CA7E50)
#define CLASS_1_8AA81578911579B8_METHOD_1_4B1C948820FD4AE9_OFFSET UNITYSDK_OFFSET(0x11CA7AC0)
#define CLASS_1_8AA81578911579B8_METHOD_1_73747282B7D204B0_OFFSET UNITYSDK_OFFSET(0x11CA80F0)
#define CLASS_1_8AA81578911579B8_METHOD_1_A2BD0563BD2EADC3_OFFSET UNITYSDK_OFFSET(0x11CA6AD0)
#define CLASS_1_8AA81578911579B8_METHOD_1_A570C5923F7E7EC5_OFFSET UNITYSDK_OFFSET(0x11CA7CC0)
#define CLASS_1_8AA81578911579B8_METHOD_1_C2D5234F377C112C_OFFSET UNITYSDK_OFFSET(0x11CA7490)
#define CLASS_1_8AA81578911579B8_METHOD_1_C5DE57233F0EAB15_OFFSET UNITYSDK_OFFSET(0x11CA8020)
#define CLASS_1_8AA81578911579B8_METHOD_1_CC984D88EAB7FF17_OFFSET UNITYSDK_OFFSET(0x11CA7970)
#define CLASS_1_8AA81578911579B8_METHOD_1_EB9475CC2EE7DFC9_OFFSET UNITYSDK_OFFSET(0x11CA7630)

inline static constexpr unsigned int Class_1_8AA81578911579B8_TypeDefinitionIndex = 62417;

class Class_1_8AA81578911579B8 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_0; // 0x0

	static ::UnityEngine::Bounds Method_1_A2BD0563BD2EADC3(::UnityEngine::Light* a1)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + CLASS_1_8AA81578911579B8_METHOD_1_A2BD0563BD2EADC3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C2D5234F377C112C(::UnityEngine::Bounds a1, ::System::Collections::Generic::List_1<::UnityEngine::Plane>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA81578911579B8_METHOD_1_C2D5234F377C112C_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Bounds Method_1_EB9475CC2EE7DFC9(::UnityEngine::Terrain* a1)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + CLASS_1_8AA81578911579B8_METHOD_1_EB9475CC2EE7DFC9_OFFSET))(a1);
	}

	static ::UnityEngine::Bounds Method_1_CC984D88EAB7FF17(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8AA81578911579B8_METHOD_1_CC984D88EAB7FF17_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4B1C948820FD4AE9(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8AA81578911579B8_METHOD_1_4B1C948820FD4AE9_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_24832CF05B921037(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8AA81578911579B8_METHOD_1_24832CF05B921037_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_A570C5923F7E7EC5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8AA81578911579B8_METHOD_1_A570C5923F7E7EC5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_2F9D4854ED863984(::UnityEngine::Bounds a1, ::System::Collections::Generic::List_1<::UnityEngine::Plane>* a2, ::System::Int32 a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Plane>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_8AA81578911579B8_METHOD_1_2F9D4854ED863984_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_C5DE57233F0EAB15(::UnityEngine::Bounds a1, ::UnityEngine::Bounds a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_8AA81578911579B8_METHOD_1_C5DE57233F0EAB15_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_73747282B7D204B0(::Il2CppArray<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_8AA81578911579B8_METHOD_1_73747282B7D204B0_OFFSET))(a1);
	}
};
