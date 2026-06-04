#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_275454CE65A12492;
class Class_1_C6B3B57B6E91674E;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCC12700)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS5_0__GETDOWNLOADALLSIZE_B__0_OFFSET UNITYSDK_OFFSET(0xCC186E0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___c__DisplayClass5_0_TypeDefinitionIndex = 57287;

	class VersionUpdateMgr___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_1_C6B3B57B6E91674E* queue; // 0x10
		::Class_1_275454CE65A12492* board; // 0x18
		::System::Action_1<::System::Int64>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetDownloadAllSize_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS5_0__GETDOWNLOADALLSIZE_B__0_OFFSET))(this);
		}
	};
}
