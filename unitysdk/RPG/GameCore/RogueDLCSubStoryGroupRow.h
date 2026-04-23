#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D111E0)
#define RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D11450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCSubStoryGroupRow_TypeDefinitionIndex = 14000;

	class RogueDLCSubStoryGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SubStoryList; // 0x10
		::RPG::Client::TextID SubStoryGroupName; // 0x18
		::System::UInt32 SubStoryGroupID; // 0x28
		::System::UInt32 UnlockID; // 0x2C
		::System::UInt32 UnlockSubStoryGroup; // 0x30
		::System::UInt32 ShowGroup; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCSubStoryGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCSubStoryGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
