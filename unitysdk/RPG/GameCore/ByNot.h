#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYNOT_METHOD_4_33438B6CF26C3CB8_OFFSET UNITYSDK_OFFSET(0x19576DA0)
#define RPG_GAMECORE_BYNOT_METHOD_4_3F2B3D4AB23533D1_OFFSET UNITYSDK_OFFSET(0x19577070)
#define RPG_GAMECORE_BYNOT_METHOD_4_EC5222F00B443866_OFFSET UNITYSDK_OFFSET(0x19576E70)
#define RPG_GAMECORE_BYNOT_METHOD_4_FED3ADB01529078B_OFFSET UNITYSDK_OFFSET(0x19576FF0)
#define RPG_GAMECORE_BYNOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19576E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByNot_TypeDefinitionIndex = 22493;

	class ByNot : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_33438B6CF26C3CB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByNot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByNot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_METHOD_4_33438B6CF26C3CB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EC5222F00B443866(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByNot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_METHOD_4_EC5222F00B443866_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FED3ADB01529078B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNot*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_METHOD_4_FED3ADB01529078B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3F2B3D4AB23533D1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_METHOD_4_3F2B3D4AB23533D1_OFFSET))(a1, a2);
		}
	};
}
