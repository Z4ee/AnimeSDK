#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_1971EC3F8F96BB19_METHOD_1_A141A04D7DDA90F2_OFFSET UNITYSDK_OFFSET(0x1D734100)
#define CLASS_1_1971EC3F8F96BB19_METHOD_1_A917867563465F6C_OFFSET UNITYSDK_OFFSET(0x1D733AA0)
#define CLASS_1_1971EC3F8F96BB19_METHOD_1_D840B6924179AB1A_OFFSET UNITYSDK_OFFSET(0x1D733960)
#define CLASS_1_1971EC3F8F96BB19_METHOD_1_FB3D700CB948E6D1_OFFSET UNITYSDK_OFFSET(0x1D734160)

inline static constexpr unsigned int Class_1_1971EC3F8F96BB19_TypeDefinitionIndex = 6400;

class Class_1_1971EC3F8F96BB19 : public ::System::Object
{
public:
	static ::System::Void Method_1_D840B6924179AB1A(::UnityEngine::Bounds a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6, ::UnityEngine::Vector3& a7, ::UnityEngine::Vector3& a8, ::UnityEngine::Vector3& a9)
	{
		return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_1971EC3F8F96BB19_METHOD_1_D840B6924179AB1A_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::UnityEngine::Bounds Method_1_A917867563465F6C(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_1971EC3F8F96BB19_METHOD_1_A917867563465F6C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A141A04D7DDA90F2(::UnityEngine::Bounds a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_1971EC3F8F96BB19_METHOD_1_A141A04D7DDA90F2_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Rect Method_1_FB3D700CB948E6D1(::UnityEngine::Bounds a1)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_1_1971EC3F8F96BB19_METHOD_1_FB3D700CB948E6D1_OFFSET))(a1);
	}
};
