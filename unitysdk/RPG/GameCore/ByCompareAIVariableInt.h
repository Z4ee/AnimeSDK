#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_METHOD_4_0C7D55FCF5096503_OFFSET UNITYSDK_OFFSET(0x1CEAF730)
#define RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_METHOD_4_1EB89E2C4FB409CC_OFFSET UNITYSDK_OFFSET(0x1CEAF760)
#define RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_METHOD_4_2CCFBEBAA7AE5E40_OFFSET UNITYSDK_OFFSET(0x1CEAF510)
#define RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_METHOD_4_52CE6745B9A9EBC9_OFFSET UNITYSDK_OFFSET(0x1CEAF4D0)
#define RPG_GAMECORE_BYCOMPAREAIVARIABLEINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEAF500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAIVariableInt_TypeDefinitionIndex = 19806;

	class ByCompareAIVariableInt : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* VarName; // 0x20
		::RPG::GameCore::CompareType EquationType; // 0x28
		::System::Int32 TargetValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREAIVARIABLEINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_52CE6745B9A9EBC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAIVariableInt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAIVariableInt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_METHOD_4_52CE6745B9A9EBC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2CCFBEBAA7AE5E40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareAIVariableInt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareAIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_METHOD_4_2CCFBEBAA7AE5E40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0C7D55FCF5096503(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAIVariableInt*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAIVariableInt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_METHOD_4_0C7D55FCF5096503_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1EB89E2C4FB409CC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAIVariableInt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAIVariableInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREAIVARIABLEINT_METHOD_4_1EB89E2C4FB409CC_OFFSET))(a1, a2);
		}
	};
}
