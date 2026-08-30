#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_1931FA08C25467D9_OFFSET UNITYSDK_OFFSET(0x1CEA9150)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_B59A76CD0A11671C_OFFSET UNITYSDK_OFFSET(0x1CEA92D0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_BA70D0ADAAA35062_OFFSET UNITYSDK_OFFSET(0x1CEA9190)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_E58E8EFB3EDEF6DD_OFFSET UNITYSDK_OFFSET(0x1CEA9300)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA9180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackIsInfected_TypeDefinitionIndex = 22789;

	class ByCheckModifierCallBackIsInfected : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1931FA08C25467D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_1931FA08C25467D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BA70D0ADAAA35062(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_BA70D0ADAAA35062_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B59A76CD0A11671C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_B59A76CD0A11671C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E58E8EFB3EDEF6DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_E58E8EFB3EDEF6DD_OFFSET))(a1, a2);
		}
	};
}
