#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTBUTTONTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186F5030)
#define RPG_GAMECORE_BATTLEEVENTBUTTONTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186F5210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventButtonTypeConfigRow_TypeDefinitionIndex = 12156;

	class BattleEventButtonTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* CutinPath; // 0x10
		::System::String* SkillButtonEffPath; // 0x18
		::System::String* ButtonReadyPath; // 0x20
		::System::String* ButtonPath; // 0x28
		::System::UInt32 ID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTBUTTONTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleEventButtonTypeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventButtonTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTBUTTONTYPECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
