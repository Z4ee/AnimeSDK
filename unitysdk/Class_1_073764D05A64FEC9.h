#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffectPluginLaserLineRenderers; }

#define CLASS_1_073764D05A64FEC9_METHOD_1_089786A1D76FF41E_OFFSET UNITYSDK_OFFSET(0x10CF7D50)
#define CLASS_1_073764D05A64FEC9_METHOD_1_E8CDE65A0473921A_OFFSET UNITYSDK_OFFSET(0x10CF8530)

inline static constexpr unsigned int Class_1_073764D05A64FEC9_TypeDefinitionIndex = 80549;

class Class_1_073764D05A64FEC9 : public ::System::Object
{
public:
	static ::System::Void Method_1_089786A1D76FF41E(::MoleMole::MonoEffectPluginLaserLineRenderers* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffectPluginLaserLineRenderers*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_073764D05A64FEC9_METHOD_1_089786A1D76FF41E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E8CDE65A0473921A(::MoleMole::MonoEffectPluginLaserLineRenderers* a1)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffectPluginLaserLineRenderers*))((::PBYTE)hIl2Cpp + CLASS_1_073764D05A64FEC9_METHOD_1_E8CDE65A0473921A_OFFSET))(a1);
	}
};
