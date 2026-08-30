#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_GET_RICHTEXTMESSAGENAME_OFFSET UNITYSDK_OFFSET(0xD375100)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_GET_RICHTEXTVALUEMAP_OFFSET UNITYSDK_OFFSET(0xD375170)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_GET_ROLEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD375010)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD3750B0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD375000)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeEquipByRole_TypeDefinitionIndex = 65094;

	class GridFightUpgradeEquipByRole : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoleUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_GET_ROLEUNIQUEID_OFFSET))(this);
		}

		::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_UPDATE_OFFSET))(this, a1);
		}

		::System::String* get_RichTextMessageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_GET_RICHTEXTMESSAGENAME_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* get_RichTextValueMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_GET_RICHTEXTVALUEMAP_OFFSET))(this);
		}
	};
}
