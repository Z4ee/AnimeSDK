#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GraphicSpineMultiTrackController; }
namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesAvatarEffectController; }
namespace RPG::Client { class PlanetFesAvatarMoveController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_PLANETFESSPINEUTILS_ADDEMOJIEFFECTCOMPONENT_OFFSET UNITYSDK_OFFSET(0xAD43290)
#define RPG_CLIENT_PLANETFESSPINEUTILS_ADDMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0xAD43100)
#define RPG_CLIENT_PLANETFESSPINEUTILS_ADDTALKCOMPONENT_OFFSET UNITYSDK_OFFSET(0xAD431D0)
#define RPG_CLIENT_PLANETFESSPINEUTILS_CREATEPLANETFESAVATARENTITY_OFFSET UNITYSDK_OFFSET(0xAD42D60)
#define RPG_CLIENT_PLANETFESSPINEUTILS_ENABLEIDLESHOW_OFFSET UNITYSDK_OFFSET(0xAD434D0)
#define RPG_CLIENT_PLANETFESSPINEUTILS_RECORDAVATARTALK_OFFSET UNITYSDK_OFFSET(0xAD43810)
#define RPG_CLIENT_PLANETFESSPINEUTILS_SETANIMSTATE_OFFSET UNITYSDK_OFFSET(0xAD43640)
#define RPG_CLIENT_PLANETFESSPINEUTILS_STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xAD43360)
#define RPG_CLIENT_PLANETFESSPINEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD43BB0)
#define RPG_CLIENT_PLANETFESSPINEUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xAD43BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSpineUtils_TypeDefinitionIndex = 61424;

	class PlanetFesSpineUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__LevelGraphPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSpineUtils_TypeDefinitionIndex)->GetStaticField(0x66C50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* CreatePlanetFesAvatarEntity(::RPG::Client::PlanetFesAvatarData* avatarData, ::UnityEngine::GameObject* gameObject, ::RPG::Client::GraphicSpineMultiTrackController* controller)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::Client::PlanetFesAvatarData*, ::UnityEngine::GameObject*, ::RPG::Client::GraphicSpineMultiTrackController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_CREATEPLANETFESAVATARENTITY_OFFSET))(avatarData, gameObject, controller);
		}

		static ::System::Void AddMoveComponent(::RPG::GameCore::GameEntity* entity, ::RPG::Client::PlanetFesAvatarMoveController* moveController)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::PlanetFesAvatarMoveController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_ADDMOVECOMPONENT_OFFSET))(entity, moveController);
		}

		static ::System::Void AddTalkComponent(::RPG::GameCore::GameEntity* entity, ::XLua::LuaTable* talkBubblePanel, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::TextID>* showCall, ::System::Action_1<::XLua::LuaTable*>* hideCall)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::XLua::LuaTable*, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::TextID>*, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_ADDTALKCOMPONENT_OFFSET))(entity, talkBubblePanel, showCall, hideCall);
		}

		static ::System::Void AddEmojiEffectComponent(::RPG::GameCore::GameEntity* entity, ::RPG::Client::PlanetFesAvatarEffectController* effectController, ::UnityEngine::Transform* effectTrans, ::UnityEngine::Canvas* baseCanvas)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::PlanetFesAvatarEffectController*, ::UnityEngine::Transform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_ADDEMOJIEFFECTCOMPONENT_OFFSET))(entity, effectController, effectTrans, baseCanvas);
		}

		static ::System::Void StartLevelGraph(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_STARTLEVELGRAPH_OFFSET))(entity);
		}

		static ::System::Void EnableIdleShow(::RPG::GameCore::GameEntity* planetFesAvatarEntity, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_ENABLEIDLESHOW_OFFSET))(planetFesAvatarEntity, enable);
		}

		static ::System::Void SetAnimState(::RPG::GameCore::GameEntity* planetFesAvatarEntity, ::System::String* stateName)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_SETANIMSTATE_OFFSET))(planetFesAvatarEntity, stateName);
		}

		static ::System::Void RecordAvatarTalk(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_RECORDAVATARTALK_OFFSET))(avatarID);
		}
	};
}
