#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_022B0BBAB9337956_OFFSET UNITYSDK_OFFSET(0x1B2ADFE0)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_1379DBBE913ED055_OFFSET UNITYSDK_OFFSET(0x1B2ADFA0)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_C1F0E0CA24D46CC0_OFFSET UNITYSDK_OFFSET(0x1B2AE120)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_FE8EB376F7BFF1E1_OFFSET UNITYSDK_OFFSET(0x1B2AE150)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2ADFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLocalPlayerIsHero_TypeDefinitionIndex = 19804;

	class ByLocalPlayerIsHero : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1379DBBE913ED055(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerIsHero*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerIsHero*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_1379DBBE913ED055_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_022B0BBAB9337956(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_022B0BBAB9337956_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C1F0E0CA24D46CC0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsHero*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsHero*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_C1F0E0CA24D46CC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE8EB376F7BFF1E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_FE8EB376F7BFF1E1_OFFSET))(a1, a2);
		}
	};
}
