#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTBACKSKILLEXTRADESCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D961980)
#define RPG_GAMECORE_GRIDFIGHTBACKSKILLEXTRADESCCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D961CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBackSkillExtraDescConfigRow_TypeDefinitionIndex = 13435;

	class GridFightBackSkillExtraDescConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x10
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x18
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::RPG::Client::TextID ConditionDesc; // 0x30
		::RPG::Client::TextID ConditionSimpleDesc; // 0x40
		::System::UInt32 SkillID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBACKSKILLEXTRADESCCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBACKSKILLEXTRADESCCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
