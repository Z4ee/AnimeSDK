#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF3F1C413CAE286.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Product; }

#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDA49EB0)
#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS32_0__GETPRODUCTSBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xDA49EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PayModule___c__DisplayClass32_0_TypeDefinitionIndex = 66467;

	class PayModule___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::Enum_3_7CF3F1C413CAE286 productType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetProductsByType_b__0(::RPG::Client::Product* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Product*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS32_0__GETPRODUCTSBYTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
