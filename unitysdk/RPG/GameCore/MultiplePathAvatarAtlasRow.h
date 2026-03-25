#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MULTIPLEPATHAVATARATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1745A5A0)
#define RPG_GAMECORE_MULTIPLEPATHAVATARATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1745A740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultiplePathAvatarAtlasRow_TypeDefinitionIndex = 11570;

	class MultiplePathAvatarAtlasRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* VoiceIDList; // 0x10
		::Il2CppArray<::System::UInt32>* StoryIDList; // 0x18
		::System::UInt32 AvatarID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEPATHAVATARATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MultiplePathAvatarAtlasRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MultiplePathAvatarAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEPATHAVATARATLASROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
