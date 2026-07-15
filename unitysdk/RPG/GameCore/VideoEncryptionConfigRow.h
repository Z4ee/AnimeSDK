#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VideoEncryptionMethod.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B89C700)
#define RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89C880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VideoEncryptionConfigRow_TypeDefinitionIndex = 14812;

	class VideoEncryptionConfigRow : public ::System::Object
	{
	public:
		::System::Boolean Encryption; // 0x10
		::System::UInt32 VideoID; // 0x14
		::RPG::GameCore::VideoEncryptionMethod EncryptionMethod; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VideoEncryptionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VideoEncryptionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
