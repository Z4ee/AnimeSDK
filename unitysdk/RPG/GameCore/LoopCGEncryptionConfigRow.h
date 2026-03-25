#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1736FB20)
#define RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1736FC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopCGEncryptionConfigRow_TypeDefinitionIndex = 14164;

	class LoopCGEncryptionConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 VideoID; // 0x10
		::System::Boolean Encryption; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LoopCGEncryptionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopCGEncryptionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
