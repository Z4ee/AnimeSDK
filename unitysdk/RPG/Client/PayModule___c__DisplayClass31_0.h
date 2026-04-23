#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF3F1C413CAE286.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Product; }

#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC43920)
#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS31_0__TRYGETPRODUCTBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xAC45040)

namespace RPG::Client
{
	inline static constexpr unsigned int PayModule___c__DisplayClass31_0_TypeDefinitionIndex = 61192;

	class PayModule___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::Enum_3_7CF3F1C413CAE286 productType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetProductByType_b__0(::RPG::Client::Product* product)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Product*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS31_0__TRYGETPRODUCTBYTYPE_B__0_OFFSET))(this, product);
		}
	};
}
