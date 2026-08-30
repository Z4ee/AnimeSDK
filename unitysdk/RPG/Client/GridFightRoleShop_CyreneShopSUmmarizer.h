#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1CA7A720)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1CA7AB10)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1CA7A770)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA7AB70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_CyreneShopSUmmarizer_TypeDefinitionIndex = 65286;

	class GridFightRoleShop_CyreneShopSUmmarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::System::Boolean IsCyrene; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A1C8C41006A504 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::Enum_3_75A1C8C41006A504 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::Enum_3_75A1C8C41006A504 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A1C8C41006A504))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_CYRENESHOPSUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}
	};
}
