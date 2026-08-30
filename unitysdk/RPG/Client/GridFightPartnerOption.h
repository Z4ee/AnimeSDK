#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightTraitSubTraitConfig; }
namespace RPG::GameCore { class GridFightRoleChooseRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION_GET_CHOOSEDESC_OFFSET UNITYSDK_OFFSET(0x1BC5CE70)
#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION_GET_SHOWTRAITS_OFFSET UNITYSDK_OFFSET(0x1BC5CEE0)
#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION_GET_SUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1BC5CE50)
#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION_SET_SUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1BC5CE60)
#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5D100)
#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION__GETSHOWTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x1BC5CF30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPartnerOption_TypeDefinitionIndex = 65463;

	class GridFightPartnerOption : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitSubTraitConfig* _SubTraitConfig_k__BackingField; // 0x10
		::RPG::GameCore::GridFightRoleChooseRow* _ConfigRow; // 0x18
		::RPG::Client::GridFightRole* OptionRole; // 0x20

		::System::Void _ctor(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* get_SubTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION_GET_SUBTRAITCONFIG_OFFSET))(this);
		}

		::System::Void set_SubTraitConfig(::RPG::Client::GridFightTraitSubTraitConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitSubTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION_SET_SUBTRAITCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ChooseDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION_GET_CHOOSEDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* get_ShowTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION_GET_SHOWTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* _GetShowTraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION__GETSHOWTRAITCONFIGS_OFFSET))(this);
		}
	};
}
