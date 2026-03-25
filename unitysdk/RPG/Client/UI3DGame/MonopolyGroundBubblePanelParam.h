#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyDisplayCellRow; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA65C8F0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_ISGROUND_OFFSET UNITYSDK_OFFSET(0xA65C910)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_ROOT_OFFSET UNITYSDK_OFFSET(0xA65C8B0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA65C8D0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_DESC_OFFSET UNITYSDK_OFFSET(0xA65C900)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_ISGROUND_OFFSET UNITYSDK_OFFSET(0xA65C920)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_ROOT_OFFSET UNITYSDK_OFFSET(0xA65C8C0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xA65C8E0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA65C860)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyGroundBubblePanelParam_TypeDefinitionIndex = 61845;

	class MonopolyGroundBubblePanelParam : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Root_k__BackingField; // 0x10
		::System::Boolean _IsGround_k__BackingField; // 0x18
		::RPG::Client::TextID _Title_k__BackingField; // 0x20
		::RPG::Client::TextID _Desc_k__BackingField; // 0x30

		::System::Void _ctor(::UnityEngine::Transform* tf, ::RPG::GameCore::MonopolyDisplayCellRow* row, ::System::Boolean isGround)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::MonopolyDisplayCellRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM__CTOR_OFFSET))(this, tf, row, isGround);
		}

		::UnityEngine::Transform* get_Root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_ROOT_OFFSET))(this);
		}

		::System::Void set_Root(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_ROOT_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_TITLE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_DESC_OFFSET))(this, value);
		}

		::System::Boolean get_IsGround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_GET_ISGROUND_OFFSET))(this);
		}

		::System::Void set_IsGround(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUNDBUBBLEPANELPARAM_SET_ISGROUND_OFFSET))(this, value);
		}
	};
}
