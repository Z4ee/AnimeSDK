#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveMessageContentType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A12930)
#define RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A12BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveMessageContentRow_TypeDefinitionIndex = 11233;

	class IdleLiveMessageContentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextContentID; // 0x10
		::System::UInt32 SenderID; // 0x18
		::System::UInt32 ContentID; // 0x1C
		::RPG::GameCore::IdleLiveMessageContentType ContentType; // 0x20
		::RPG::Client::TextID MainText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveMessageContentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveMessageContentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
