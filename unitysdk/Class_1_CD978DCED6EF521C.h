#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Terrain; }

#define CLASS_1_CD978DCED6EF521C_METHOD_1_2437AB406FCFB52E_OFFSET UNITYSDK_OFFSET(0x159B5AF0)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_334017AA338BD66A_OFFSET UNITYSDK_OFFSET(0x159B6730)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_4B1C948820FD4AE9_OFFSET UNITYSDK_OFFSET(0x159B68F0)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_A2BD0563BD2EADC3_OFFSET UNITYSDK_OFFSET(0x159B5C20)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_C320E4FF233ED8F5_OFFSET UNITYSDK_OFFSET(0x159B6590)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_C5DE57233F0EAB15_OFFSET UNITYSDK_OFFSET(0x159B6D20)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_CC984D88EAB7FF17_OFFSET UNITYSDK_OFFSET(0x159B57F0)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_DB41D7F6F6DDB12D_OFFSET UNITYSDK_OFFSET(0x159B5940)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_DF443F7C8D817B4C_OFFSET UNITYSDK_OFFSET(0x159B69F0)
#define CLASS_1_CD978DCED6EF521C_METHOD_1_EB9475CC2EE7DFC9_OFFSET UNITYSDK_OFFSET(0x159B54B0)

inline static constexpr unsigned int Class_1_CD978DCED6EF521C_TypeDefinitionIndex = 64165;

class Class_1_CD978DCED6EF521C : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0

	static ::UnityEngine::Bounds Method_1_EB9475CC2EE7DFC9(::UnityEngine::Terrain* a1)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_EB9475CC2EE7DFC9_OFFSET))(a1);
	}

	static ::UnityEngine::Bounds Method_1_CC984D88EAB7FF17(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_CC984D88EAB7FF17_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_DB41D7F6F6DDB12D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_DB41D7F6F6DDB12D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_2437AB406FCFB52E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_2437AB406FCFB52E_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Bounds Method_1_A2BD0563BD2EADC3(::UnityEngine::Light* a1)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_A2BD0563BD2EADC3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C320E4FF233ED8F5(::UnityEngine::Bounds a1, ::System::Collections::Generic::List_1<::UnityEngine::Plane>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_C320E4FF233ED8F5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_334017AA338BD66A(::UnityEngine::Bounds a1, ::System::Collections::Generic::List_1<::UnityEngine::Plane>* a2, ::System::Int32 a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Plane>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_334017AA338BD66A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_4B1C948820FD4AE9(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_4B1C948820FD4AE9_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DF443F7C8D817B4C(::Il2CppArray<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_DF443F7C8D817B4C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C5DE57233F0EAB15(::UnityEngine::Bounds a1, ::UnityEngine::Bounds a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_CD978DCED6EF521C_METHOD_1_C5DE57233F0EAB15_OFFSET))(a1, a2);
	}
};
