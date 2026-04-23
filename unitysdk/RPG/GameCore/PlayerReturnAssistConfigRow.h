#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERRETURNASSISTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C30D80)
#define RPG_GAMECORE_PLAYERRETURNASSISTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C30F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnAssistConfigRow_TypeDefinitionIndex = 13743;

	class PlayerReturnAssistConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AssistAvatarList; // 0x10
		::RPG::Client::TextID TeamDes; // 0x18
		::System::UInt32 AssistGroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNASSISTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerReturnAssistConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerReturnAssistConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNASSISTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
