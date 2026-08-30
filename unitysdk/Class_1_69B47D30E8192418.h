#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_69B47D30E8192418_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x16338F20)
#define CLASS_1_69B47D30E8192418_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x16338E90)
#define CLASS_1_69B47D30E8192418__CTOR_OFFSET UNITYSDK_OFFSET(0x16338FB0)

inline static constexpr unsigned int Class_1_69B47D30E8192418_TypeDefinitionIndex = 69787;

class Class_1_69B47D30E8192418 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69B47D30E8192418__CTOR_OFFSET))(this);
	}

	::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_69B47D30E8192418_SETPROPERTY_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_69B47D30E8192418_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
	}
};
