#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3B8D4E8FE7E2216A_BlendingMode.h"
#include "unitysdk/Class_1_3B8D4E8FE7E2216A_ClippingPlane.h"
#include "unitysdk/Class_1_3B8D4E8FE7E2216A_ColorGradient.h"
#include "unitysdk/Class_1_3B8D4E8FE7E2216A_DepthBlend.h"
#include "unitysdk/Class_1_3B8D4E8FE7E2216A_Noise3D.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define CLASS_1_3B8D4E8FE7E2216A_CLASS_1_511D36723E750451_METHOD_1_44A6DE2B9E5DBE86_OFFSET UNITYSDK_OFFSET(0x1835E660)
#define CLASS_1_3B8D4E8FE7E2216A_CLASS_1_511D36723E750451_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1835E600)
#define CLASS_1_3B8D4E8FE7E2216A_CLASS_1_511D36723E750451__CTOR_OFFSET UNITYSDK_OFFSET(0x1835EC60)

inline static constexpr unsigned int Class_1_3B8D4E8FE7E2216A_Class_1_511D36723E750451_TypeDefinitionIndex = 49430;

class Class_1_3B8D4E8FE7E2216A_Class_1_511D36723E750451 : public ::System::Object
{
public:
	::Class_1_3B8D4E8FE7E2216A_DepthBlend JEEJINHEOKH; // 0x10
	::Class_1_3B8D4E8FE7E2216A_ColorGradient NMDPLLJEGHM; // 0x14
	::Class_1_3B8D4E8FE7E2216A_ClippingPlane KDBMIODMHKO; // 0x18
	::Class_1_3B8D4E8FE7E2216A_BlendingMode PJIBGENOPEC; // 0x1C
	::Class_1_3B8D4E8FE7E2216A_Noise3D KKHIFGPNKHD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B8D4E8FE7E2216A_CLASS_1_511D36723E750451__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B8D4E8FE7E2216A_CLASS_1_511D36723E750451_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_44A6DE2B9E5DBE86(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_3B8D4E8FE7E2216A_CLASS_1_511D36723E750451_METHOD_1_44A6DE2B9E5DBE86_OFFSET))(this, a1);
	}
};
