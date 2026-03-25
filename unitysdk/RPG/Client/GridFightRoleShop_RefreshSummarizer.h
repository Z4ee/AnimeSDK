#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x989A9D0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x989AA20)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x989AB70)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x989AB80)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x989ABF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_RefreshSummarizer_TypeDefinitionIndex = 52966;

	class GridFightRoleShop_RefreshSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 srcType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, srcType);
		}

		::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 srcType, ::System::Collections::Generic::IList_1<::System::UInt32>* srcParamList)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER_UPDATEBEFORE_OFFSET))(this, srcType, srcParamList);
		}

		::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_REFRESHSUMMARIZER___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
		}
	};
}
