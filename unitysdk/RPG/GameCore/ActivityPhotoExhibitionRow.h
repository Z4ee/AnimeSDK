#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F05010)
#define RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F05330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPhotoExhibitionRow_TypeDefinitionIndex = 11098;

	class ActivityPhotoExhibitionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PhotoID; // 0x10
		::Il2CppArray<::System::UInt32>* CommentList; // 0x18
		::RPG::Client::TextID Tab; // 0x20
		::System::UInt32 GroupID; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34
		::System::UInt32 QuestID; // 0x38
		::RPG::Client::TextID Daily; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityPhotoExhibitionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityPhotoExhibitionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPHOTOEXHIBITIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
