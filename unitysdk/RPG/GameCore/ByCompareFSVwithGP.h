#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFSVWITHGP_METHOD_4_418347DE1A47B068_OFFSET UNITYSDK_OFFSET(0x195106B0)
#define RPG_GAMECORE_BYCOMPAREFSVWITHGP_METHOD_4_434BC6E1D0C79FEE_OFFSET UNITYSDK_OFFSET(0x195105D0)
#define RPG_GAMECORE_BYCOMPAREFSVWITHGP_METHOD_4_5D7CFA666F3C81CC_OFFSET UNITYSDK_OFFSET(0x195108F0)
#define RPG_GAMECORE_BYCOMPAREFSVWITHGP_METHOD_4_F53FB712899CF431_OFFSET UNITYSDK_OFFSET(0x19510870)
#define RPG_GAMECORE_BYCOMPAREFSVWITHGP__CTOR_OFFSET UNITYSDK_OFFSET(0x19510650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFSVwithGP_TypeDefinitionIndex = 19301;

	class ByCompareFSVwithGP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* LeftName; // 0x20
		::RPG::GameCore::DynamicString* RightName; // 0x28
		::RPG::GameCore::CompareType EquationType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFSVWITHGP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_434BC6E1D0C79FEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFSVwithGP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFSVwithGP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFSVWITHGP_METHOD_4_434BC6E1D0C79FEE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_418347DE1A47B068(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFSVwithGP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFSVwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFSVWITHGP_METHOD_4_418347DE1A47B068_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F53FB712899CF431(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFSVwithGP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFSVwithGP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFSVWITHGP_METHOD_4_F53FB712899CF431_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5D7CFA666F3C81CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFSVwithGP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFSVwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFSVWITHGP_METHOD_4_5D7CFA666F3C81CC_OFFSET))(a1, a2);
		}
	};
}
