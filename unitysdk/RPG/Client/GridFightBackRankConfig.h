#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_573;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightRoleBackendRankConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_ALLMEMBERGENERALPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x97D1D10)
#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_DESCTEXTID_OFFSET UNITYSDK_OFFSET(0x97D1BE0)
#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x97D1C30)
#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_ENERGYBARMODIFIER_OFFSET UNITYSDK_OFFSET(0x97D1D90)
#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x97D1C10)
#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x97D1B90)
#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x97D1B50)
#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_INITIALENERGYBARMODIFIER_OFFSET UNITYSDK_OFFSET(0x97D1D30)
#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x97D1BB0)
#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_OWNERGENERALPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0x97D1CF0)
#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_RANK_OFFSET UNITYSDK_OFFSET(0x97D1B70)
#define RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x97D1B40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBackRankConfig_TypeDefinitionIndex = 52878;

	class GridFightBackRankConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightRoleBackendRankConfigRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::GridFightRoleBackendRankConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleBackendRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_RANK_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_DescTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_DESCTEXTID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_OwnerGeneralPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_OWNERGENERALPROPERTYLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_AllMemberGeneralPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_ALLMEMBERGENERALPROPERTYLIST_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_573* get_InitialEnergyBarModifier()
		{
			return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_INITIALENERGYBARMODIFIER_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_573* get_EnergyBarModifier()
		{
			return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBACKRANKCONFIG_GET_ENERGYBARMODIFIER_OFFSET))(this);
		}
	};
}
