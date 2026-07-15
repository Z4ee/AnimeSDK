#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class EraFlipperRegionDataSnapshot; }

#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF7BD80)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF7BDC0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1BF7BDD0)

namespace Proto
{
	inline static constexpr unsigned int EraFlipperRegionDataSnapshot___c_TypeDefinitionIndex = 24911;

	class EraFlipperRegionDataSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::EraFlipperRegionDataSnapshot___c** StaticGet___9()
		{
			return (::Proto::EraFlipperRegionDataSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperRegionDataSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x3C390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::EraFlipperRegionDataSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::EraFlipperRegionDataSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
