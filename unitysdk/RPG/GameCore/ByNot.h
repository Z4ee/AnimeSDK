#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYNOT_METHOD_4_21ECF94F5F385685_OFFSET UNITYSDK_OFFSET(0x1CDB89C0)
#define RPG_GAMECORE_BYNOT_METHOD_4_40868C0950B70332_OFFSET UNITYSDK_OFFSET(0x1CDB8990)
#define RPG_GAMECORE_BYNOT_METHOD_4_9220BC9B4E7BDED7_OFFSET UNITYSDK_OFFSET(0x1CDB87D0)
#define RPG_GAMECORE_BYNOT_METHOD_4_EC5222F00B443866_OFFSET UNITYSDK_OFFSET(0x1CDB8810)
#define RPG_GAMECORE_BYNOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB8800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByNot_TypeDefinitionIndex = 23523;

	class ByNot : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9220BC9B4E7BDED7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByNot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByNot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_METHOD_4_9220BC9B4E7BDED7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EC5222F00B443866(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByNot* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_METHOD_4_EC5222F00B443866_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_40868C0950B70332(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNot*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_METHOD_4_40868C0950B70332_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_21ECF94F5F385685(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNOT_METHOD_4_21ECF94F5F385685_OFFSET))(a1, a2);
		}
	};
}
