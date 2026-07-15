#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define PROTO_MONOPOLYACTIONRESULT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEE20C0)
#define PROTO_MONOPOLYACTIONRESULT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE2100)
#define PROTO_MONOPOLYACTIONRESULT___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1BEE2110)

namespace Proto
{
	inline static constexpr unsigned int MonopolyActionResult___c_TypeDefinitionIndex = 29777;

	class MonopolyActionResult___c : public ::System::Object
	{
	public:
		static ::Proto::MonopolyActionResult___c** StaticGet___9()
		{
			return (::Proto::MonopolyActionResult___c**)Il2CppClass::FromTypeDefinitionIndex(MonopolyActionResult___c_TypeDefinitionIndex)->GetStaticField(0x3EE10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT___C__CTOR_OFFSET))(this);
		}

		::Proto::MonopolyActionResult* __cctor_b__53_0()
		{
			return ((::Proto::MonopolyActionResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MONOPOLYACTIONRESULT___C___CCTOR_B__53_0_OFFSET))(this);
		}
	};
}
