#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F1E9B98123CB5682;
class Class_2_181F61C600ECA68B;
namespace RPG::Client { class GridFightFormationTeam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A4940)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_0___SYNCTEAM_B__0_OFFSET UNITYSDK_OFFSET(0xA4A6480)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass70_0_TypeDefinitionIndex = 59524;

	class GridFightFormationTeam___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_181F61C600ECA68B*>* appendingRoles; // 0x10
		::RPG::Client::GridFightFormationTeam* __4__this; // 0x18
		::Class_1_F1E9B98123CB5682* teamFactory; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Void __SyncTeam_b__0(::Class_2_181F61C600ECA68B* role)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_181F61C600ECA68B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_0___SYNCTEAM_B__0_OFFSET))(this, role);
		}
	};
}
