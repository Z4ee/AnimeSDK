#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEWHEELSELECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BCC7A40)
#define RPG_GAMECORE_LITTLEWHEELSELECTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC8290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleWheelSelectConfigRow_TypeDefinitionIndex = 12826;

	class LittleWheelSelectConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Right1; // 0x10
		::Il2CppArray<::System::UInt32>* Left2; // 0x18
		::Il2CppArray<::System::UInt32>* Left1; // 0x20
		::Il2CppArray<::System::UInt32>* Right2; // 0x28
		::Il2CppArray<::System::UInt32>* Left4; // 0x30
		::Il2CppArray<::System::UInt32>* Right3; // 0x38
		::Il2CppArray<::System::UInt32>* Left3; // 0x40
		::Il2CppArray<::System::UInt32>* Right4; // 0x48
		::RPG::GameCore::GameModeType GameMode; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELSELECTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleWheelSelectConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleWheelSelectConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELSELECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
