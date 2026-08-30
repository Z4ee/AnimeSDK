#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_PARTICLEDATA_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xCDF0D60)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_PARTICLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCDF0DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_KaleidoscopeAnimatorBehavior_ParticleData_TypeDefinitionIndex = 70457;

	class Effect_KaleidoscopeAnimatorBehavior_ParticleData : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x18
		::RPG::Client::TAUtils::SimpleTransform transform; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_PARTICLEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR_PARTICLEDATA_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
		}
	};
}
