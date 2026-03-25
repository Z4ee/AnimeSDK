#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_1FA6C8B19A1EC76E_OFFSET UNITYSDK_OFFSET(0x17002BE0)
#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_8989C18200C90A8C_OFFSET UNITYSDK_OFFSET(0x17002B10)
#define RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR__CTOR_OFFSET UNITYSDK_OFFSET(0x17002B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAngleBetweenVCameraAndDir_TypeDefinitionIndex = 21562;

	class ByCompareAngleBetweenVCameraAndDir : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseRealCameraDir; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x38
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8989C18200C90A8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_8989C18200C90A8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1FA6C8B19A1EC76E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAngleBetweenVCameraAndDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREANGLEBETWEENVCAMERAANDDIR_METHOD_4_1FA6C8B19A1EC76E_OFFSET))(a1, a2);
		}
	};
}
