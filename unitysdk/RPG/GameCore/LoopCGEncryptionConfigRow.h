#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VideoEncryptionMethod.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D214B90)
#define RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D214D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopCGEncryptionConfigRow_TypeDefinitionIndex = 15249;

	class LoopCGEncryptionConfigRow : public ::System::Object
	{
	public:
		::System::Boolean Encryption; // 0x10
		::RPG::GameCore::VideoEncryptionMethod EncryptionMethod; // 0x14
		::System::UInt32 VideoID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopCGEncryptionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopCGEncryptionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
