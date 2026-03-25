#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_E38B3BEE4734ED44_OFFSET UNITYSDK_OFFSET(0x1703DF70)
#define RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_FA57737ACF91A7CA_OFFSET UNITYSDK_OFFSET(0x1703E040)
#define RPG_GAMECORE_BYTARGETVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1703DFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetVisible_TypeDefinitionIndex = 18915;

	class ByTargetVisible : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E38B3BEE4734ED44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_E38B3BEE4734ED44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA57737ACF91A7CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETVISIBLE_METHOD_4_FA57737ACF91A7CA_OFFSET))(a1, a2);
		}
	};
}
