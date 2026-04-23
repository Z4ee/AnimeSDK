#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBonusResultData; }

#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_PRESENTBONUSRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA51B100)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbServerData_PresentBonusResultData_TypeDefinitionIndex = 59295;

	class GridFightOrbServerData_PresentBonusResultData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusResultData* BonusData; // 0x10
		::System::UInt32 UID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_PRESENTBONUSRESULTDATA__CTOR_OFFSET))(this);
		}
	};
}
