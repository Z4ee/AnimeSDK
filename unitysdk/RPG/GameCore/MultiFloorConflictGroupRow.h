#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MULTIFLOORCONFLICTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174594E0)
#define RPG_GAMECORE_MULTIFLOORCONFLICTGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17459640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultiFloorConflictGroupRow_TypeDefinitionIndex = 12847;

	class MultiFloorConflictGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x10
		::System::UInt32 PlaneID; // 0x18
		::System::UInt32 GroupID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIFLOORCONFLICTGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MultiFloorConflictGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MultiFloorConflictGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIFLOORCONFLICTGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
