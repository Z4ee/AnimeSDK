#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTDATAROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1B2F8730)
#define RPG_GAMECORE_BATTLEEVENTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2F89E0)
#define RPG_GAMECORE_BATTLEEVENTDATAROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B2F86B0)
#define RPG_GAMECORE_BATTLEEVENTDATAROW_RESET_OFFSET UNITYSDK_OFFSET(0x1B2F8710)
#define RPG_GAMECORE_BATTLEEVENTDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F8CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventDataRow_TypeDefinitionIndex = 12762;

	class BattleEventDataRow : public ::System::Object
	{
	public:
		::System::String* BasePoint; // 0x10
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x18
		::System::String* BEActionBarPrefab; // 0x20
		::System::String* LevelAreaPrefab; // 0x28
		::System::String* Prefab; // 0x30
		::System::String* Config; // 0x38
		::System::Boolean IsSPReserved; // 0x40
		::System::UInt32 BattleEventID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTDATAROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTDATAROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTDATAROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventDataRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTDATAROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleEventDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
