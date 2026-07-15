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

#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_CLEAR_OFFSET UNITYSDK_OFFSET(0x16E20CD0)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_METHOD_1_50896BDA13FD77D3_OFFSET UNITYSDK_OFFSET(0x16E20F20)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16E21E30)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x16E21FC0)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_CLASS_1_26BE6DE297B5BB4E__CTOR_OFFSET UNITYSDK_OFFSET(0x16E21D60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelFireBulletManager_Class_1_26BE6DE297B5BB4E_TypeDefinitionIndex = 74343;

	class ChimeraDuelFireBulletManager_Class_1_26BE6DE297B5BB4E : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelAnimatorView* Field_1_0; // 0x10
		::RPG::Client::LittleGame::ChimeraDuel::DuelChimeraBattleView* Field_1_1; // 0x18
		::System::Action_1<::System::Int32>* Field_1_2; // 0x20
		::UnityEngine::AnimationCurve* Field_1_3; // 0x28
		::UnityEngine::Transform* Field_1_4; // 0x30
		::UnityEngine::Transform* Field_1_5; // 0x38
		::RPG::GameCore::ChimeraDuelFireBulletNode* Field_1_6; // 0x40
		::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* Field_1_7; // 0x48
		::UnityEngine::Transform* Field_1_8; // 0x50
		::UnityEngine::AnimationCurve* Field_1_9; // 0x58
		::UnityEngine::Quaternion Field_1_10; // 0x60
		::System::Boolean Field_1_11; // 0x70
		::System::Boolean Field_1_12; // 0x71
		::System::Boolean Field_1_13; // 0x72
		::System::Int32 Field_1_14; // 0x74
		::System::Single Field_1_15; // 0x78
		::System::Single Field_1_16; // 0x7C

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
