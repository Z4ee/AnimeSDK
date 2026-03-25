#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitConfigBase.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightActivationType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"

namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ACTIVATIONTYPE_OFFSET UNITYSDK_OFFSET(0x98CE320)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BASEDESC_OFFSET UNITYSDK_OFFSET(0x98CE0C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BATTLEEVENTIDLIST_OFFSET UNITYSDK_OFFSET(0x98CE390)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_CUTINPATH_OFFSET UNITYSDK_OFFSET(0x98CE0A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x98CE060)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x98CE010)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x98CE080)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x98CE030)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x98CE3B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x98CE1E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x98CE300)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0x98CE370)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x98CDF70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitConfig_TypeDefinitionIndex = 53129;

	class GridFightTraitConfig : public ::RPG::Client::GridFightTraitConfigBase
	{
	public:
		::RPG::GameCore::GridFightTraitBaseConfigRow* _Row; // 0x18

		::System::Void _ctor(::RPG::GameCore::GridFightTraitBaseConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::String* get_CutInPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_CUTINPATH_OFFSET))(this);
		}

		::System::String* get_BaseDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BASEDESC_OFFSET))(this);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitEffectList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITEFFECTLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightActivationType get_ActivationType()
		{
			return ((::RPG::GameCore::GridFightActivationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_ACTIVATIONTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitType get_TraitType()
		{
			return ((::RPG::GameCore::GridFightTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_TRAITTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_BattleEventIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_BATTLEEVENTIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIG_GET_PRIORITY_OFFSET))(this);
		}
	};
}
