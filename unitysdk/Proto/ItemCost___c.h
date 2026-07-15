#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemCost; }

#define PROTO_ITEMCOST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEDA4D0)
#define PROTO_ITEMCOST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEDA500)
#define PROTO_ITEMCOST___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1BEDA510)

namespace Proto
{
	inline static constexpr unsigned int ItemCost___c_TypeDefinitionIndex = 26613;

	class ItemCost___c : public ::System::Object
	{
	public:
		static ::Proto::ItemCost___c** StaticGet___9()
		{
			return (::Proto::ItemCost___c**)Il2CppClass::FromTypeDefinitionIndex(ItemCost___c_TypeDefinitionIndex)->GetStaticField(0x3E6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ITEMCOST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST___C__CTOR_OFFSET))(this);
		}

		::Proto::ItemCost* __cctor_b__36_0()
		{
			return ((::Proto::ItemCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMCOST___C___CCTOR_B__36_0_OFFSET))(this);
		}
	};
}
