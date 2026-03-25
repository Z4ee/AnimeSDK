#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TextDynamicParamBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_METHOD_3_2DE91E05412EA16C_OFFSET UNITYSDK_OFFSET(0x17899FB0)
#define RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_METHOD_3_D1B3530EA207779C_OFFSET UNITYSDK_OFFSET(0x1789A080)
#define RPG_GAMECORE_TEXTDYNAMICPARAMEXPR__CTOR_OFFSET UNITYSDK_OFFSET(0x17899FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextDynamicParamExpr_TypeDefinitionIndex = 15575;

	class TextDynamicParamExpr : public ::RPG::GameCore::TextDynamicParamBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Expr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMEXPR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D1B3530EA207779C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextDynamicParamExpr*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextDynamicParamExpr*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_METHOD_3_D1B3530EA207779C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2DE91E05412EA16C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextDynamicParamExpr* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextDynamicParamExpr*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDYNAMICPARAMEXPR_METHOD_3_2DE91E05412EA16C_OFFSET))(a1, a2);
		}
	};
}
