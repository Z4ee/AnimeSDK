#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_0DD826F2F1475F2A_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x13CAA350)
#define CLASS_1_0DD826F2F1475F2A_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x13CAA2D0)
#define CLASS_1_0DD826F2F1475F2A__CTOR_OFFSET UNITYSDK_OFFSET(0x13CAA3E0)

inline static constexpr unsigned int Class_1_0DD826F2F1475F2A_TypeDefinitionIndex = 65283;

class Class_1_0DD826F2F1475F2A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DD826F2F1475F2A__CTOR_OFFSET))(this);
	}

	::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Matrix4x4>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + CLASS_1_0DD826F2F1475F2A_SETPROPERTY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Matrix4x4>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + CLASS_1_0DD826F2F1475F2A_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
	}
};
