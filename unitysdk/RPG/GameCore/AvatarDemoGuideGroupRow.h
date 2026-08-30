#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE3A7C0)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3AE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoGuideGroupRow_TypeDefinitionIndex = 12691;

	class AvatarDemoGuideGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* IndexList; // 0x10
		::System::UInt32 StageID; // 0x18
		::System::UInt32 AvatarID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarDemoGuideGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarDemoGuideGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
