#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B43320)
#define RPG_GAMECORE_MONOPOLYBUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B43670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyBuffConfigRow_TypeDefinitionIndex = 11454;

	class MonopolyBuffConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 BuffID; // 0x18
		::System::UInt32 Rank; // 0x1C
		::RPG::Client::TextID BuffName; // 0x20
		::RPG::Client::TextID BuffDesc; // 0x30
		::System::UInt32 Duration; // 0x40
		::System::UInt32 EffectID; // 0x44
		::System::Boolean IsPermanent; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYBUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyBuffConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyBuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYBUFFCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
