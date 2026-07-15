#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class Goods; }

#define PROTO_GOODS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF88340)
#define PROTO_GOODS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF88370)
#define PROTO_GOODS___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1BF88380)

namespace Proto
{
	inline static constexpr unsigned int Goods___c_TypeDefinitionIndex = 32767;

	class Goods___c : public ::System::Object
	{
	public:
		static ::Proto::Goods___c** StaticGet___9()
		{
			return (::Proto::Goods___c**)Il2CppClass::FromTypeDefinitionIndex(Goods___c_TypeDefinitionIndex)->GetStaticField(0x3CE00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GOODS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS___C__CTOR_OFFSET))(this);
		}

		::Proto::Goods* __cctor_b__43_0()
		{
			return ((::Proto::Goods*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GOODS___C___CCTOR_B__43_0_OFFSET))(this);
		}
	};
}
