#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_METHOD_4_39784D76F9AB1AE8_OFFSET UNITYSDK_OFFSET(0x17026FC0)
#define RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_METHOD_4_F47FC09C88314E1A_OFFSET UNITYSDK_OFFSET(0x17027040)
#define RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x170272A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveUniqueNameEffect_TypeDefinitionIndex = 18734;

	class ByHaveUniqueNameEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* EffectUniqueName; // 0x28
		::System::Boolean IncludeUnprepared; // 0x30
		::System::Boolean IncludeFadeOut; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_39784D76F9AB1AE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveUniqueNameEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveUniqueNameEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_METHOD_4_39784D76F9AB1AE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F47FC09C88314E1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveUniqueNameEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveUniqueNameEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_METHOD_4_F47FC09C88314E1A_OFFSET))(a1, a2);
		}
	};
}
