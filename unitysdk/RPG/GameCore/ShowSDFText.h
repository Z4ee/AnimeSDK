#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SDFTextAlignType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWSDFTEXT_METHOD_3_1608696199732EF0_OFFSET UNITYSDK_OFFSET(0x18E667D0)
#define RPG_GAMECORE_SHOWSDFTEXT_METHOD_3_469CF65C7F3DB525_OFFSET UNITYSDK_OFFSET(0x18E666A0)
#define RPG_GAMECORE_SHOWSDFTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E66750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSDFText_TypeDefinitionIndex = 19898;

	class ShowSDFText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* IsFaceToCamera; // 0x28
		::RPG::GameCore::DynamicFloat* SDFTextID; // 0x30
		::RPG::GameCore::DynamicString* SDFText; // 0x38
		::RPG::GameCore::DynamicFloat* SDFTextEffect; // 0x40
		::System::String* AnimatorParamName; // 0x48
		::RPG::GameCore::DynamicFloat* AnimatorParam; // 0x50
		::RPG::GameCore::DynamicFloat* FontSize; // 0x58
		::RPG::GameCore::DynamicFloat* IsSetScale; // 0x60
		::RPG::GameCore::DynamicFloat* DenseTypeScale; // 0x68
		::RPG::GameCore::DynamicFloat* TallTypeScale; // 0x70
		::RPG::GameCore::DynamicFloat* EnglishLikeScale; // 0x78
		::RPG::GameCore::SDFTextAlignType OverrideAlignType; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSDFTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_469CF65C7F3DB525(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSDFText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSDFText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSDFTEXT_METHOD_3_469CF65C7F3DB525_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1608696199732EF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSDFText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSDFText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSDFTEXT_METHOD_3_1608696199732EF0_OFFSET))(a1, a2);
		}
	};
}
