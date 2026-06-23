#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }

#define MONOEFFECTSATURATION_SETSATURATION_OFFSET UNITYSDK_OFFSET(0xFAF19D0)
#define MONOEFFECTSATURATION__CCTOR_OFFSET UNITYSDK_OFFSET(0xFAF1CD0)
#define MONOEFFECTSATURATION__CTOR_OFFSET UNITYSDK_OFFSET(0xFAF1C80)

inline static constexpr unsigned int MonoEffectSaturation_TypeDefinitionIndex = 58565;

class MonoEffectSaturation : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_SaturationID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectSaturation_TypeDefinitionIndex)->GetStaticField(0xE620);
	}
	::UnityEngine::Material* material; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTSATURATION__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOEFFECTSATURATION__CCTOR_OFFSET))();
	}

	::System::Void SetSaturation(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOEFFECTSATURATION_SETSATURATION_OFFSET))(this, value);
	}
};
