#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEMODIFIER_METHOD_3_C00F48B3942FBA37_OFFSET UNITYSDK_OFFSET(0x1D39FAC0)
#define RPG_GAMECORE_REMOVEMODIFIER_METHOD_3_CFDBADE80E8FCD81_OFFSET UNITYSDK_OFFSET(0x1D39FA80)
#define RPG_GAMECORE_REMOVEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D39FAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveModifier_TypeDefinitionIndex = 22808;

	class RemoveModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* ModifierName; // 0x20
		::System::Boolean OnlyRemoveCasterAdded; // 0x28
		::System::Boolean RemoveAllInstance; // 0x29
		::System::Boolean RemoveToBeAdded; // 0x2A
		::System::Boolean MuteVisualStateRecover; // 0x2B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CFDBADE80E8FCD81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIER_METHOD_3_CFDBADE80E8FCD81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C00F48B3942FBA37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMODIFIER_METHOD_3_C00F48B3942FBA37_OFFSET))(a1, a2);
		}
	};
}
