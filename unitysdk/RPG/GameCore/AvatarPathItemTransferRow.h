#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARPATHITEMTRANSFERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186C5EA0)
#define RPG_GAMECORE_AVATARPATHITEMTRANSFERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186C6110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPathItemTransferRow_TypeDefinitionIndex = 12098;

	class AvatarPathItemTransferRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DialogTitle; // 0x10
		::System::UInt32 SourceItemID; // 0x20
		::RPG::Client::TextID DialogDesc; // 0x28
		::System::UInt32 TargetItemID; // 0x38
		::System::UInt32 AvatarID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHITEMTRANSFERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarPathItemTransferRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPathItemTransferRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPATHITEMTRANSFERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
