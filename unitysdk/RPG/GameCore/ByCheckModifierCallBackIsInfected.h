#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_A9E99BC1C3D2D031_OFFSET UNITYSDK_OFFSET(0x194FD840)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_ABCB8164844A5B08_OFFSET UNITYSDK_OFFSET(0x194FD5B0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_BA70D0ADAAA35062_OFFSET UNITYSDK_OFFSET(0x194FD680)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_DB75015A0C418B3D_OFFSET UNITYSDK_OFFSET(0x194FD7C0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED__CTOR_OFFSET UNITYSDK_OFFSET(0x194FD630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackIsInfected_TypeDefinitionIndex = 21794;

	class ByCheckModifierCallBackIsInfected : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ABCB8164844A5B08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_ABCB8164844A5B08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BA70D0ADAAA35062(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_BA70D0ADAAA35062_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB75015A0C418B3D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_DB75015A0C418B3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A9E99BC1C3D2D031(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackIsInfected* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackIsInfected*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKISINFECTED_METHOD_4_A9E99BC1C3D2D031_OFFSET))(a1, a2);
		}
	};
}
