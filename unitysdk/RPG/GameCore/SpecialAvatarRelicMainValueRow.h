#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A4D134A7DAD941E3;

#define RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D547FC0)
#define RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5480C0)
#define RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D5481F0)
#define RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D548250)
#define RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5481E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRelicMainValueRow_TypeDefinitionIndex = 14951;

	class SpecialAvatarRelicMainValueRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A4D134A7DAD941E3*>* MainValue; // 0x10
		::System::UInt32 RelicMainValueType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialAvatarRelicMainValueRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRelicMainValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialAvatarRelicMainValueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRelicMainValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_RESET_OFFSET))(this);
		}
	};
}
