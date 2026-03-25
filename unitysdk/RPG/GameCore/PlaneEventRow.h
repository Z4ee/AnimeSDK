#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_PLANEEVENTROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x174B36D0)
#define RPG_GAMECORE_PLANEEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174B3A10)
#define RPG_GAMECORE_PLANEEVENTROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x174B4560)
#define RPG_GAMECORE_PLANEEVENTROW_RESET_OFFSET UNITYSDK_OFFSET(0x174B45C0)
#define RPG_GAMECORE_PLANEEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174B45E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaneEventRow_TypeDefinitionIndex = 12859;

	class PlaneEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DropList; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x18
		::System::UInt32 EventID; // 0x20
		::System::UInt32 Reward; // 0x24
		::System::UInt32 AvatarExpReward; // 0x28
		::System::Boolean IsUseMonsterDrop; // 0x2C
		::System::UInt32 WorldLevel; // 0x30
		::System::UInt32 StageID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlaneEventRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlaneEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlaneEventRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlaneEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANEEVENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
