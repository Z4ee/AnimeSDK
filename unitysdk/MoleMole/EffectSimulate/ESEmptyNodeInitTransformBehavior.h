#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESEmptyNodeBehavior.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_GET_RANDOMVAL_OFFSET UNITYSDK_OFFSET(0xFB19E80)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_METHOD_3_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0xFB19ED0)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_SET_RANDOMVAL_OFFSET UNITYSDK_OFFSET(0xFB19EA0)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFB19EB0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESEmptyNodeInitTransformBehavior_TypeDefinitionIndex = 66064;

	class ESEmptyNodeInitTransformBehavior : public ::MoleMole::EffectSimulate::ESEmptyNodeBehavior
	{
	public:
		::UnityEngine::Vector3 minVal; // 0x48
		::UnityEngine::Vector3 maxVal; // 0x54
		::UnityEngine::Vector3 _randomVal_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_randomVal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_GET_RANDOMVAL_OFFSET))(this);
		}

		::System::Void set_randomVal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_SET_RANDOMVAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_3_FA662896843C137A()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITTRANSFORMBEHAVIOR_METHOD_3_FA662896843C137A_OFFSET))(this);
		}
	};
}
