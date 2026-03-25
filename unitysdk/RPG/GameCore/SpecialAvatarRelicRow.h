#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_5;
namespace System { class String; }

#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1775B620)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1775B760)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1775B5B0)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_RESET_OFFSET UNITYSDK_OFFSET(0x1775B610)
#define RPG_GAMECORE_SPECIALAVATARRELICROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1775B8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRelicRow_TypeDefinitionIndex = 13861;

	class SpecialAvatarRelicRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_5*>* RelicIDList; // 0x10
		::System::String* Comment2; // 0x18
		::System::UInt32 RelicPropertyType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialAvatarRelicRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialAvatarRelicRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRelicRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
