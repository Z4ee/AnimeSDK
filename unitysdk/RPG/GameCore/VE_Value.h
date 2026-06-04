#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_VALUE_METHOD_3_03295B42B870A0B9_OFFSET UNITYSDK_OFFSET(0x19E46910)
#define RPG_GAMECORE_VE_VALUE_METHOD_3_04470492C3FB332E_OFFSET UNITYSDK_OFFSET(0x19E46770)
#define RPG_GAMECORE_VE_VALUE_METHOD_3_2D3179C5FA9905D7_OFFSET UNITYSDK_OFFSET(0x19E46730)
#define RPG_GAMECORE_VE_VALUE_METHOD_3_B3516A2C2E95BEDA_OFFSET UNITYSDK_OFFSET(0x19E46940)
#define RPG_GAMECORE_VE_VALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E46760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Value_TypeDefinitionIndex = 22719;

	class VE_Value : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D3179C5FA9905D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Value*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Value*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE_METHOD_3_2D3179C5FA9905D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_04470492C3FB332E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Value* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Value*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE_METHOD_3_04470492C3FB332E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_03295B42B870A0B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Value*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Value*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE_METHOD_3_03295B42B870A0B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B3516A2C2E95BEDA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Value* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Value*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE_METHOD_3_B3516A2C2E95BEDA_OFFSET))(a1, a2);
		}
	};
}
