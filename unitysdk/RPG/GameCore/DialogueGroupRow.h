#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DialogueGroupType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18860AD0)
#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18860D90)
#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x188618B0)
#define RPG_GAMECORE_DIALOGUEGROUPROW_RESET_OFFSET UNITYSDK_OFFSET(0x18861910)
#define RPG_GAMECORE_DIALOGUEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18861920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueGroupRow_TypeDefinitionIndex = 12407;

	class DialogueGroupRow : public ::System::Object
	{
	public:
		::System::String* InteractTitle; // 0x10
		::System::String* ActPath; // 0x18
		::RPG::GameCore::JsonEnum* IconType; // 0x20
		::Il2CppArray<::System::UInt32>* ConditionIDs; // 0x28
		::RPG::GameCore::DialogueGroupType GroupType; // 0x30
		::System::UInt32 Priority; // 0x34
		::System::UInt32 GroupID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DialogueGroupRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DialogueGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
