#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4F30521532511E50;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLEYMAPGRADEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C55FB30)
#define RPG_GAMECORE_ALLEYMAPGRADEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C560150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapGradeRow_TypeDefinitionIndex = 12546;

	class AlleyMapGradeRow : public ::System::Object
	{
	public:
		::System::String* MapConfig; // 0x10
		::Il2CppArray<::Class_1_4F30521532511E50*>* GradeConditions; // 0x18
		::System::UInt32 GradeID; // 0x20
		::System::UInt32 MapID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyMapGradeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyMapGradeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
