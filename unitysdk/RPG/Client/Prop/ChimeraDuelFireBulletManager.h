#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client::Prop { class ChimeraDuelFireBulletManager_Class_1_26BE6DE297B5BB4E; }
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace RPG::GameCore { class ChimeraDuelFireBulletNode; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_FIREBULLET_OFFSET UNITYSDK_OFFSET(0x16E214A0)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x16E204F0)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_METHOD_5_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0x16E21CC0)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_METHOD_5_99382C0940D13276_OFFSET UNITYSDK_OFFSET(0x16E21720)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16E21460)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16E21420)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16E20620)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_START_OFFSET UNITYSDK_OFFSET(0x16E20440)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x16E20D50)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_UNINIT_OFFSET UNITYSDK_OFFSET(0x16E20BA0)
#define RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E21F00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelFireBulletManager_TypeDefinitionIndex = 74342;

	class ChimeraDuelFireBulletManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AttachPointMapping* Mapping; // 0x18
		::UnityEngine::AnimationCurve* YCurveRate; // 0x20
		::UnityEngine::AnimationCurve* XCurveRate; // 0x28
		::System::Collections::Generic::List_1<::System::Action*>* Field_5_3; // 0x30
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelFireBulletManager_Class_1_26BE6DE297B5BB4E*>*>* Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_UNINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void FireBullet(::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a1, ::RPG::GameCore::ChimeraDuelFireBulletNode* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*, ::RPG::GameCore::ChimeraDuelFireBulletNode*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_FIREBULLET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_99382C0940D13276(::UnityEngine::GameObject* a1, ::RPG::GameCore::ChimeraDuelFireBulletNode* a2, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelFireBulletManager_Class_1_26BE6DE297B5BB4E*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::ChimeraDuelFireBulletNode*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelFireBulletManager_Class_1_26BE6DE297B5BB4E*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_METHOD_5_99382C0940D13276_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_3F07804D8892197E(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELFIREBULLETMANAGER_METHOD_5_3F07804D8892197E_OFFSET))(this, a1);
		}
	};
}
