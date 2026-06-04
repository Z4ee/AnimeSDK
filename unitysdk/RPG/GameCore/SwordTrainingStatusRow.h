#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSTATUSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CE7770)
#define RPG_GAMECORE_SWORDTRAININGSTATUSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE7F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStatusRow_TypeDefinitionIndex = 11853;

	class SwordTrainingStatusRow : public ::System::Object
	{
	public:
		::System::String* StatusOutLineIcon; // 0x10
		::System::String* StatusIcon; // 0x18
		::System::UInt32 StatusID; // 0x20
		::System::UInt32 InitialValue; // 0x24
		::System::UInt32 MaximumValue; // 0x28
		::RPG::Client::TextID StatusName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingStatusRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingStatusRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTATUSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
