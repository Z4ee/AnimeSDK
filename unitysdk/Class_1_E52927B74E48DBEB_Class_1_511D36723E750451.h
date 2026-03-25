#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E52927B74E48DBEB_BlendingMode.h"
#include "unitysdk/Class_1_E52927B74E48DBEB_ClippingPlane.h"
#include "unitysdk/Class_1_E52927B74E48DBEB_ColorGradient.h"
#include "unitysdk/Class_1_E52927B74E48DBEB_DepthBlend.h"
#include "unitysdk/Class_1_E52927B74E48DBEB_Noise3D.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define CLASS_1_E52927B74E48DBEB_CLASS_1_511D36723E750451_METHOD_1_44A6DE2B9E5DBE86_OFFSET UNITYSDK_OFFSET(0x8DAFC20)
#define CLASS_1_E52927B74E48DBEB_CLASS_1_511D36723E750451_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8DAFBC0)
#define CLASS_1_E52927B74E48DBEB_CLASS_1_511D36723E750451__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB0250)

inline static constexpr unsigned int Class_1_E52927B74E48DBEB_Class_1_511D36723E750451_TypeDefinitionIndex = 39707;

class Class_1_E52927B74E48DBEB_Class_1_511D36723E750451 : public ::System::Object
{
public:
	::Class_1_E52927B74E48DBEB_Noise3D Field_1_1; // 0x10
	::Class_1_E52927B74E48DBEB_ClippingPlane Field_1_4; // 0x14
	::Class_1_E52927B74E48DBEB_DepthBlend Field_1_2; // 0x18
	::Class_1_E52927B74E48DBEB_ColorGradient Field_1_3; // 0x1C
	::Class_1_E52927B74E48DBEB_BlendingMode Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E52927B74E48DBEB_CLASS_1_511D36723E750451__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E52927B74E48DBEB_CLASS_1_511D36723E750451_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_44A6DE2B9E5DBE86(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_E52927B74E48DBEB_CLASS_1_511D36723E750451_METHOD_1_44A6DE2B9E5DBE86_OFFSET))(this, a1);
	}
};
