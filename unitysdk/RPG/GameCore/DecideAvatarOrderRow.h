#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DECIDEAVATARORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18857EB0)
#define RPG_GAMECORE_DECIDEAVATARORDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188584A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecideAvatarOrderRow_TypeDefinitionIndex = 12639;

	class DecideAvatarOrderRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::Int32 Order; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DecideAvatarOrderRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecideAvatarOrderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
