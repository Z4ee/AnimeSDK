#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextDynamicParamBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_METHOD_3_D7C41288B2185D35_OFFSET UNITYSDK_OFFSET(0x1D5C9E80)
#define RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_METHOD_3_ECE875671C5142A1_OFFSET UNITYSDK_OFFSET(0x1D5C9F50)
#define RPG_GAMECORE_TEXTDYNAMICPARAMEXPR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C9E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextDynamicParamExpr_TypeDefinitionIndex = 16817;

	class TextDynamicParamExpr : public ::RPG::GameCore::TextDynamicParamBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Expr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMEXPR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ECE875671C5142A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextDynamicParamExpr*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextDynamicParamExpr*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_METHOD_3_ECE875671C5142A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7C41288B2185D35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextDynamicParamExpr* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextDynamicParamExpr*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_METHOD_3_D7C41288B2185D35_OFFSET))(a1, a2);
		}
	};
}
