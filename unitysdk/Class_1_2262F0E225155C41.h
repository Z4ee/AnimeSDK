#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffectPluginLaserLineRenderers; }

#define CLASS_1_2262F0E225155C41_METHOD_1_B4E70984BD2CE1B3_OFFSET UNITYSDK_OFFSET(0x11FCDED0)
#define CLASS_1_2262F0E225155C41_METHOD_1_E8CDE65A0473921A_OFFSET UNITYSDK_OFFSET(0x11FCDAA0)

inline static constexpr unsigned int Class_1_2262F0E225155C41_TypeDefinitionIndex = 78941;

class Class_1_2262F0E225155C41 : public ::System::Object
{
public:
	static ::System::Void Method_1_E8CDE65A0473921A(::MoleMole::MonoEffectPluginLaserLineRenderers* a1)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffectPluginLaserLineRenderers*))((::PBYTE)hIl2Cpp + CLASS_1_2262F0E225155C41_METHOD_1_E8CDE65A0473921A_OFFSET))(a1);
	}

	static ::System::Void Method_1_B4E70984BD2CE1B3(::MoleMole::MonoEffectPluginLaserLineRenderers* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffectPluginLaserLineRenderers*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_2262F0E225155C41_METHOD_1_B4E70984BD2CE1B3_OFFSET))(a1, a2, a3);
	}
};
