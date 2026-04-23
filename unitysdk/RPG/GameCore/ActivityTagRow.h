#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18638580)
#define RPG_GAMECORE_ACTIVITYTAGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186386E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTagRow_TypeDefinitionIndex = 10718;

	class ActivityTagRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc; // 0x10
		::System::UInt32 TagID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTAGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityTagRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityTagRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTAGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
