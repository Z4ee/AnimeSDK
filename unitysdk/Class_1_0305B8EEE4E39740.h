#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class MaterialPropertyConfig; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystemForceField; }

#define CLASS_1_0305B8EEE4E39740_METHOD_1_14FFEF4F28AE9CEA_OFFSET UNITYSDK_OFFSET(0x11DD7570)
#define CLASS_1_0305B8EEE4E39740_METHOD_1_19CDB833F67878B9_OFFSET UNITYSDK_OFFSET(0x11DD7710)

inline static constexpr unsigned int Class_1_0305B8EEE4E39740_TypeDefinitionIndex = 64666;

class Class_1_0305B8EEE4E39740 : public ::System::Object
{
public:
	static ::System::Void Method_1_14FFEF4F28AE9CEA(::RPG::Client::MonoEffect* a1, ::UnityEngine::ParticleSystemForceField* a2)
	{
		return ((::System::Void(*)(::RPG::Client::MonoEffect*, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + CLASS_1_0305B8EEE4E39740_METHOD_1_14FFEF4F28AE9CEA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_19CDB833F67878B9(::RPG::GameCore::MaterialPropertyConfig* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::MaterialPropertyConfig*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_0305B8EEE4E39740_METHOD_1_19CDB833F67878B9_OFFSET))(a1, a2);
	}
};
