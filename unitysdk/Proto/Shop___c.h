#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class Shop; }

#define PROTO_SHOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D97B820)
#define PROTO_SHOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D97B850)
#define PROTO_SHOP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1D97B860)

namespace Proto
{
	inline static constexpr unsigned int Shop___c_TypeDefinitionIndex = 33518;

	class Shop___c : public ::System::Object
	{
	public:
		static ::Proto::Shop___c** StaticGet___9()
		{
			return (::Proto::Shop___c**)Il2CppClass::FromTypeDefinitionIndex(Shop___c_TypeDefinitionIndex)->GetStaticField(0x5BA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SHOP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP___C__CTOR_OFFSET))(this);
		}

		::Proto::Shop* __cctor_b__53_0()
		{
			return ((::Proto::Shop*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SHOP___C___CCTOR_B__53_0_OFFSET))(this);
		}
	};
}
