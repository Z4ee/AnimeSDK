#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A150B0)
#define RPG_GAMECORE_PIXAIRTALENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A15350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirTalentRow_TypeDefinitionIndex = 11595;

	class PixAirTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PreTalentList; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 TalentID; // 0x20
		::System::UInt32 EffectID; // 0x24
		::System::UInt32 UnlockScore; // 0x28
		::RPG::Client::TextID Name; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRTALENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirTalentRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirTalentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRTALENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
