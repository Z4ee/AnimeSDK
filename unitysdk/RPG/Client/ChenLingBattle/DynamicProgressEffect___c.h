#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class EffectProgressConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FA6810)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___C__CREATEDYNAMICPROGRESSEFFECT_B__0_0_OFFSET UNITYSDK_OFFSET(0x9FA6860)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA6850)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int DynamicProgressEffect___c_TypeDefinitionIndex = 70120;

	class DynamicProgressEffect___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattle::DynamicProgressEffect___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::DynamicProgressEffect___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicProgressEffect___c_TypeDefinitionIndex)->GetStaticField(0x4EE90);
		}
		static ::System::Func_2<::RPG::Client::ChenLingBattle::EffectProgressConfig*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::ChenLingBattle::EffectProgressConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicProgressEffect___c_TypeDefinitionIndex)->GetStaticField(0x4EE98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateDynamicProgressEffect_b__0_0(::RPG::Client::ChenLingBattle::EffectProgressConfig* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::EffectProgressConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___C__CREATEDYNAMICPROGRESSEFFECT_B__0_0_OFFSET))(this, e);
		}
	};
}
