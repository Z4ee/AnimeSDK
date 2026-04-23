#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateView.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMasterAnchorConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkCallbackInfo;
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client::Prop { class ChimeraDuelModelVfxPlayer; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADD0940)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_GET__MASTERDATA_OFFSET UNITYSDK_OFFSET(0xADD11E0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_GET__RUNTIMEGROUPMANAGER_OFFSET UNITYSDK_OFFSET(0xADD2160)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_INIT_OFFSET UNITYSDK_OFFSET(0xADD07C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_REFRESHMASTER_OFFSET UNITYSDK_OFFSET(0xADD1010)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_REFRESHRANDOMMASTER_OFFSET UNITYSDK_OFFSET(0xADD1C80)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0xADD2720)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__CREATECHIMERA_OFFSET UNITYSDK_OFFSET(0xADD1E10)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__CREATEMASTERENTITY_OFFSET UNITYSDK_OFFSET(0xADD1410)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xADD26C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__DESTROYCHIMERA_OFFSET UNITYSDK_OFFSET(0xADD0E80)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__DESTROYMASTERENTITY_OFFSET UNITYSDK_OFFSET(0xADD0A10)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__DESTROYRANDOMEFFECT_OFFSET UNITYSDK_OFFSET(0xADD0F30)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__FIREMASTERSWITCHEFFECT_OFFSET UNITYSDK_OFFSET(0xADD24C0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__GETMASTERANCHOR_OFFSET UNITYSDK_OFFSET(0xADD2020)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__PLAYMASTERMOUTHTALK_OFFSET UNITYSDK_OFFSET(0xADD21F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__REFRESHCHIMERA_OFFSET UNITYSDK_OFFSET(0xADD1860)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__TRYLOADGRUOP_OFFSET UNITYSDK_OFFSET(0xADD1290)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__TRYUNLOADGRUOP_OFFSET UNITYSDK_OFFSET(0xADD0F90)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADD2790)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___PLAYMASTERMOUTHTALK_B__7_0_OFFSET UNITYSDK_OFFSET(0xADD2780)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleMasterSelectView_TypeDefinitionIndex = 71876;

	class ChimeraDuelMainPuzzleMasterSelectView : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView
	{
	public:
		static ::System::Int32* StaticGet__Jump()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleMasterSelectView_TypeDefinitionIndex)->GetStaticField(0x3650);
		}
		::System::UInt32 _MasterID; // 0x28
		::System::UInt32 _GroupID; // 0x2C
		::UnityEngine::GameObject* _ChimeraInstance; // 0x30
		::System::Boolean _IsInit; // 0x38
		::RPG::GameCore::GameEntity* _ShowingMasterEntity; // 0x40
		::System::UInt32 _RandomEffectUniqueID; // 0x48
		::System::UInt32 _MasterMouthTalkEventID; // 0x4C
		::System::String* MasterSwitchEffectPath; // 0x50
		::UnityEngine::Vector3 MasterEffectScale; // 0x58
		::System::String* ChimeraSwitchEffectPath; // 0x68
		::UnityEngine::Vector3 ChimeraEffectScale; // 0x70
		::System::String* PrefabPath; // 0x80
		::UnityEngine::Transform* ChimeraAnchor; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelMasterAnchorConfig>* MasterAnchorConfigs; // 0x90
		::UnityEngine::Transform* RandomMasterAnchor; // 0x98
		::System::String* RandomEffectPath; // 0xA0
		::UnityEngine::Transform* Table; // 0xA8
		::UnityEngine::Transform* Cusion; // 0xB0
		::RPG::Client::Prop::ChimeraDuelModelVfxPlayer* _VfxPlayer; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshMaster(::System::UInt32 masterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_REFRESHMASTER_OFFSET))(this, masterID);
		}

		::System::Void RefreshRandomMaster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_REFRESHRANDOMMASTER_OFFSET))(this);
		}

		::System::Void _RefreshChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__REFRESHCHIMERA_OFFSET))(this);
		}

		::System::Void _CreateMasterEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__CREATEMASTERENTITY_OFFSET))(this);
		}

		::System::Void _PlayMasterMouthTalk(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__PLAYMASTERMOUTHTALK_OFFSET))(this, entity);
		}

		::System::Void _FireMasterSwitchEffect(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__FIREMASTERSWITCHEFFECT_OFFSET))(this, entity);
		}

		::System::Void _CreateChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__CREATECHIMERA_OFFSET))(this);
		}

		::System::Void _TryLoadGruop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__TRYLOADGRUOP_OFFSET))(this);
		}

		::UnityEngine::Transform* _GetMasterAnchor(::System::UInt32 masterID)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__GETMASTERANCHOR_OFFSET))(this, masterID);
		}

		::System::Void _DestroyChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__DESTROYCHIMERA_OFFSET))(this);
		}

		::System::Void _DestroyRandomEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__DESTROYRANDOMEFFECT_OFFSET))(this);
		}

		::System::Void _DestroyMasterEntity(::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__DESTROYMASTERENTITY_OFFSET))(this, immediate);
		}

		::System::Void _TryUnloadGruop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW__TRYUNLOADGRUOP_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelMasterData* get__MasterData()
		{
			return ((::RPG::Client::ChimeraDuelMasterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_GET__MASTERDATA_OFFSET))(this);
		}

		::RPG::Client::RuntimeGroupManager* get__RuntimeGroupManager()
		{
			return ((::RPG::Client::RuntimeGroupManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW_GET__RUNTIMEGROUPMANAGER_OFFSET))(this);
		}

		::System::Void __PlayMasterMouthTalk_b__7_0(::System::UInt32 x, ::AkCallbackType y, ::AkCallbackInfo* z)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___PLAYMASTERMOUTHTALK_B__7_0_OFFSET))(this, x, y, z);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTVIEW___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
