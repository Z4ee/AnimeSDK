#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

namespace RPG::Client { class GridFightBonusResultData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xD14E4E0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xD14E640)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xD14E5B0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0xD14E830)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xD14E890)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusServerData_OuterBonusSummerizer_TypeDefinitionIndex = 64494;

	class GridFightBonusServerData_OuterBonusSummerizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::RPG::Client::GridFightBonusResultData* _ResultData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void UpdateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_OUTERBONUSSUMMERIZER_UPDATECOIN_OFFSET))(this, a1);
		}
	};
}
