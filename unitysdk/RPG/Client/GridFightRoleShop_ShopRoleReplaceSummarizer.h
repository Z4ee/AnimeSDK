#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_19E8636AE6D65360;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xA57C1E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0xA57C3E0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xA57C7A0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER___IFIXBASEPROXY_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0xA57C7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_ShopRoleReplaceSummarizer_TypeDefinitionIndex = 60054;

	class GridFightRoleShop_ShopRoleReplaceSummarizer : public ::Class_1_6D4DDF404C3CCC18
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 srcType, ::System::Collections::Generic::IList_1<::System::UInt32>* srcParamList)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, srcType, srcParamList);
		}

		::System::Void UpdateShop(::Class_1_19E8636AE6D65360* shopUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_19E8636AE6D65360*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_UPDATESHOP_OFFSET))(this, shopUpdate);
		}

		::System::Void __iFixBaseProxy_UpdateShop(::Class_1_19E8636AE6D65360* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_19E8636AE6D65360*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER___IFIXBASEPROXY_UPDATESHOP_OFFSET))(this, P0);
		}
	};
}
