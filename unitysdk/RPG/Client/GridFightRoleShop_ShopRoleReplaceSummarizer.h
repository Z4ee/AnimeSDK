#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_19E8636AE6D65360_1;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xBBEABA0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0xBBEADC0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xBBEB590)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER___IFIXBASEPROXY_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0xBBEB5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_ShopRoleReplaceSummarizer_TypeDefinitionIndex = 60989;

	class GridFightRoleShop_ShopRoleReplaceSummarizer : public ::Class_1_6D4DDF404C3CCC18
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateShop(::Class_1_19E8636AE6D65360_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_19E8636AE6D65360_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER_UPDATESHOP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_UpdateShop(::Class_1_19E8636AE6D65360_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_19E8636AE6D65360_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_SHOPROLEREPLACESUMMARIZER___IFIXBASEPROXY_UPDATESHOP_OFFSET))(this, a1);
		}
	};
}
