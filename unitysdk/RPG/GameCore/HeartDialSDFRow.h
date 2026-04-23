#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HEARTDIALSDFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189EDC70)
#define RPG_GAMECORE_HEARTDIALSDFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189EDED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialSDFRow_TypeDefinitionIndex = 13001;

	class HeartDialSDFRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 VoiceID; // 0x1C
		::System::Boolean IsKaomoji; // 0x20
		::RPG::Client::TextID SDFText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALSDFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeartDialSDFRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeartDialSDFRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALSDFROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
