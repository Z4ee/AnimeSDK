#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BFA37003BB609519_BlendingMode.h"
#include "unitysdk/Class_1_BFA37003BB609519_ClippingPlane.h"
#include "unitysdk/Class_1_BFA37003BB609519_ColorGradient.h"
#include "unitysdk/Class_1_BFA37003BB609519_DepthBlend.h"
#include "unitysdk/Class_1_BFA37003BB609519_Noise3D.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define CLASS_1_BFA37003BB609519_CLASS_1_511D36723E750451_METHOD_1_44A6DE2B9E5DBE86_OFFSET UNITYSDK_OFFSET(0x141E6510)
#define CLASS_1_BFA37003BB609519_CLASS_1_511D36723E750451_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x141E64B0)
#define CLASS_1_BFA37003BB609519_CLASS_1_511D36723E750451__CTOR_OFFSET UNITYSDK_OFFSET(0x141E6B10)

inline static constexpr unsigned int Class_1_BFA37003BB609519_Class_1_511D36723E750451_TypeDefinitionIndex = 46199;

class Class_1_BFA37003BB609519_Class_1_511D36723E750451 : public ::System::Object
{
public:
	::Class_1_BFA37003BB609519_ColorGradient Field_1_0; // 0x10
	::Class_1_BFA37003BB609519_DepthBlend Field_1_1; // 0x14
	::Class_1_BFA37003BB609519_BlendingMode Field_1_2; // 0x18
	::Class_1_BFA37003BB609519_ClippingPlane Field_1_3; // 0x1C
	::Class_1_BFA37003BB609519_Noise3D Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFA37003BB609519_CLASS_1_511D36723E750451__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFA37003BB609519_CLASS_1_511D36723E750451_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_44A6DE2B9E5DBE86(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_BFA37003BB609519_CLASS_1_511D36723E750451_METHOD_1_44A6DE2B9E5DBE86_OFFSET))(this, a1);
	}
};
