#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_0F80AE7351D8B765_OFFSET UNITYSDK_OFFSET(0x195D4410)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_80B20A45C758CA2B_OFFSET UNITYSDK_OFFSET(0x195D46C0)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_A770B67B8371DEEB_OFFSET UNITYSDK_OFFSET(0x1957C030)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_B5582A02BEB3B63E_OFFSET UNITYSDK_OFFSET(0x195D45F0)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x195D4670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRandomChanceClientOnly_TypeDefinitionIndex = 21737;

	class ByRandomChanceClientOnly : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Chance; // 0x20
		::System::String* LogComment; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A770B67B8371DEEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRandomChanceClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRandomChanceClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_A770B67B8371DEEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F80AE7351D8B765(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_0F80AE7351D8B765_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B5582A02BEB3B63E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChanceClientOnly*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChanceClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_B5582A02BEB3B63E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_80B20A45C758CA2B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_80B20A45C758CA2B_OFFSET))(a1, a2);
		}
	};
}
