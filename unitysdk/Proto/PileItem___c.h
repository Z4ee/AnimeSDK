#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class PileItem; }

#define PROTO_PILEITEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEE7C40)
#define PROTO_PILEITEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE7C70)
#define PROTO_PILEITEM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1BEE7C80)

namespace Proto
{
	inline static constexpr unsigned int PileItem___c_TypeDefinitionIndex = 26610;

	class PileItem___c : public ::System::Object
	{
	public:
		static ::Proto::PileItem___c** StaticGet___9()
		{
			return (::Proto::PileItem___c**)Il2CppClass::FromTypeDefinitionIndex(PileItem___c_TypeDefinitionIndex)->GetStaticField(0x3F4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PILEITEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM___C__CTOR_OFFSET))(this);
		}

		::Proto::PileItem* __cctor_b__28_0()
		{
			return ((::Proto::PileItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PILEITEM___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
