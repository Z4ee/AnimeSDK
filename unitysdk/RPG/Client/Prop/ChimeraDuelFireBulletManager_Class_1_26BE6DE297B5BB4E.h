#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelAnimatorView; }
namespace RPG::Client::LittleGame::ChimeraDuel { class DuelChimeraBattleView; }
namespace RPG::Client::Prop { class ChimeraDuelModelVfxPlayer; }
namespace RPG::GameCore { class ChimeraDuelFireBulletNode; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_CLEAR_OFFSET UNITYSDK_OFFSET(0xDC13F10)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_METHOD_1_50896BDA13FD77D3_OFFSET UNITYSDK_OFFSET(0xDC14160)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xDC15070)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xDC15200)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E__CTOR_OFFSET UNITYSDK_OFFSET(0xDC14FA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelFireBulletManager_Class_1_26BE6DE297B5BB4E_TypeDefinitionIndex = 77829;

	class ChimeraDuelFireBulletManager_Class_1_26BE6DE297B5BB4E : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* NPFCIFDPHPP; // 0x10
		::UnityEngine::Transform* GLDEBFOKEMJ; // 0x18
		::RPG::GameCore::ChimeraDuelFireBulletNode* JKLBAAHFJDJ; // 0x20
		::RPG::Client::LittleGame::ChimeraDuel::DuelChimeraBattleView* MMAHLODIDCB; // 0x28
		::UnityEngine::Transform* DEIMGIGLHLK; // 0x30
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelAnimatorView* LBLGJLNJMDL; // 0x38
		::System::Action_1<::System::Int32>* EGMGFMKIOHL; // 0x40
		::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* AHDAHAAGNCL; // 0x48
		::UnityEngine::AnimationCurve* EKBEMMMNOFI; // 0x50
		::UnityEngine::Transform* ONLEMJPMBDH; // 0x58
		::System::Single KKPEIMJKION; // 0x60
		::UnityEngine::Quaternion PACGNNNBPEI; // 0x64
		::System::Single LLNIGIGFCEA; // 0x74
		::System::Int32 CGDICMBIBPP; // 0x78
		::System::Boolean MABFMALCGKF; // 0x7C
		::System::Boolean BNBMIBGDDNE; // 0x7D
		::System::Boolean HCPFCJBJLHG; // 0x7E

		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::RPG::Client::LittleGame::ChimeraDuel::DuelChimeraBattleView* a3, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelAnimatorView* a4, ::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* a5, ::RPG::GameCore::ChimeraDuelFireBulletNode* a6, ::UnityEngine::AnimationCurve* a7, ::UnityEngine::AnimationCurve* a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Action_1<::System::Int32>* a11)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ChimeraDuel::DuelChimeraBattleView*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelAnimatorView*, ::RPG::Client::Prop::ChimeraDuelModelVfxPlayer*, ::RPG::GameCore::ChimeraDuelFireBulletNode*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Boolean, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void Method_1_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_1_50896BDA13FD77D3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_METHOD_1_50896BDA13FD77D3_OFFSET))(this, a1);
		}

		::System::Void Method_1_E52129E82CD2D7F8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_CLEAR_OFFSET))(this);
		}
	};
}
