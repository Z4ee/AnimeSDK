#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xA68A470)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xA68B040)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_1_OFFSET UNITYSDK_OFFSET(0xA68AE20)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_2_OFFSET UNITYSDK_OFFSET(0xA68AC00)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xA68B280)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0xA68A670)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xA68A970)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xA68A9E0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_F633C62FE7BF4997_OFFSET UNITYSDK_OFFSET(0xA689C40)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYBACK_OFFSET UNITYSDK_OFFSET(0xA68A510)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYEYEANIMATION_OFFSET UNITYSDK_OFFSET(0xA68A310)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0xA689BF0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0xA68B4B0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA68B4A0)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelAnimatorView_TypeDefinitionIndex = 71290;

	class ChimeraDuelAnimatorView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0xAEC0);
		}
		static ::System::Int32* StaticGet_Field_5_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0xAEC4);
		}
		static ::System::Int32* StaticGet_Field_5_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0xAEC8);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0xAECC);
		}
		static ::System::Int32* StaticGet_Field_5_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0xAED0);
		}
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0xAED4);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0xAED8);
		}
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0xAEDC);
		}
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0xAEE0);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0xAEE4);
		}
		::System::Single HurtCDTimeConfig; // 0x18
		::System::Single Field_5_11; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW__CCTOR_OFFSET))();
		}

		::System::Void Play(::RPG::GameCore::ChimeraBattleAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleAnimationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAY_OFFSET))(this, a1);
		}

		::System::Void PlayEyeAnimation(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYEYEANIMATION_OFFSET))(this, a1);
		}

		::System::Void PlayBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYBACK_OFFSET))(this);
		}

		::System::Void Method_5_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_5_F633C62FE7BF4997(::RPG::GameCore::ChimeraBattleAnimationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleAnimationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_F633C62FE7BF4997_OFFSET))(this, a1);
		}

		::System::Void Method_5_6173AF17811AED4B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_6173AF17811AED4B_OFFSET))(this);
		}

		::System::Void Method_5_0076C796B2045359()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_0076C796B2045359_OFFSET))(this);
		}

		::System::Void Method_5_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_OFFSET))(this);
		}

		::System::Void Method_5_18982EFD3B740683_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_1_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_18982EFD3B740683_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_2_OFFSET))(this);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_GET_ANIMATOR_OFFSET))(this);
		}
	};
}
