#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDEFLOORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BCBFF0)
#define RPG_GAMECORE_OVERRIDEFLOORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCC180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideFloorConfigRow_TypeDefinitionIndex = 12373;

	class OverrideFloorConfigRow : public ::System::Object
	{
	public:
		::System::String* EnableCondition; // 0x10
		::System::UInt32 FloorID; // 0x18
		::System::UInt32 DimensionID; // 0x1C
		::System::UInt32 ContentID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFLOORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::OverrideFloorConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideFloorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFLOORCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
