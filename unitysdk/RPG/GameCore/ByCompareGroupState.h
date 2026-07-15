#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_119C868CE777423D_OFFSET UNITYSDK_OFFSET(0x19CE92E0)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_6F4F5AE4750CE2E0_OFFSET UNITYSDK_OFFSET(0x19CE94F0)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_8B9CCD7A6DF2067C_OFFSET UNITYSDK_OFFSET(0x19CE9330)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_A3316C3FE52140B7_OFFSET UNITYSDK_OFFSET(0x19CE9530)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE9320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupState_TypeDefinitionIndex = 21324;

	class ByCompareGroupState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType EquationType; // 0x20
		::System::UInt32 Value; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_119C868CE777423D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_119C868CE777423D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B9CCD7A6DF2067C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_8B9CCD7A6DF2067C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F4F5AE4750CE2E0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_6F4F5AE4750CE2E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A3316C3FE52140B7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_A3316C3FE52140B7_OFFSET))(a1, a2);
		}
	};
}
