#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_3D3C184F97EDADC2_OFFSET UNITYSDK_OFFSET(0x1CDB9540)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_7D61F42E75174C96_OFFSET UNITYSDK_OFFSET(0x1CDB93C0)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_AC4BE135D0D63FCC_OFFSET UNITYSDK_OFFSET(0x1CDB9570)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_C6618C21B039DE47_OFFSET UNITYSDK_OFFSET(0x1CDB9380)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB93B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckFarmElementActive_TypeDefinitionIndex = 22013;

	class AdvByCheckFarmElementActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C6618C21B039DE47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckFarmElementActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckFarmElementActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_C6618C21B039DE47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7D61F42E75174C96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_7D61F42E75174C96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3D3C184F97EDADC2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckFarmElementActive*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckFarmElementActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_3D3C184F97EDADC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AC4BE135D0D63FCC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_AC4BE135D0D63FCC_OFFSET))(a1, a2);
		}
	};
}
