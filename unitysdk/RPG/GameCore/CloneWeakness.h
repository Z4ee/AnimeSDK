#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLONEWEAKNESS_METHOD_3_28C2AB5D8383C46E_OFFSET UNITYSDK_OFFSET(0x18822C30)
#define RPG_GAMECORE_CLONEWEAKNESS_METHOD_3_2CE8E951597DE431_OFFSET UNITYSDK_OFFSET(0x18822BA0)
#define RPG_GAMECORE_CLONEWEAKNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x18822C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloneWeakness_TypeDefinitionIndex = 22011;

	class CloneWeakness : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean KeepProtected; // 0x28
		::System::Boolean KeepSecret; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLONEWEAKNESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2CE8E951597DE431(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloneWeakness*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloneWeakness*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLONEWEAKNESS_METHOD_3_2CE8E951597DE431_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28C2AB5D8383C46E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloneWeakness* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloneWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLONEWEAKNESS_METHOD_3_28C2AB5D8383C46E_OFFSET))(a1, a2);
		}
	};
}
