#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AE5840)
#define RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE6430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemRaidEntranceRow_TypeDefinitionIndex = 13679;

	class MessageItemRaidEntranceRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::Il2CppArray<::System::UInt32>* InvalidMissionList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 RaidID; // 0x24
		::System::Boolean IsSkipUI; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageItemRaidEntranceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageItemRaidEntranceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMRAIDENTRANCEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
