#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKATTRIBUTE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C255AE0)
#define RPG_GAMECORE_CLOCKPARKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C255C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkAttribute_TypeDefinitionIndex = 10771;

	class ClockParkAttribute : public ::System::Object
	{
	public:
		::System::UInt32 AttributeB; // 0x10
		::System::UInt32 AttributeA; // 0x14
		::System::UInt32 AttributeC; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKATTRIBUTE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkAttribute*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkAttribute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKATTRIBUTE_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
