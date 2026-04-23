#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADAPTENTITYPOSITION_METHOD_3_398F9E547BCB5545_OFFSET UNITYSDK_OFFSET(0x1863BD00)
#define RPG_GAMECORE_ADAPTENTITYPOSITION_METHOD_3_9C8A7BB91EB6CE90_OFFSET UNITYSDK_OFFSET(0x1863BDD0)
#define RPG_GAMECORE_ADAPTENTITYPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1863BD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdaptEntityPosition_TypeDefinitionIndex = 19101;

	class AdaptEntityPosition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* PosTargetType; // 0x20
		::RPG::GameCore::DynamicFloat* OffsetX; // 0x28
		::RPG::GameCore::DynamicFloat* OffsetY; // 0x30
		::RPG::GameCore::DynamicFloat* OffsetZ; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADAPTENTITYPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_398F9E547BCB5545(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdaptEntityPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdaptEntityPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADAPTENTITYPOSITION_METHOD_3_398F9E547BCB5545_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9C8A7BB91EB6CE90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdaptEntityPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdaptEntityPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADAPTENTITYPOSITION_METHOD_3_9C8A7BB91EB6CE90_OFFSET))(a1, a2);
		}
	};
}
