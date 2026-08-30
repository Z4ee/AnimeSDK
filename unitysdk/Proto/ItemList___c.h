#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }

#define PROTO_ITEMLIST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD41A70)
#define PROTO_ITEMLIST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD41AA0)
#define PROTO_ITEMLIST___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DD41AB0)

namespace Proto
{
	inline static constexpr unsigned int ItemList___c_TypeDefinitionIndex = 27280;

	class ItemList___c : public ::System::Object
	{
	public:
		static ::Proto::ItemList___c** StaticGet___9()
		{
			return (::Proto::ItemList___c**)Il2CppClass::FromTypeDefinitionIndex(ItemList___c_TypeDefinitionIndex)->GetStaticField(0x5BC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ITEMLIST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST___C__CTOR_OFFSET))(this);
		}

		::Proto::ItemList* __cctor_b__23_0()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ITEMLIST___C___CCTOR_B__23_0_OFFSET))(this);
		}
	};
}
