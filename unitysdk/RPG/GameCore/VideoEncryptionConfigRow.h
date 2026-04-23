#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190F4570)
#define RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190F4690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VideoEncryptionConfigRow_TypeDefinitionIndex = 14631;

	class VideoEncryptionConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 VideoID; // 0x10
		::System::Boolean Encryption; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::VideoEncryptionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VideoEncryptionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
