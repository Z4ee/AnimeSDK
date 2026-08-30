#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_FD1549170E932B6A_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xB4BB6A0)
#define CLASS_1_FD1549170E932B6A_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xB4BB610)
#define CLASS_1_FD1549170E932B6A__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BB730)

inline static constexpr unsigned int Class_1_FD1549170E932B6A_TypeDefinitionIndex = 69788;

class Class_1_FD1549170E932B6A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD1549170E932B6A__CTOR_OFFSET))(this);
	}

	::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD1549170E932B6A_SETPROPERTY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD1549170E932B6A_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
	}
};
