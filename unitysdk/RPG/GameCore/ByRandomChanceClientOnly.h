#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_0F80AE7351D8B765_OFFSET UNITYSDK_OFFSET(0x1CDBED00)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_2B9B98B41C57B79B_OFFSET UNITYSDK_OFFSET(0x1CDBEEE0)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_B6E57465226DA574_OFFSET UNITYSDK_OFFSET(0x1CDBEF10)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_B7FA747414754F00_OFFSET UNITYSDK_OFFSET(0x1CDBECC0)
#define RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBECF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRandomChanceClientOnly_TypeDefinitionIndex = 22732;

	class ByRandomChanceClientOnly : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Chance; // 0x20
		::System::String* LogComment; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B7FA747414754F00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRandomChanceClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRandomChanceClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_B7FA747414754F00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F80AE7351D8B765(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_0F80AE7351D8B765_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2B9B98B41C57B79B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChanceClientOnly*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChanceClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_2B9B98B41C57B79B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B6E57465226DA574(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCECLIENTONLY_METHOD_4_B6E57465226DA574_OFFSET))(a1, a2);
		}
	};
}
