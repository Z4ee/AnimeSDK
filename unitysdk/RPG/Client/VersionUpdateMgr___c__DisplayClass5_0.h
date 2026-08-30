#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_630CB84C93B59414;
class Class_1_8CA784D26D9A6CF7;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE3FE3A0)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS5_0__GETDOWNLOADALLSIZE_B__0_OFFSET UNITYSDK_OFFSET(0xE4050F0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___c__DisplayClass5_0_TypeDefinitionIndex = 61375;

	class VersionUpdateMgr___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int64>* callback; // 0x10
		::Class_1_8CA784D26D9A6CF7* queue; // 0x18
		::Class_1_630CB84C93B59414* board; // 0x20

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
