#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GachaTokenShopConfig; }
namespace System { class String; }

#define RPG_GAMECORE_GACHATYPEBASICINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172298F0)
#define RPG_GAMECORE_GACHATYPEBASICINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17229B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaTypeBasicInfoRow_TypeDefinitionIndex = 12201;

	class GachaTypeBasicInfoRow : public ::System::Object
	{
	public:
		::System::String* GachaBar; // 0x10
		::RPG::GameCore::GachaTokenShopConfig* BuyPos; // 0x18
		::System::UInt32 DiamondID; // 0x20
		::System::UInt32 ItemCosume; // 0x24
		::System::UInt32 ItemPrice; // 0x28
		::RPG::GameCore::GachaType GachaTypeID; // 0x2C
		::System::UInt32 UpPropability; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATYPEBASICINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GachaTypeBasicInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachaTypeBasicInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATYPEBASICINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
