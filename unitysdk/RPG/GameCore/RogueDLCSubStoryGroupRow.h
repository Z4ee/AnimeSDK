#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92CC00)
#define RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D92CE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCSubStoryGroupRow_TypeDefinitionIndex = 14632;

	class RogueDLCSubStoryGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SubStoryList; // 0x10
		::System::UInt32 SubStoryGroupID; // 0x18
		::System::UInt32 UnlockID; // 0x1C
		::System::UInt32 ShowGroup; // 0x20
		::System::UInt32 UnlockSubStoryGroup; // 0x24
		::RPG::Client::TextID SubStoryGroupName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCSubStoryGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCSubStoryGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCSUBSTORYGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
