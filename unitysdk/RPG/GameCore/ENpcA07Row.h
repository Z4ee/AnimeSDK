#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ENPCA07ROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB20A40)
#define RPG_GAMECORE_ENPCA07ROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB20C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ENpcA07Row_TypeDefinitionIndex = 13142;

	class ENpcA07Row : public ::System::Object
	{
	public:
		::System::String* AdvJsonOverride; // 0x10
		::System::String* BattleJsonOverride; // 0x18
		::System::String* ResMapConfigPath; // 0x20
		::Il2CppArray<::System::UInt32>* AddList; // 0x28
		::System::UInt32 ID2; // 0x30
		::System::UInt32 ID1; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENPCA07ROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ENpcA07Row*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ENpcA07Row*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENPCA07ROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
