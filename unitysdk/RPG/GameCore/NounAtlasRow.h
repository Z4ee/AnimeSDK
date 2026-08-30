#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NOUNATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2F7C70)
#define RPG_GAMECORE_NOUNATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F8080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NounAtlasRow_TypeDefinitionIndex = 12604;

	class NounAtlasRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RelatedTerms; // 0x10
		::System::UInt32 Type; // 0x18
		::System::Int32 SortID; // 0x1C
		::System::UInt32 Unlock; // 0x20
		::RPG::Client::TextID NounTitle; // 0x28
		::System::UInt32 ID; // 0x38
		::System::Boolean IsIntroPage; // 0x3C
		::RPG::Client::TextID NounDesc; // 0x40
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
