#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_022B0BBAB9337956_OFFSET UNITYSDK_OFFSET(0x195755B0)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_6FB1979D14A5B54D_OFFSET UNITYSDK_OFFSET(0x19575770)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_9A9B1DADDBBFC369_OFFSET UNITYSDK_OFFSET(0x195756F0)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_C5BF1CD4837B659C_OFFSET UNITYSDK_OFFSET(0x195754E0)
#define RPG_GAMECORE_BYLOCALPLAYERISHERO__CTOR_OFFSET UNITYSDK_OFFSET(0x19575560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLocalPlayerIsHero_TypeDefinitionIndex = 19446;

	class ByLocalPlayerIsHero : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C5BF1CD4837B659C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerIsHero*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerIsHero*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_C5BF1CD4837B659C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_022B0BBAB9337956(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_022B0BBAB9337956_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A9B1DADDBBFC369(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsHero*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsHero*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_9A9B1DADDBBFC369_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FB1979D14A5B54D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerIsHero* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerIsHero*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERISHERO_METHOD_4_6FB1979D14A5B54D_OFFSET))(a1, a2);
		}
	};
}
