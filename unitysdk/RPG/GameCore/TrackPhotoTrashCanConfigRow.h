#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrackPhotoCanType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DEF190)
#define RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEF8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoTrashCanConfigRow_TypeDefinitionIndex = 11904;

	class TrackPhotoTrashCanConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ExtraAnimList; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 ExtraScore; // 0x20
		::System::UInt32 NpcTemplateID; // 0x24
		::RPG::GameCore::TrackPhotoCanType CanTypeID; // 0x28
		::System::UInt32 Score; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOTRASHCANCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
