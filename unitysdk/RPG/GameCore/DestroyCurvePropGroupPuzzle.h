#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE_METHOD_3_780EBC3ACF46B38A_OFFSET UNITYSDK_OFFSET(0x1C103920)
#define RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE_METHOD_3_BB26D93CC5B03D31_OFFSET UNITYSDK_OFFSET(0x1C103960)
#define RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C103950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyCurvePropGroupPuzzle_TypeDefinitionIndex = 20883;

	class DestroyCurvePropGroupPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_780EBC3ACF46B38A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyCurvePropGroupPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyCurvePropGroupPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE_METHOD_3_780EBC3ACF46B38A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB26D93CC5B03D31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyCurvePropGroupPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyCurvePropGroupPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYCURVEPROPGROUPPUZZLE_METHOD_3_BB26D93CC5B03D31_OFFSET))(a1, a2);
		}
	};
}
