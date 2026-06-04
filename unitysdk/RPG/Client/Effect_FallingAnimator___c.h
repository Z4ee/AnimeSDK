#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Effect_FallingAnimator_ParticleData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB84FC50)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB84FC90)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__INIT_B__44_0_OFFSET UNITYSDK_OFFSET(0xB84FD90)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__UPDATE_B__43_0_OFFSET UNITYSDK_OFFSET(0xB84FCA0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FallingAnimator___c_TypeDefinitionIndex = 65894;

	class Effect_FallingAnimator___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Effect_FallingAnimator___c** StaticGet___9()
		{
			return (::RPG::Client::Effect_FallingAnimator___c**)Il2CppClass::FromTypeDefinitionIndex(Effect_FallingAnimator___c_TypeDefinitionIndex)->GetStaticField(0xB110);
		}
		static ::System::Func_2<::RPG::Client::Effect_FallingAnimator_ParticleData*, ::System::Boolean>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::RPG::Client::Effect_FallingAnimator_ParticleData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Effect_FallingAnimator___c_TypeDefinitionIndex)->GetStaticField(0xB118);
		}
		static ::System::Func_2<::RPG::Client::Effect_FallingAnimator_ParticleData*, ::System::Int32>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::RPG::Client::Effect_FallingAnimator_ParticleData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Effect_FallingAnimator___c_TypeDefinitionIndex)->GetStaticField(0xB120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__43_0(::RPG::Client::Effect_FallingAnimator_ParticleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_FallingAnimator_ParticleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__UPDATE_B__43_0_OFFSET))(this, a1);
		}

		::System::Int32 _Init_b__44_0(::RPG::Client::Effect_FallingAnimator_ParticleData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Effect_FallingAnimator_ParticleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__INIT_B__44_0_OFFSET))(this, a1);
		}
	};
}
