#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_B51RACINGLIVERYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2E3650)
#define RPG_GAMECORE_B51RACINGLIVERYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E3860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingLiveryRow_TypeDefinitionIndex = 10936;

	class B51RacingLiveryRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* AssetPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 ID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGLIVERYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::B51RacingLiveryRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::B51RacingLiveryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGLIVERYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
