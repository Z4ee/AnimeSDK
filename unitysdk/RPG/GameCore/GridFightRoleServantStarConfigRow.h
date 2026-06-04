#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19806E20)
#define RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x198072E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleServantStarConfigRow_TypeDefinitionIndex = 12872;

	class GridFightRoleServantStarConfigRow : public ::System::Object
	{
	public:
		::System::String* SpeedBase; // 0x10
		::System::String* HPBase; // 0x18
		::Il2CppArray<::System::UInt32>* SkillOverrideDest; // 0x20
		::System::String* HPInherit; // 0x28
		::System::String* SpeedInherit; // 0x30
		::Il2CppArray<::System::UInt32>* ServantShowSkiilIDList; // 0x38
		::Il2CppArray<::System::UInt32>* SkillOverrideSrc; // 0x40
		::System::String* JsonOverrideConfig; // 0x48
		::System::UInt32 Star; // 0x50
		::System::UInt32 HPSkill; // 0x54
		::System::UInt32 ServantID; // 0x58
		::System::UInt32 ID; // 0x5C
		::System::UInt32 SpeedSkill; // 0x60
		::RPG::GameCore::FixPoint Aggro; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleServantStarConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleServantStarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
