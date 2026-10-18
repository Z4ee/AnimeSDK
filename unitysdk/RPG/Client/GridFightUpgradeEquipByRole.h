#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_E591DF54310AABF5_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_GET_RICHTEXTMESSAGENAME_OFFSET UNITYSDK_OFFSET(0xD2C52D0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_GET_RICHTEXTVALUEMAP_OFFSET UNITYSDK_OFFSET(0xD2C5340)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_GET_ROLEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD2C51E0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD2C5280)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD2C51D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeEquipByRole_TypeDefinitionIndex = 65034;

	class GridFightUpgradeEquipByRole : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_E591DF54310AABF5_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoleUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_GET_ROLEUNIQUEID_OFFSET))(this);
		}

		::System::Void Update(::Class_1_E591DF54310AABF5_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPBYROLE_UPDATE_OFFSET))(this, a1);
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
