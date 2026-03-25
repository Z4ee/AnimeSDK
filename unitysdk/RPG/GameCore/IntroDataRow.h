#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_INTRODATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172BEE10)
#define RPG_GAMECORE_INTRODATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172BF4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IntroDataRow_TypeDefinitionIndex = 12634;

	class IntroDataRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Title; // 0x10
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID Desc_Os; // 0x28
		::RPG::Client::TextID Desc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IntroDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IntroDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
