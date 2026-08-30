#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_91850AE89699E808_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xC075810)
#define CLASS_1_91850AE89699E808_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xC075790)
#define CLASS_1_91850AE89699E808__CTOR_OFFSET UNITYSDK_OFFSET(0xC075890)

inline static constexpr unsigned int Class_1_91850AE89699E808_TypeDefinitionIndex = 69789;

class Class_1_91850AE89699E808 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91850AE89699E808__CTOR_OFFSET))(this);
	}

	::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_91850AE89699E808_SETPROPERTY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_91850AE89699E808_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
	}
};
