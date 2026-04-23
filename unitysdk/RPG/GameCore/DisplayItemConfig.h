#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISPLAYITEMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18880AD0)
#define RPG_GAMECORE_DISPLAYITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18880BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisplayItemConfig_TypeDefinitionIndex = 10451;

	class DisplayItemConfig : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 ItemNum; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISPLAYITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DisplayItemConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisplayItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISPLAYITEMCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
