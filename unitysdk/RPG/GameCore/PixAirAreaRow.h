#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A0FEC0)
#define RPG_GAMECORE_PIXAIRAREAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0FFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirAreaRow_TypeDefinitionIndex = 11559;

	class PixAirAreaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NodeIDList; // 0x10
		::System::UInt32 AreaID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRAREAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirAreaRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirAreaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRAREAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
