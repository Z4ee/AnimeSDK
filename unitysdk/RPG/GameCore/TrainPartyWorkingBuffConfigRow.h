#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYWORKINGBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178B1380)
#define RPG_GAMECORE_TRAINPARTYWORKINGBUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178B15E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyWorkingBuffConfigRow_TypeDefinitionIndex = 14057;

	class TrainPartyWorkingBuffConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 WorkingBuffID; // 0x18
		::RPG::Client::TextID Description; // 0x20
		::RPG::Client::TextID Name; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYWORKINGBUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyWorkingBuffConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyWorkingBuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYWORKINGBUFFCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
