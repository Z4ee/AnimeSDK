#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_19E93960D86042E5_OFFSET UNITYSDK_OFFSET(0x1A8D0BF0)
#define RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_33638E056F1C7D34_OFFSET UNITYSDK_OFFSET(0x1A8D09E0)
#define RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_CF278D7DDC4D4435_OFFSET UNITYSDK_OFFSET(0x1A8D0A20)
#define RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_E5D6B0C5212BF0A2_OFFSET UNITYSDK_OFFSET(0x1A8D0C20)
#define RPG_GAMECORE_BYIFGROUPISOCCUPIED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D0A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIfGroupIsOccupied_TypeDefinitionIndex = 20298;

	class ByIfGroupIsOccupied : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseOwnerGroup; // 0x20
		::System::UInt32 GroupID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_33638E056F1C7D34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIfGroupIsOccupied*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIfGroupIsOccupied*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_33638E056F1C7D34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF278D7DDC4D4435(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIfGroupIsOccupied* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIfGroupIsOccupied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_CF278D7DDC4D4435_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19E93960D86042E5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIfGroupIsOccupied*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIfGroupIsOccupied*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_19E93960D86042E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E5D6B0C5212BF0A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIfGroupIsOccupied* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIfGroupIsOccupied*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYIFGROUPISOCCUPIED_METHOD_4_E5D6B0C5212BF0A2_OFFSET))(a1, a2);
		}
	};
}
