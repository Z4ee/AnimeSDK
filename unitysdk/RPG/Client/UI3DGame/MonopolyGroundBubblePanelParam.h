#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyDisplayCellRow; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1B135E30)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_ISGROUND_OFFSET UNITYSDK_OFFSET(0x1B135E50)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1B135DF0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1B135E10)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1B135E40)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_ISGROUND_OFFSET UNITYSDK_OFFSET(0x1B135E60)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x1B135E00)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1B135E20)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B135DB0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyGroundBubblePanelParam_TypeDefinitionIndex = 75397;

	class MonopolyGroundBubblePanelParam : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Root_k__BackingField; // 0x10
		::System::Boolean _IsGround_k__BackingField; // 0x18
		::RPG::Client::TextID _Desc_k__BackingField; // 0x20
		::RPG::Client::TextID _Title_k__BackingField; // 0x30

		::System::Void _ctor(::UnityEngine::Transform* a1, ::RPG::GameCore::MonopolyDisplayCellRow* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::MonopolyDisplayCellRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Transform* get_Root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_ROOT_OFFSET))(this);
		}

		::System::Void set_Root(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_ROOT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_DESC_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_ISGROUND_OFFSET))(this);
		}

		::System::Void set_IsGround(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_ISGROUND_OFFSET))(this, a1);
		}
	};
}
