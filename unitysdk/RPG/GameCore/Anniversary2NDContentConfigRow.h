#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ANNIVERSARY2NDCONTENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A058CD0)
#define RPG_GAMECORE_ANNIVERSARY2NDCONTENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A058ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Anniversary2NDContentConfigRow_TypeDefinitionIndex = 12180;

	class Anniversary2NDContentConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ContentTitle; // 0x10
		::System::UInt32 ContentID; // 0x20
		::System::UInt32 RelatedGotoID; // 0x24
		::System::UInt32 RelatedActivityID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARY2NDCONTENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Anniversary2NDContentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Anniversary2NDContentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARY2NDCONTENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
