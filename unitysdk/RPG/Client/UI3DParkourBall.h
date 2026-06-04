#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace RPG::Client { class ParkourBall; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DPARKOURBALL_CREATE_OFFSET UNITYSDK_OFFSET(0xCB17AB0)
#define RPG_CLIENT_UI3DPARKOURBALL_GET__ISSPRCIALCAR_OFFSET UNITYSDK_OFFSET(0xCB18C00)
#define RPG_CLIENT_UI3DPARKOURBALL_INIT_OFFSET UNITYSDK_OFFSET(0xCB17B60)
#define RPG_CLIENT_UI3DPARKOURBALL_LOADMODEL_OFFSET UNITYSDK_OFFSET(0xCB17C70)
#define RPG_CLIENT_UI3DPARKOURBALL_RELEASEMODEL_OFFSET UNITYSDK_OFFSET(0xCB18170)
#define RPG_CLIENT_UI3DPARKOURBALL_REMOVE_OFFSET UNITYSDK_OFFSET(0xCB18C80)
#define RPG_CLIENT_UI3DPARKOURBALL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB17A70)
#define RPG_CLIENT_UI3DPARKOURBALL__DISPOSEENTITY_OFFSET UNITYSDK_OFFSET(0xCB17D60)
#define RPG_CLIENT_UI3DPARKOURBALL__FIRECAREFFECT_OFFSET UNITYSDK_OFFSET(0xCB18220)
#define RPG_CLIENT_UI3DPARKOURBALL__FIREEFFECT_OFFSET UNITYSDK_OFFSET(0xCB18710)
#define RPG_CLIENT_UI3DPARKOURBALL__GETENTITY_OFFSET UNITYSDK_OFFSET(0xCB17E70)
#define RPG_CLIENT_UI3DPARKOURBALL__ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0xCB17FC0)
#define RPG_CLIENT_UI3DPARKOURBALL__ONTICK_OFFSET UNITYSDK_OFFSET(0xCB18A70)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DParkourBall_TypeDefinitionIndex = 57853;

	class UI3DParkourBall : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* _S_MaterialBlock; // 0x10
		::UnityEngine::Transform* _Root; // 0x18
		::RPG::GameCore::CharacterModelComponent* _ModelCmpt; // 0x20
		::System::String* _EffectPath; // 0x28
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* _F_MaterialBlock; // 0x30
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* _R_MaterialBlock; // 0x38
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* _Reflectio_MaterialBlock; // 0x40
		::Struct_2_0B84ADD7815498A2 _Instance; // 0x48
		::RPG::Client::ParkourBall* _CurrentData; // 0x58
		::RPG::GameCore::GameEntity* _Entity; // 0x60
		::RPG::Client::MonoEffectPluginCharaMaterialBlock* _Diffuse_MaterialBlock; // 0x68
		::System::Int32 _TimerID; // 0x70
		::System::UInt32 _SprcialCarID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UI3DParkourBall* Create(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::UI3DParkourBall*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_CREATE_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_INIT_OFFSET))(this);
		}

		::System::Void LoadModel(::RPG::Client::ParkourBall* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourBall*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_LOADMODEL_OFFSET))(this, a1);
		}

		::System::Void ReleaseModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_RELEASEMODEL_OFFSET))(this);
		}

		::System::Void _DisposeEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__DISPOSEENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* _GetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__GETENTITY_OFFSET))(this);
		}

		::System::Void _OnModelLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__ONMODELLOADED_OFFSET))(this);
		}

		::System::Void _FireCarEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__FIRECAREFFECT_OFFSET))(this);
		}

		::System::Void _OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__ONTICK_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* _FireEffect()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL__FIREEFFECT_OFFSET))(this);
		}

		::System::Void Remove(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_REMOVE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get__IsSprcialCar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DPARKOURBALL_GET__ISSPRCIALCAR_OFFSET))(this);
		}
	};
}
