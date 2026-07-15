#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_88372147D8886268_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x16E7AFF0)
#define CLASS_1_88372147D8886268_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x16E7AF10)
#define CLASS_1_88372147D8886268__CTOR_OFFSET UNITYSDK_OFFSET(0x16E7B0C0)

inline static constexpr unsigned int Class_1_88372147D8886268_TypeDefinitionIndex = 66688;

class Class_1_88372147D8886268 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88372147D8886268__CTOR_OFFSET))(this);
	}

	::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_88372147D8886268_SETPROPERTY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_88372147D8886268_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
	}
};
