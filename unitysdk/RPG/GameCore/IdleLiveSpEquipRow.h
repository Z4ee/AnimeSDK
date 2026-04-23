#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_2B7C9DBFAA4300DE;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESPEQUIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A14CA0)
#define RPG_GAMECORE_IDLELIVESPEQUIPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A14ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpEquipRow_TypeDefinitionIndex = 11203;

	class IdleLiveSpEquipRow : public ::System::Object
	{
	public:
		::Class_1_2B7C9DBFAA4300DE* DefenceParam; // 0x10
		::Class_1_2B7C9DBFAA4300DE* HpParam; // 0x18
		::Class_1_2B7C9DBFAA4300DE* AttackParam; // 0x20
		::System::String* IconPath; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 ID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveSpEquipRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSpEquipRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPEQUIPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
