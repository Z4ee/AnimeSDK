#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitConfigBase.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightActivationType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"

namespace RPG::GameCore { class GridFightSubTraitBasicInfoRow; }
namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ACTIVATIONTYPE_OFFSET UNITYSDK_OFFSET(0x98DAF90)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_BASEDESC_OFFSET UNITYSDK_OFFSET(0x98DAD30)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_BATTLEEVENTIDLIST_OFFSET UNITYSDK_OFFSET(0x98DB040)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_CUTINPATH_OFFSET UNITYSDK_OFFSET(0x98DACD0)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x98DAC10)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x98DABC0)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x98DAC70)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x98DABE0)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x98DB060)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x98DAE50)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_TRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x98DAF70)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0x98DAFE0)
#define RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x98D1680)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitSubTraitConfig_TypeDefinitionIndex = 53128;

	class GridFightTraitSubTraitConfig : public ::RPG::Client::GridFightTraitConfigBase
	{
	public:
		::RPG::GameCore::GridFightTraitBaseConfigRow* _FatherTraitRow; // 0x18
		::RPG::GameCore::GridFightSubTraitBasicInfoRow* _Row; // 0x20

		::System::Void _ctor(::RPG::GameCore::GridFightSubTraitBasicInfoRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::String* get_CutInPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_CUTINPATH_OFFSET))(this);
		}

		::System::String* get_BaseDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_BASEDESC_OFFSET))(this);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_SIMPLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitEffectList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_TRAITEFFECTLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightActivationType get_ActivationType()
		{
			return ((::RPG::GameCore::GridFightActivationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_ACTIVATIONTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitType get_TraitType()
		{
			return ((::RPG::GameCore::GridFightTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_TRAITTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_BattleEventIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_BATTLEEVENTIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSUBTRAITCONFIG_GET_PRIORITY_OFFSET))(this);
		}
	};
}
