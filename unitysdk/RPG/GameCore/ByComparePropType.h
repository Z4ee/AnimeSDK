#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/PropType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_38E5A558FD893332_OFFSET UNITYSDK_OFFSET(0x18738240)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_854469E85C94511A_OFFSET UNITYSDK_OFFSET(0x18738170)
#define RPG_GAMECORE_BYCOMPAREPROPTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x187381F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropType_TypeDefinitionIndex = 19260;

	class ByComparePropType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::PropType>* Types; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_854469E85C94511A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_854469E85C94511A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38E5A558FD893332(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePropType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPTYPE_METHOD_4_38E5A558FD893332_OFFSET))(a1, a2);
		}
	};
}
