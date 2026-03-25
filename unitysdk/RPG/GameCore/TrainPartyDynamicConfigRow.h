#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYDYNAMICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178AB420)
#define RPG_GAMECORE_TRAINPARTYDYNAMICCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178AB690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyDynamicConfigRow_TypeDefinitionIndex = 14079;

	class TrainPartyDynamicConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Taglist; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 IsActivity; // 0x2C
		::System::Boolean UseLowLight; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDYNAMICCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyDynamicConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyDynamicConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYDYNAMICCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
