#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NOUNATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8DB680)
#define RPG_GAMECORE_NOUNATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DBA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NounAtlasRow_TypeDefinitionIndex = 12694;

	class NounAtlasRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RelatedTerms; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 Type; // 0x1C
		::System::Int32 SortID; // 0x20
		::System::Boolean IsIntroPage; // 0x24
		::System::UInt32 Unlock; // 0x28
		::RPG::Client::TextID NounDesc; // 0x30
		::RPG::Client::TextID NounTitle; // 0x40
		::RPG::Client::TextID UnlockDesc; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOUNATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NounAtlasRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NounAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOUNATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
