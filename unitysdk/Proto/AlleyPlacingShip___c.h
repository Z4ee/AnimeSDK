#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class AlleyPlacingShip; }

#define PROTO_ALLEYPLACINGSHIP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E055950)
#define PROTO_ALLEYPLACINGSHIP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E055990)
#define PROTO_ALLEYPLACINGSHIP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0559A0)

namespace Proto
{
	inline static constexpr unsigned int AlleyPlacingShip___c_TypeDefinitionIndex = 25811;

	class AlleyPlacingShip___c : public ::System::Object
	{
	public:
		static ::Proto::AlleyPlacingShip___c** StaticGet___9()
		{
			return (::Proto::AlleyPlacingShip___c**)Il2CppClass::FromTypeDefinitionIndex(AlleyPlacingShip___c_TypeDefinitionIndex)->GetStaticField(0x592A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP___C__CTOR_OFFSET))(this);
		}

		::Proto::AlleyPlacingShip* __cctor_b__28_0()
		{
			return ((::Proto::AlleyPlacingShip*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
