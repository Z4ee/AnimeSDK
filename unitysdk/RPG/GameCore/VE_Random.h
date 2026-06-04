#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RANDOM_METHOD_3_0FB9B54C54E4DB2F_OFFSET UNITYSDK_OFFSET(0x19E41860)
#define RPG_GAMECORE_VE_RANDOM_METHOD_3_3143FE00062A56AB_OFFSET UNITYSDK_OFFSET(0x19E41830)
#define RPG_GAMECORE_VE_RANDOM_METHOD_3_3C789168D44C7839_OFFSET UNITYSDK_OFFSET(0x19E41650)
#define RPG_GAMECORE_VE_RANDOM_METHOD_3_5C7994F660A29AC4_OFFSET UNITYSDK_OFFSET(0x19E41610)
#define RPG_GAMECORE_VE_RANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E41640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Random_TypeDefinitionIndex = 22722;

	class VE_Random : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Min; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* Max; // 0x28
		::System::Boolean IsInt; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5C7994F660A29AC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Random*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Random*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_METHOD_3_5C7994F660A29AC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3C789168D44C7839(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Random* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Random*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_METHOD_3_3C789168D44C7839_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3143FE00062A56AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Random*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Random*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_METHOD_3_3143FE00062A56AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0FB9B54C54E4DB2F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Random* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Random*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_METHOD_3_0FB9B54C54E4DB2F_OFFSET))(a1, a2);
		}
	};
}
