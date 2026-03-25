#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_192E0F861D93DE41_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xB8C8CA0)
#define CLASS_1_192E0F861D93DE41_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xB8C8C20)
#define CLASS_1_192E0F861D93DE41__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C8D30)

inline static constexpr unsigned int Class_1_192E0F861D93DE41_TypeDefinitionIndex = 57110;

class Class_1_192E0F861D93DE41 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_192E0F861D93DE41__CTOR_OFFSET))(this);
	}

	::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_192E0F861D93DE41_SETPROPERTY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_192E0F861D93DE41_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
	}
};
