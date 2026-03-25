#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace UnityEngine { class ParticleSystemForceField; }

#define CLASS_1_0305B8EEE4E39740_METHOD_1_14FFEF4F28AE9CEA_OFFSET UNITYSDK_OFFSET(0x8737A00)

inline static constexpr unsigned int Class_1_0305B8EEE4E39740_TypeDefinitionIndex = 57405;

class Class_1_0305B8EEE4E39740 : public ::System::Object
{
public:
	static ::System::Void Method_1_14FFEF4F28AE9CEA(::RPG::Client::MonoEffect* a1, ::UnityEngine::ParticleSystemForceField* a2)
	{
		return ((::System::Void(*)(::RPG::Client::MonoEffect*, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + CLASS_1_0305B8EEE4E39740_METHOD_1_14FFEF4F28AE9CEA_OFFSET))(a1, a2);
	}
};
