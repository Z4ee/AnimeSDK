#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class PileItem; }

#define PROTO_PILEITEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00C360)
#define PROTO_PILEITEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E00C390)
#define PROTO_PILEITEM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E00C3A0)

namespace Proto
{
	inline static constexpr unsigned int PileItem___c_TypeDefinitionIndex = 27787;

	class PileItem___c : public ::System::Object
	{
	public:
		static ::Proto::PileItem___c** StaticGet___9()
		{
			return (::Proto::PileItem___c**)Il2CppClass::FromTypeDefinitionIndex(PileItem___c_TypeDefinitionIndex)->GetStaticField(0x44E10);
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
