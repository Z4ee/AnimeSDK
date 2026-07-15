#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DECIDEAVATARORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C100C90)
#define RPG_GAMECORE_DECIDEAVATARORDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1012A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecideAvatarOrderRow_TypeDefinitionIndex = 12866;

	class DecideAvatarOrderRow : public ::System::Object
	{
	public:
		::System::Int32 Order; // 0x10
		::System::UInt32 ItemID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DecideAvatarOrderRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecideAvatarOrderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
