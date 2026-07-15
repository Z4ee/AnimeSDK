#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class MaterialPropertyConfig; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystemForceField; }

#define CLASS_1_16CB798680C1A03E_METHOD_1_19CDB833F67878B9_OFFSET UNITYSDK_OFFSET(0x18741D00)
#define CLASS_1_16CB798680C1A03E_METHOD_1_2AB8069099B5558F_OFFSET UNITYSDK_OFFSET(0x18741B60)

inline static constexpr unsigned int Class_1_16CB798680C1A03E_TypeDefinitionIndex = 67004;

class Class_1_16CB798680C1A03E : public ::System::Object
{
public:
	static ::System::Void Method_1_2AB8069099B5558F(::RPG::Client::MonoEffect* a1, ::UnityEngine::ParticleSystemForceField* a2)
	{
		return ((::System::Void(*)(::RPG::Client::MonoEffect*, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + CLASS_1_16CB798680C1A03E_METHOD_1_2AB8069099B5558F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_19CDB833F67878B9(::RPG::GameCore::MaterialPropertyConfig* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::MaterialPropertyConfig*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_16CB798680C1A03E_METHOD_1_19CDB833F67878B9_OFFSET))(a1, a2);
	}
};
