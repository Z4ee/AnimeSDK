#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingHPChangeFormatType.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/CirticalTrackType.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GETHPCHANGEFORMATTYPE_OFFSET UNITYSDK_OFFSET(0xA6881E0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xA689A30)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xA689AC0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_DELTAHP_OFFSET UNITYSDK_OFFSET(0xA689A60)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_HPCHANGEFORMATTYPE_OFFSET UNITYSDK_OFFSET(0xA689AE0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_SHOWJUMPTEXT_OFFSET UNITYSDK_OFFSET(0xA689AA0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xA689A80)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_ANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xA689A50)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xA689AD0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_DELTAHP_OFFSET UNITYSDK_OFFSET(0xA689A70)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_HPCHANGEFORMATTYPE_OFFSET UNITYSDK_OFFSET(0xA689AF0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_SHOWJUMPTEXT_OFFSET UNITYSDK_OFFSET(0xA689AB0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0xA689A90)
#define RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA688240)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int HPChangeData_TypeDefinitionIndex = 71322;

	class HPChangeData : public ::System::Object
	{
	public:
		::System::Single _CurrentHP_k__BackingField; // 0x10
		::UnityEngine::Vector3 _AnchorPosition_k__BackingField; // 0x14
		::System::Boolean _ShowJumpText_k__BackingField; // 0x20
		::System::Int32 _DeltaHP_k__BackingField; // 0x24
		::System::Int32 _UID_k__BackingField; // 0x28
		::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType _HPChangeFormatType_k__BackingField; // 0x2C

		::System::Void _ctor(::UnityEngine::Transform* ancestorTransform, ::System::Int32 deltaHP, ::System::Boolean showJumpText, ::System::Int32 uniqueID, ::System::Single currentHP, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType hpChangeFormatType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Single, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA__CTOR_OFFSET))(this, ancestorTransform, deltaHP, showJumpText, uniqueID, currentHP, hpChangeFormatType);
		}

		static ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType GetHPChangeFormatType(::RPG::Client::LittleGame::ChenLing::CirticalTrackType cirticalTrackType, ::RPG::GameCore::ChenLingDamageType damageType)
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType(*)(::RPG::Client::LittleGame::ChenLing::CirticalTrackType, ::RPG::GameCore::ChenLingDamageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GETHPCHANGEFORMATTYPE_OFFSET))(cirticalTrackType, damageType);
		}

		::UnityEngine::Vector3 get_AnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_ANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_AnchorPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_ANCHORPOSITION_OFFSET))(this, value);
		}

		::System::Int32 get_DeltaHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_DELTAHP_OFFSET))(this);
		}

		::System::Void set_DeltaHP(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_DELTAHP_OFFSET))(this, value);
		}

		::System::Int32 get_UID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_UID_OFFSET))(this, value);
		}

		::System::Boolean get_ShowJumpText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_SHOWJUMPTEXT_OFFSET))(this);
		}

		::System::Void set_ShowJumpText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_SHOWJUMPTEXT_OFFSET))(this, value);
		}

		::System::Single get_CurrentHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Void set_CurrentHP(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_CURRENTHP_OFFSET))(this, value);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType get_HPChangeFormatType()
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_GET_HPCHANGEFORMATTYPE_OFFSET))(this);
		}

		::System::Void set_HPChangeFormatType(::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingHPChangeFormatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_HPCHANGEDATA_SET_HPCHANGEFORMATTYPE_OFFSET))(this, value);
		}
	};
}
