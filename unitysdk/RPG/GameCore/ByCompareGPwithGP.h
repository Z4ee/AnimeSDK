#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_7BC32C851020D621_OFFSET UNITYSDK_OFFSET(0x19CE63C0)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_8C149858FDFD2320_OFFSET UNITYSDK_OFFSET(0x19CE65D0)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_BFB9F6C35F78F334_OFFSET UNITYSDK_OFFSET(0x19CE6410)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_C383CC3A99D47AF7_OFFSET UNITYSDK_OFFSET(0x19CE6610)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE6400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGPwithGP_TypeDefinitionIndex = 19658;

	class ByCompareGPwithGP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* LeftName; // 0x20
		::RPG::GameCore::DynamicString* RightName; // 0x28
		::RPG::GameCore::CompareType EquationType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7BC32C851020D621(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGPwithGP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGPwithGP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_7BC32C851020D621_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFB9F6C35F78F334(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_BFB9F6C35F78F334_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C149858FDFD2320(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGPwithGP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGPwithGP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_8C149858FDFD2320_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C383CC3A99D47AF7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_C383CC3A99D47AF7_OFFSET))(a1, a2);
		}
	};
}
