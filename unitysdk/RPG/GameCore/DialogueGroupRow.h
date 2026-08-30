#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DialogueGroupType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D81C5B0)
#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D81C870)
#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D81D350)
#define RPG_GAMECORE_DIALOGUEGROUPROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D81D3B0)
#define RPG_GAMECORE_DIALOGUEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81D3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueGroupRow_TypeDefinitionIndex = 13023;

	class DialogueGroupRow : public ::System::Object
	{
	public:
		::RPG::GameCore::JsonEnum* IconType; // 0x10
		::Il2CppArray<::System::UInt32>* ConditionIDs; // 0x18
		::System::String* ActPath; // 0x20
		::System::String* InteractTitle; // 0x28
		::System::UInt32 Priority; // 0x30
		::System::UInt32 GroupID; // 0x34
		::RPG::GameCore::DialogueGroupType GroupType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DialogueGroupRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DialogueGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
