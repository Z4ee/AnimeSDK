#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTWIKISUBDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E1C9B50)
#define RPG_GAMECORE_TAROTWIKISUBDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C9DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotWikiSubdataRow_TypeDefinitionIndex = 15073;

	class TarotWikiSubdataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChangeID; // 0x10
		::RPG::Client::TextID Title; // 0x18
		::System::UInt32 UnlockID; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID Details; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKISUBDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotWikiSubdataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotWikiSubdataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTWIKISUBDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
