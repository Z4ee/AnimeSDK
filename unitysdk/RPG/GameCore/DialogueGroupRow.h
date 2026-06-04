#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DialogueGroupType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1969FD30)
#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1969FFF0)
#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x196A0AE0)
#define RPG_GAMECORE_DIALOGUEGROUPROW_RESET_OFFSET UNITYSDK_OFFSET(0x196A0B40)
#define RPG_GAMECORE_DIALOGUEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196A0B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueGroupRow_TypeDefinitionIndex = 12495;

	class DialogueGroupRow : public ::System::Object
	{
	public:
		::System::String* ActPath; // 0x10
		::RPG::GameCore::JsonEnum* IconType; // 0x18
		::System::String* InteractTitle; // 0x20
		::Il2CppArray<::System::UInt32>* ConditionIDs; // 0x28
		::System::UInt32 Priority; // 0x30
		::RPG::GameCore::DialogueGroupType GroupType; // 0x34
		::System::UInt32 GroupID; // 0x38

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
