#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameEnergyType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_13C6574F3BC28147_OFFSET UNITYSDK_OFFSET(0x19519370)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_3447470EE31EA9DA_OFFSET UNITYSDK_OFFSET(0x195193F0)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_8E8B6646498E3CD3_OFFSET UNITYSDK_OFFSET(0x195191C0)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_A5FCCD8A81512DCD_OFFSET UNITYSDK_OFFSET(0x195190F0)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY__CTOR_OFFSET UNITYSDK_OFFSET(0x19519170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHipplenEnergy_TypeDefinitionIndex = 20154;

	class ByCompareHipplenEnergy : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::HipplenGameEnergyType ExpectedType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A5FCCD8A81512DCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHipplenEnergy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHipplenEnergy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_A5FCCD8A81512DCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8E8B6646498E3CD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_8E8B6646498E3CD3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_13C6574F3BC28147(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHipplenEnergy*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHipplenEnergy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_13C6574F3BC28147_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3447470EE31EA9DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_3447470EE31EA9DA_OFFSET))(a1, a2);
		}
	};
}
