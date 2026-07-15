#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveMessageContentType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B6973F0)
#define RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B697650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveMessageContentRow_TypeDefinitionIndex = 11380;

	class IdleLiveMessageContentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextContentID; // 0x10
		::System::UInt32 SenderID; // 0x18
		::RPG::Client::TextID MainText; // 0x20
		::RPG::GameCore::IdleLiveMessageContentType ContentType; // 0x30
		::System::UInt32 ContentID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveMessageContentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveMessageContentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
