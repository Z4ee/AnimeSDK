#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ValuePostProcessConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_15F89779E6F68E0D_OFFSET UNITYSDK_OFFSET(0x19E40790)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_17D8BAF837837F6B_OFFSET UNITYSDK_OFFSET(0x19E49590)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_1D24645FEB1BB1C1_1_OFFSET UNITYSDK_OFFSET(0x19E49700)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_1D24645FEB1BB1C1_OFFSET UNITYSDK_OFFSET(0x19E49610)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_28E63F96101B61FF_OFFSET UNITYSDK_OFFSET(0x19E495E0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_34F83547D6B8E159_1_OFFSET UNITYSDK_OFFSET(0x19E498C0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_34F83547D6B8E159_OFFSET UNITYSDK_OFFSET(0x19E497F0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_ACB475B3A1DF27E9_OFFSET UNITYSDK_OFFSET(0x19E489D0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_B2133D6384046C6C_OFFSET UNITYSDK_OFFSET(0x19E48B00)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_C833FB32FBB60681_OFFSET UNITYSDK_OFFSET(0x19E493F0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_D50B8689CD082B36_OFFSET UNITYSDK_OFFSET(0x19E41380)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19E3F6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ValueEvaluatorConfig_TypeDefinitionIndex = 22715;

	class ValueEvaluatorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Weight; // 0x10
		::Il2CppArray<::RPG::GameCore::ValuePostProcessConfig*>* PostProcess; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_15F89779E6F68E0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ValueEvaluatorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ValueEvaluatorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_15F89779E6F68E0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_ACB475B3A1DF27E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_ACB475B3A1DF27E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B2133D6384046C6C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_B2133D6384046C6C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C833FB32FBB60681(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_C833FB32FBB60681_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_D50B8689CD082B36(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_D50B8689CD082B36_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ValueEvaluatorConfig* Method_2_17D8BAF837837F6B(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ValueEvaluatorConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_17D8BAF837837F6B_OFFSET))(a1);
		}

		static ::RPG::GameCore::ValueEvaluatorConfig* Method_2_28E63F96101B61FF(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::ValueEvaluatorConfig*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_28E63F96101B61FF_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_1D24645FEB1BB1C1(::RPG::GameCore::ValueEvaluatorConfig* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_1D24645FEB1BB1C1_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_1D24645FEB1BB1C1_1(::RPG::GameCore::ValueEvaluatorConfig* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_1D24645FEB1BB1C1_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_34F83547D6B8E159(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_34F83547D6B8E159_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_34F83547D6B8E159_1(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_34F83547D6B8E159_1_OFFSET))(a1, a2);
		}
	};
}
