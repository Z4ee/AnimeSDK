#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_E80A62C5F129A2BD_OFFSET UNITYSDK_OFFSET(0x1CEF2A20)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_F4F4F8BA71A999F1_OFFSET UNITYSDK_OFFSET(0x1CEF2C20)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_FAC6159B44E3BB0D_OFFSET UNITYSDK_OFFSET(0x1CEF2AA0)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_FEEA2AF1DE563BF9_OFFSET UNITYSDK_OFFSET(0x1CEF2C70)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF2A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropPuzzleCreated_TypeDefinitionIndex = 20335;

	class ByComparePropPuzzleCreated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E80A62C5F129A2BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropPuzzleCreated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropPuzzleCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_E80A62C5F129A2BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FAC6159B44E3BB0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_FAC6159B44E3BB0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F4F4F8BA71A999F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropPuzzleCreated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropPuzzleCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_F4F4F8BA71A999F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FEEA2AF1DE563BF9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_METHOD_4_FEEA2AF1DE563BF9_OFFSET))(a1, a2);
		}
	};
}
