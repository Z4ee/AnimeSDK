#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFLOORCONFLICTRELATIVEMISSIONBAKEDDATA_METHOD_2_017942FFCECC9BC6_OFFSET UNITYSDK_OFFSET(0x17490650)
#define RPG_GAMECORE_PERFLOORCONFLICTRELATIVEMISSIONBAKEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17490790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerFloorConflictRelativeMissionBakedData_TypeDefinitionIndex = 15734;

	class PerFloorConflictRelativeMissionBakedData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x10
		::Il2CppArray<::System::UInt32>* SubMissionIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFLOORCONFLICTRELATIVEMISSIONBAKEDDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_017942FFCECC9BC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerFloorConflictRelativeMissionBakedData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerFloorConflictRelativeMissionBakedData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFLOORCONFLICTRELATIVEMISSIONBAKEDDATA_METHOD_2_017942FFCECC9BC6_OFFSET))(a1, a2);
		}
	};
}
