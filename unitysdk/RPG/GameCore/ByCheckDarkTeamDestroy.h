#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_1D2116F31E9B2AB5_OFFSET UNITYSDK_OFFSET(0x1C2FC130)
#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_224323311859B0E7_OFFSET UNITYSDK_OFFSET(0x1C2FC340)
#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_8CEC8A729DC1AED0_OFFSET UNITYSDK_OFFSET(0x1C2FC310)
#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_8D391E2E464F2820_OFFSET UNITYSDK_OFFSET(0x1C2FC170)
#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2FC160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckDarkTeamDestroy_TypeDefinitionIndex = 23177;

	class ByCheckDarkTeamDestroy : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean ForWaveEnd; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1D2116F31E9B2AB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckDarkTeamDestroy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_1D2116F31E9B2AB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D391E2E464F2820(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckDarkTeamDestroy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_8D391E2E464F2820_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CEC8A729DC1AED0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckDarkTeamDestroy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_8CEC8A729DC1AED0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_224323311859B0E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckDarkTeamDestroy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_METHOD_4_224323311859B0E7_OFFSET))(a1, a2);
		}
	};
}
