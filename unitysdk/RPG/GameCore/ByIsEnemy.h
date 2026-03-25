#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISENEMY_METHOD_4_2F44EDAB81B8D623_OFFSET UNITYSDK_OFFSET(0x1702D380)
#define RPG_GAMECORE_BYISENEMY_METHOD_4_31334FF7A03ED5C7_OFFSET UNITYSDK_OFFSET(0x1702D2B0)
#define RPG_GAMECORE_BYISENEMY__CTOR_OFFSET UNITYSDK_OFFSET(0x1702D330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEnemy_TypeDefinitionIndex = 21717;

	class ByIsEnemy : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetTypeA; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetTypeB; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_31334FF7A03ED5C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEnemy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEnemy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY_METHOD_4_31334FF7A03ED5C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2F44EDAB81B8D623(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEnemy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY_METHOD_4_2F44EDAB81B8D623_OFFSET))(a1, a2);
		}
	};
}
