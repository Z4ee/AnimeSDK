#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_2005E7468CCD1E77_OFFSET UNITYSDK_OFFSET(0x19529B90)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_650A37DEDD589C20_OFFSET UNITYSDK_OFFSET(0x19529AB0)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_E17451B8364A12A6_OFFSET UNITYSDK_OFFSET(0x19529790)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_FAC6159B44E3BB0D_OFFSET UNITYSDK_OFFSET(0x19529930)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED__CTOR_OFFSET UNITYSDK_OFFSET(0x19529870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropPuzzleCreated_TypeDefinitionIndex = 19431;

	class ByComparePropPuzzleCreated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E17451B8364A12A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropPuzzleCreated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropPuzzleCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_E17451B8364A12A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FAC6159B44E3BB0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_FAC6159B44E3BB0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_650A37DEDD589C20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropPuzzleCreated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropPuzzleCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_650A37DEDD589C20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2005E7468CCD1E77(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_2005E7468CCD1E77_OFFSET))(a1, a2);
		}
	};
}
