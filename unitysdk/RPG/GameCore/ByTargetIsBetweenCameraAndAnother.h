#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_1CFD004BFF98C45F_OFFSET UNITYSDK_OFFSET(0x1703C210)
#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_3824804D8057BDBB_OFFSET UNITYSDK_OFFSET(0x1703C2E0)
#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1703C290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsBetweenCameraAndAnother_TypeDefinitionIndex = 21563;

	class ByTargetIsBetweenCameraAndAnother : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* MiddleTarget; // 0x20
		::RPG::GameCore::TargetEvaluator* AnotherTarget; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1CFD004BFF98C45F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_1CFD004BFF98C45F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3824804D8057BDBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_3824804D8057BDBB_OFFSET))(a1, a2);
		}
	};
}
