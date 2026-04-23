#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE_METHOD_3_A3A08746ADAC72D8_OFFSET UNITYSDK_OFFSET(0x1885B2B0)
#define RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE_METHOD_3_BB26D93CC5B03D31_OFFSET UNITYSDK_OFFSET(0x1885B330)
#define RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1885B300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyCurvePropGroupPuzzle_TypeDefinitionIndex = 20532;

	class DestroyCurvePropGroupPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A3A08746ADAC72D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyCurvePropGroupPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyCurvePropGroupPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE_METHOD_3_A3A08746ADAC72D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB26D93CC5B03D31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyCurvePropGroupPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyCurvePropGroupPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE_METHOD_3_BB26D93CC5B03D31_OFFSET))(a1, a2);
		}
	};
}
