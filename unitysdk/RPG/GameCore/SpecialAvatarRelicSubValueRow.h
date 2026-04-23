#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A4D134A7DAD941E3;

#define RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18E80960)
#define RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E80A60)
#define RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18E808F0)
#define RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_RESET_OFFSET UNITYSDK_OFFSET(0x18E80950)
#define RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E80B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRelicSubValueRow_TypeDefinitionIndex = 14342;

	class SpecialAvatarRelicSubValueRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A4D134A7DAD941E3*>* SubValue; // 0x10
		::System::UInt32 RelicSubValueType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialAvatarRelicSubValueRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRelicSubValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialAvatarRelicSubValueRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRelicSubValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
