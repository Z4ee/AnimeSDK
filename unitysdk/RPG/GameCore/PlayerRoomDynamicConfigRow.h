#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYERROOMDYNAMICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D356380)
#define RPG_GAMECORE_PLAYERROOMDYNAMICCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D356620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRoomDynamicConfigRow_TypeDefinitionIndex = 14382;

	class PlayerRoomDynamicConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::Il2CppArray<::System::UInt32>* DisplayTaglist; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::System::UInt32>* Taglist; // 0x28
		::System::UInt32 ID; // 0x30
		::System::Boolean UseLowLight; // 0x34
		::System::UInt32 IsActivity; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMDYNAMICCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerRoomDynamicConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerRoomDynamicConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMDYNAMICCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
