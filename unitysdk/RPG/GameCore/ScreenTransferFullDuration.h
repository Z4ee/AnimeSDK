#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SCREENTRANSFERFULLDURATION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E00560)
#define RPG_GAMECORE_SCREENTRANSFERFULLDURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18E006C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScreenTransferFullDuration_TypeDefinitionIndex = 22805;

	class ScreenTransferFullDuration : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single PrevDuration; // 0x10
		::System::Single KeepDuration; // 0x14
		::System::Single PostDuration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERFULLDURATION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ScreenTransferFullDuration*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScreenTransferFullDuration*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCREENTRANSFERFULLDURATION_FROMBINARY_OFFSET))(array, val);
		}
	};
}
