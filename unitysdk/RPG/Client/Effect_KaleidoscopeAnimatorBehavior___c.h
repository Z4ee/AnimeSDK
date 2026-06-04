#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Effect_KaleidoscopeAnimatorBehavior_ParticleData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB85E700)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB85E730)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C___UPDATE_B__8_0_OFFSET UNITYSDK_OFFSET(0xB85E740)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_KaleidoscopeAnimatorBehavior___c_TypeDefinitionIndex = 65911;

	class Effect_KaleidoscopeAnimatorBehavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::Effect_KaleidoscopeAnimatorBehavior_ParticleData*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::Effect_KaleidoscopeAnimatorBehavior_ParticleData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Effect_KaleidoscopeAnimatorBehavior___c_TypeDefinitionIndex)->GetStaticField(0xBD60);
		}
		static ::RPG::Client::Effect_KaleidoscopeAnimatorBehavior___c** StaticGet___9()
		{
			return (::RPG::Client::Effect_KaleidoscopeAnimatorBehavior___c**)Il2CppClass::FromTypeDefinitionIndex(Effect_KaleidoscopeAnimatorBehavior___c_TypeDefinitionIndex)->GetStaticField(0xBD68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __Update_b__8_0(::RPG::Client::Effect_KaleidoscopeAnimatorBehavior_ParticleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_KaleidoscopeAnimatorBehavior_ParticleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C___UPDATE_B__8_0_OFFSET))(this, a1);
		}
	};
}
