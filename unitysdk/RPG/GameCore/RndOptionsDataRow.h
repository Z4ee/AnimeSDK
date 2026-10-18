#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RndGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_RNDOPTIONSDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D99C300)
#define RPG_GAMECORE_RNDOPTIONSDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D99C5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RndOptionsDataRow_TypeDefinitionIndex = 14664;

	class RndOptionsDataRow : public ::System::Object
	{
	public:
		::RPG::GameCore::JsonEnum* MenuItemType; // 0x10
		::System::String* JsonPath; // 0x18
		::System::UInt32 Weight; // 0x20
		::RPG::GameCore::RndGroupType GroupID; // 0x24
		::System::UInt32 MenuItemID; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 DialogShowOrder; // 0x30
		::System::UInt32 UnlockQuestID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RNDOPTIONSDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RndOptionsDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RndOptionsDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RNDOPTIONSDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
