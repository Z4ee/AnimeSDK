#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartySkillEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYSKILLEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178AFEB0)
#define RPG_GAMECORE_TRAINPARTYSKILLEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178B0040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartySkillEffectRow_TypeDefinitionIndex = 14094;

	class TrainPartySkillEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 EffectID; // 0x18
		::RPG::GameCore::TrainPartySkillEffectType EffectType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSKILLEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartySkillEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartySkillEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSKILLEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
