#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameEnergyType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_0C486D3EA7EDDAB9_OFFSET UNITYSDK_OFFSET(0x19CEC150)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_0EA3727BAE08F6BA_OFFSET UNITYSDK_OFFSET(0x19CEBF30)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_8E8B6646498E3CD3_OFFSET UNITYSDK_OFFSET(0x19CEBF70)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_A592C90E46112AC6_OFFSET UNITYSDK_OFFSET(0x19CEC120)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEBF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHipplenEnergy_TypeDefinitionIndex = 20526;

	class ByCompareHipplenEnergy : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::HipplenGameEnergyType ExpectedType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0EA3727BAE08F6BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHipplenEnergy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHipplenEnergy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_0EA3727BAE08F6BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8E8B6646498E3CD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_8E8B6646498E3CD3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A592C90E46112AC6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHipplenEnergy*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHipplenEnergy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_A592C90E46112AC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0C486D3EA7EDDAB9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_METHOD_4_0C486D3EA7EDDAB9_OFFSET))(a1, a2);
		}
	};
}
