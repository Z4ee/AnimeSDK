#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_CREATEFROMAVATARID_OFFSET UNITYSDK_OFFSET(0x19FCA430)
#define RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19FCA3A0)
#define RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x19FCA540)
#define RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x19FCA520)
#define RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x19FCA560)
#define RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x19FCA550)
#define RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x19FCA530)
#define RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_SET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x19FCA570)
#define RPG_CLIENT_BATTLEULTRASKILLCUTINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCA420)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUltraSkillCutInData_TypeDefinitionIndex = 68692;

	class BattleUltraSkillCutInData : public ::System::Object
	{
	public:
		::System::String* _PrefabPath_k__BackingField; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x18
		::RPG::Client::TextID _SkillName_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEULTRASKILLCUTINDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleUltraSkillCutInData* Create(::System::String* a1, ::System::UInt32 a2, ::RPG::Client::TextID a3)
		{
			return ((::RPG::Client::BattleUltraSkillCutInData*(*)(::System::String*, ::System::UInt32, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::BattleUltraSkillCutInData* CreateFromAvatarID(::System::UInt32 a1, ::RPG::Client::TextID a2)
		{
			return ((::RPG::Client::BattleUltraSkillCutInData*(*)(::System::UInt32, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_CREATEFROMAVATARID_OFFSET))(a1, a2);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Void set_PrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_SET_PREFABPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_SET_AVATARID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_GET_SKILLNAME_OFFSET))(this);
		}

		::System::Void set_SkillName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEULTRASKILLCUTINDATA_SET_SKILLNAME_OFFSET))(this, a1);
		}
	};
}
