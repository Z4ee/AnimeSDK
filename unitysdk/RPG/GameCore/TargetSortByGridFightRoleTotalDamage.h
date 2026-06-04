#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_2A49850B606B1548_OFFSET UNITYSDK_OFFSET(0x19D2DAC0)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_476018D4271CE0EF_OFFSET UNITYSDK_OFFSET(0x19D2BE50)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_663F7B166CC0FA91_OFFSET UNITYSDK_OFFSET(0x19D2D980)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_6F55E48B894764C6_OFFSET UNITYSDK_OFFSET(0x19D1E210)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1E1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByGridFightRoleTotalDamage_TypeDefinitionIndex = 22676;

	class TargetSortByGridFightRoleTotalDamage : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_663F7B166CC0FA91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_663F7B166CC0FA91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F55E48B894764C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_6F55E48B894764C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_476018D4271CE0EF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_476018D4271CE0EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A49850B606B1548(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_2A49850B606B1548_OFFSET))(a1, a2);
		}
	};
}
