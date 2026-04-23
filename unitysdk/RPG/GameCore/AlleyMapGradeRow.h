#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4F30521532511E50;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLEYMAPGRADEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186986D0)
#define RPG_GAMECORE_ALLEYMAPGRADEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18698D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapGradeRow_TypeDefinitionIndex = 11932;

	class AlleyMapGradeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_4F30521532511E50*>* GradeConditions; // 0x10
		::System::String* MapConfig; // 0x18
		::System::UInt32 MapID; // 0x20
		::System::UInt32 GradeID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AlleyMapGradeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyMapGradeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
