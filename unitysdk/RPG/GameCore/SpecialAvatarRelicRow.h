#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_3;
namespace System { class String; }

#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x19C9BCB0)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C9BE00)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x19C9BF70)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_RESET_OFFSET UNITYSDK_OFFSET(0x19C9BFD0)
#define RPG_GAMECORE_SPECIALAVATARRELICROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9BF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRelicRow_TypeDefinitionIndex = 14381;

	class SpecialAvatarRelicRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_3*>* RelicIDList; // 0x10
		::System::String* Comment2; // 0x18
		::System::UInt32 RelicPropertyType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialAvatarRelicRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialAvatarRelicRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRelicRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_RESET_OFFSET))(this);
		}
	};
}
