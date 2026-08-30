#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1AC29140)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x1AC29CF0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_1_OFFSET UNITYSDK_OFFSET(0x1AC29AD0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_2_OFFSET UNITYSDK_OFFSET(0x1AC298B0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x1AC29F30)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x1AC29340)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1AC29630)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1AC296A0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_METHOD_5_F633C62FE7BF4997_OFFSET UNITYSDK_OFFSET(0x1AC28920)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYBACK_OFFSET UNITYSDK_OFFSET(0x1AC291E0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAYEYEANIMATION_OFFSET UNITYSDK_OFFSET(0x1AC28FE0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0x1AC288D0)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC2A160)
#define RPG_CLIENT_LITTLEGAME_CHIMERADUEL_CHIMERADUELANIMATORVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC2A150)

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelAnimatorView_TypeDefinitionIndex = 77237;

	class ChimeraDuelAnimatorView : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_BMOKIOMMCIL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x136F0);
		}
		static ::System::Int32* StaticGet_HCNJEDMDAMK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x136F4);
		}
		static ::System::Int32* StaticGet_HILLGOLHOLO()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x136F8);
		}
		static ::System::Int32* StaticGet_LFJHKGPGMKN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x136FC);
		}
		static ::System::Int32* StaticGet_DFIPBEILGAH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x13700);
		}
		static ::System::Int32* StaticGet_OJNCNOHNEEH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x13704);
		}
		static ::System::Int32* StaticGet_FLDGLNNLAFK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x13708);
		}
		static ::System::Int32* StaticGet_OJMAKFGNBOM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x1370C);
		}
		static ::System::Int32* StaticGet_DODGEHMJGNA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x13710);
		}
		static ::System::Int32* StaticGet_DEDJFJNKCAG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelAnimatorView_TypeDefinitionIndex)->GetStaticField(0x13714);
		}
		::System::Single HurtCDTimeConfig; // 0x18
		::System::Single LNLADKOLPFM; // 0x1C

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
