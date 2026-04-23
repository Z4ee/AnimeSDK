#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ANNIVERSARY2NDCONTENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186A7170)
#define RPG_GAMECORE_ANNIVERSARY2NDCONTENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186A7370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Anniversary2NDContentConfigRow_TypeDefinitionIndex = 11955;

	class Anniversary2NDContentConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RelatedActivityID; // 0x10
		::RPG::Client::TextID ContentTitle; // 0x18
		::System::UInt32 ContentID; // 0x28
		::System::UInt32 RelatedGotoID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARY2NDCONTENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::Anniversary2NDContentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Anniversary2NDContentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARY2NDCONTENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
