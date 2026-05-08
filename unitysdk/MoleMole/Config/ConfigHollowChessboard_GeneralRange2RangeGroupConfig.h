#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_GeneralIntRange2IntRangeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GENERALRANGE2RANGEGROUPCONFIG_GETRANDOMVALUE_OFFSET UNITYSDK_OFFSET(0x1230C0D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GENERALRANGE2RANGEGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1230C240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_GeneralRange2RangeGroupConfig_TypeDefinitionIndex = 43460;

	class ConfigHollowChessboard_GeneralRange2RangeGroupConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_GeneralIntRange2IntRangeConfig*>* RangeConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GENERALRANGE2RANGEGROUPCONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 GetRandomValue(::System::Int32 inputValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_GENERALRANGE2RANGEGROUPCONFIG_GETRANDOMVALUE_OFFSET))(this, inputValue);
		}
	};
}
