#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE77F98C85B2B14F;
namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightFormationTeam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABC5DB0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_0___SYNCTEAM_B__0_OFFSET UNITYSDK_OFFSET(0x1ABC5DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass70_0_TypeDefinitionIndex = 61750;

	class GridFightFormationTeam___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightFormationTeam* __4__this; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightFormationRole*>* appendingRoles; // 0x18
		::Class_1_BE77F98C85B2B14F* teamFactory; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Void __SyncTeam_b__0(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_0___SYNCTEAM_B__0_OFFSET))(this, a1);
		}
	};
}
