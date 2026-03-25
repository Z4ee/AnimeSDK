#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ExpeditionGroupRow; }

#define RPG_CLIENT_EXPEDITIONGROUPDATA_GETINPROGRESSHARVESTCOUNT_OFFSET UNITYSDK_OFFSET(0x964D7A0)
#define RPG_CLIENT_EXPEDITIONGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x964D760)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionGroupData_TypeDefinitionIndex = 51880;

	class ExpeditionGroupData : public ::System::Object
	{
	public:
		::RPG::GameCore::ExpeditionGroupRow* Config; // 0x10
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONGROUPDATA__CTOR_OFFSET))(this, groupId);
		}

		::System::Int32 GetInProgressHarvestCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONGROUPDATA_GETINPROGRESSHARVESTCOUNT_OFFSET))(this);
		}
	};
}
