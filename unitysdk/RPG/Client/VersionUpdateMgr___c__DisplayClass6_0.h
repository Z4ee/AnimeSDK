#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_275454CE65A12492;
class Class_1_C6B3B57B6E91674E;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCC12870)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS6_0__GETDOWNLOADALLSIZEWITHBLACKLIST_B__0_OFFSET UNITYSDK_OFFSET(0xCC18730)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___c__DisplayClass6_0_TypeDefinitionIndex = 57288;

	class VersionUpdateMgr___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int64, ::System::Int64>* callback; // 0x10
		::Class_1_C6B3B57B6E91674E* queue; // 0x18
		::Class_1_275454CE65A12492* board; // 0x20
		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* taskIds; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetDownloadAllSizeWithBlackList_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS6_0__GETDOWNLOADALLSIZEWITHBLACKLIST_B__0_OFFSET))(this);
		}
	};
}
