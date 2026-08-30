#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_6F55E48B894764C6_OFFSET UNITYSDK_OFFSET(0x1D5B98B0)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_C9F6DEA5AF69B606_OFFSET UNITYSDK_OFFSET(0x1D5B9970)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_D357941325E86B72_OFFSET UNITYSDK_OFFSET(0x1D5B99C0)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_EB40AC83A9C4FAFA_OFFSET UNITYSDK_OFFSET(0x1D5B97A0)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B98A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByGridFightRoleTotalDamage_TypeDefinitionIndex = 23719;

	class TargetSortByGridFightRoleTotalDamage : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB40AC83A9C4FAFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_EB40AC83A9C4FAFA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F55E48B894764C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_6F55E48B894764C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C9F6DEA5AF69B606(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_C9F6DEA5AF69B606_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D357941325E86B72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_METHOD_3_D357941325E86B72_OFFSET))(a1, a2);
		}
	};
}
