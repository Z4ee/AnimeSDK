#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_280047DF9F661B14;
class Class_1_8C3AC9786B6764EF;
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB472E80)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS17_0__GETPREDOWNLOADALLSIZE_B__0_OFFSET UNITYSDK_OFFSET(0xB475C10)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___c__DisplayClass17_0_TypeDefinitionIndex = 56509;

	class VersionUpdateMgr___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_1_280047DF9F661B14* board; // 0x10
		::System::Action_2<::System::Int64, ::System::Int64>* callback; // 0x18
		::Class_1_8C3AC9786B6764EF* queue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetPredownloadAllSize_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS17_0__GETPREDOWNLOADALLSIZE_B__0_OFFSET))(this);
		}
	};
}
