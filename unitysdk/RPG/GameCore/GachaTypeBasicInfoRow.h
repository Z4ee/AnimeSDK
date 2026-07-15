#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GachaTokenShopConfig; }
namespace System { class String; }

#define RPG_GAMECORE_GACHATYPEBASICINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B989760)
#define RPG_GAMECORE_GACHATYPEBASICINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9899A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaTypeBasicInfoRow_TypeDefinitionIndex = 12861;

	class GachaTypeBasicInfoRow : public ::System::Object
	{
	public:
		::System::String* GachaBar; // 0x10
		::RPG::GameCore::GachaTokenShopConfig* BuyPos; // 0x18
		::RPG::GameCore::GachaType GachaTypeID; // 0x20
		::System::UInt32 ItemCosume; // 0x24
		::System::UInt32 ItemPrice; // 0x28
		::System::UInt32 UpPropability; // 0x2C
		::System::UInt32 DiamondID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATYPEBASICINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GachaTypeBasicInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachaTypeBasicInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATYPEBASICINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
