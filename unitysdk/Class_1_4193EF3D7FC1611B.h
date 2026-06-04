#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_4193EF3D7FC1611B_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xA8C6760)
#define CLASS_1_4193EF3D7FC1611B_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xA8C66E0)
#define CLASS_1_4193EF3D7FC1611B__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C67F0)

inline static constexpr unsigned int Class_1_4193EF3D7FC1611B_TypeDefinitionIndex = 65281;

class Class_1_4193EF3D7FC1611B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4193EF3D7FC1611B__CTOR_OFFSET))(this);
	}

	::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Color>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + CLASS_1_4193EF3D7FC1611B_SETPROPERTY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Color>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + CLASS_1_4193EF3D7FC1611B_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
	}
};
