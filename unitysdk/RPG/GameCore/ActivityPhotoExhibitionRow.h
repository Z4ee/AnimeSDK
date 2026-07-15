#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAFEA00)
#define RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAFED10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPhotoExhibitionRow_TypeDefinitionIndex = 11646;

	class ActivityPhotoExhibitionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CommentList; // 0x10
		::Il2CppArray<::System::UInt32>* PhotoID; // 0x18
		::System::UInt32 QuestID; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::UInt32 ActivityModuleID; // 0x28
		::RPG::Client::TextID Tab; // 0x30
		::RPG::Client::TextID Daily; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityPhotoExhibitionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityPhotoExhibitionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
