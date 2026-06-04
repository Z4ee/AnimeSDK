#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTHACKEQUIPEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0xBB959B0)
#define RPG_CLIENT_GRIDFIGHTHACKEQUIPEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xBB95AC0)
#define RPG_CLIENT_GRIDFIGHTHACKEQUIPEFFECT_GET_EQUIPCONFIG_OFFSET UNITYSDK_OFFSET(0xBB95A20)
#define RPG_CLIENT_GRIDFIGHTHACKEQUIPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBB959A0)
#define RPG_CLIENT_GRIDFIGHTHACKEQUIPEFFECT__GETEQUIPCONFIG_OFFSET UNITYSDK_OFFSET(0xBB95A70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHackEquipEffect_TypeDefinitionIndex = 61121;

	class GridFightHackEquipEffect : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemData* _EquipData; // 0x10

		::System::Void _ctor(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHACKEQUIPEFFECT__CTOR_OFFSET))(this, a1);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHACKEQUIPEFFECT_GETSHOWICON_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* get_EquipConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHACKEQUIPEFFECT_GET_EQUIPCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHACKEQUIPEFFECT_GETSHOWMEMBERUIDS_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemConfig* _GetEquipConfig()
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHACKEQUIPEFFECT__GETEQUIPCONFIG_OFFSET))(this);
		}
	};
}
