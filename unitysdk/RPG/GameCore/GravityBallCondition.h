#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_GRAVITYBALLCONDITION_METHOD_2_39896B0D3DFCF387_OFFSET UNITYSDK_OFFSET(0x1D148780)
#define RPG_GAMECORE_GRAVITYBALLCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1488C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallCondition_TypeDefinitionIndex = 20144;

	class GravityBallCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* PuzzleID; // 0x10
		::RPG::GameCore::DynamicString* GroupEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_39896B0D3DFCF387(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GravityBallCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GravityBallCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLCONDITION_METHOD_2_39896B0D3DFCF387_OFFSET))(a1, a2);
		}
	};
}
