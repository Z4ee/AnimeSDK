#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LOCALBOOKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A76290)
#define RPG_GAMECORE_LOCALBOOKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A769F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LocalbookConfigRow_TypeDefinitionIndex = 12190;

	class LocalbookConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* LocalBookImagePath; // 0x10
		::RPG::Client::TextID BookInsideName; // 0x18
		::RPG::Client::TextID BookContent; // 0x28
		::System::UInt32 BookSeriesID; // 0x38
		::System::UInt32 BookSeriesInsideID; // 0x3C
		::System::UInt32 BookDisplayType; // 0x40
		::System::UInt32 BookID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LocalbookConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LocalbookConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
