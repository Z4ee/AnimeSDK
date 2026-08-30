#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARPATHITEMTRANSFERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C591B20)
#define RPG_GAMECORE_AVATARPATHITEMTRANSFERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C591DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPathItemTransferRow_TypeDefinitionIndex = 12711;

	class AvatarPathItemTransferRow : public ::System::Object
	{
	public:
		::System::UInt32 SourceItemID; // 0x10
		::System::UInt32 TargetItemID; // 0x14
		::System::UInt32 AvatarID; // 0x18
		::RPG::Client::TextID DialogDesc; // 0x20
		::RPG::Client::TextID DialogTitle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHITEMTRANSFERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarPathItemTransferRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPathItemTransferRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHITEMTRANSFERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
