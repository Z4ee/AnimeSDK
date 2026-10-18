#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleTeamSelection.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D_8.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xDADDCE0)
#define RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_SETSELECTEDMARBLEAPPEARANCE_OFFSET UNITYSDK_OFFSET(0xDADFE10)
#define RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDAE0590)
#define RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE1630)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleTeamSelection_TypeDefinitionIndex = 74734;

	class PetMarbleTeamSelection : public ::RPG::Client::ActivityMarble::MarbleTeamSelection
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityMarble::MarbleTeamSelection* CreateEmpty()
		{
			return ((::RPG::Client::ActivityMarble::MarbleTeamSelection*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_CREATEEMPTY_OFFSET))();
		}

		::System::Void Update(::System::Collections::Generic::IList_1<::Struct_2_884CDB9D0FDFAF0D_8>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Struct_2_884CDB9D0FDFAF0D_8>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SetSelectedMarbleAppearance(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLETEAMSELECTION_SETSELECTEDMARBLEAPPEARANCE_OFFSET))(this, a1, a2);
		}
	};
}
