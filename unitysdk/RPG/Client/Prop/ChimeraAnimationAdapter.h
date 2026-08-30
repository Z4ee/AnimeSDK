#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xDBFCC00)
#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xDBFCB60)
#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_PLAY_OFFSET UNITYSDK_OFFSET(0xDBFCAF0)
#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xDBFCCD0)
#define RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xDBFCCC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraAnimationAdapter_TypeDefinitionIndex = 77922;

	class ChimeraAnimationAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_MEKAIIEIDHC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraAnimationAdapter_TypeDefinitionIndex)->GetStaticField(0x14350);
		}
		static ::System::Int32* StaticGet_KMKPGPIDKJF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraAnimationAdapter_TypeDefinitionIndex)->GetStaticField(0x14354);
		}
		::UnityEngine::Animator* ChimeraAnimator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER__CCTOR_OFFSET))();
		}

		::System::Void Play(::RPG::Client::Prop::ChimeraAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraAnimationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_PLAY_OFFSET))(this, a1);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAANIMATIONADAPTER_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}
	};
}
