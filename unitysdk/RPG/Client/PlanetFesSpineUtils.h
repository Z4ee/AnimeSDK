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

#define RPG_CLIENT_PLANETFESSPINEUTILS_ADDEMOJIEFFECTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C2C84F0)
#define RPG_CLIENT_PLANETFESSPINEUTILS_ADDMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C2C8360)
#define RPG_CLIENT_PLANETFESSPINEUTILS_ADDTALKCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C2C8430)
#define RPG_CLIENT_PLANETFESSPINEUTILS_CREATEPLANETFESAVATARENTITY_OFFSET UNITYSDK_OFFSET(0x1C2C7FB0)
#define RPG_CLIENT_PLANETFESSPINEUTILS_ENABLEIDLESHOW_OFFSET UNITYSDK_OFFSET(0x1C2C8730)
#define RPG_CLIENT_PLANETFESSPINEUTILS_RECORDAVATARTALK_OFFSET UNITYSDK_OFFSET(0x1C2C8A70)
#define RPG_CLIENT_PLANETFESSPINEUTILS_SETANIMSTATE_OFFSET UNITYSDK_OFFSET(0x1C2C88A0)
#define RPG_CLIENT_PLANETFESSPINEUTILS_STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x1C2C85C0)
#define RPG_CLIENT_PLANETFESSPINEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2C8E00)
#define RPG_CLIENT_PLANETFESSPINEUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C8DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSpineUtils_TypeDefinitionIndex = 66699;

	class PlanetFesSpineUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__LevelGraphPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesSpineUtils_TypeDefinitionIndex)->GetStaticField(0x5B640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS__CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* CreatePlanetFesAvatarEntity(::RPG::Client::PlanetFesAvatarData* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::GraphicSpineMultiTrackController* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::Client::PlanetFesAvatarData*, ::UnityEngine::GameObject*, ::RPG::Client::GraphicSpineMultiTrackController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_CREATEPLANETFESAVATARENTITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddMoveComponent(::RPG::GameCore::GameEntity* a1, ::RPG::Client::PlanetFesAvatarMoveController* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::PlanetFesAvatarMoveController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_ADDMOVECOMPONENT_OFFSET))(a1, a2);
		}

		static ::System::Void AddTalkComponent(::RPG::GameCore::GameEntity* a1, ::XLua::LuaTable* a2, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::TextID>* a3, ::System::Action_1<::XLua::LuaTable*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::XLua::LuaTable*, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::TextID>*, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_ADDTALKCOMPONENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AddEmojiEffectComponent(::RPG::GameCore::GameEntity* a1, ::RPG::Client::PlanetFesAvatarEffectController* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Canvas* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::PlanetFesAvatarEffectController*, ::UnityEngine::Transform*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_ADDEMOJIEFFECTCOMPONENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void StartLevelGraph(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_STARTLEVELGRAPH_OFFSET))(a1);
		}

		static ::System::Void EnableIdleShow(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_ENABLEIDLESHOW_OFFSET))(a1, a2);
		}

		static ::System::Void SetAnimState(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_SETANIMSTATE_OFFSET))(a1, a2);
		}

		static ::System::Void RecordAvatarTalk(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSPINEUTILS_RECORDAVATARTALK_OFFSET))(a1);
		}
	};
}
