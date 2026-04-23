#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186BDA90)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186BE0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoGuideGroupRow_TypeDefinitionIndex = 12078;

	class AvatarDemoGuideGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IndexList; // 0x10
		::System::UInt32 AvatarID; // 0x18
		::System::UInt32 StageID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarDemoGuideGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarDemoGuideGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
