#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ValuePostProcessConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_036959E25D264AFE_OFFSET UNITYSDK_OFFSET(0x1DEAB4B0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_07E548F0720089AB_OFFSET UNITYSDK_OFFSET(0x1DEA18E0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_15F89779E6F68E0D_OFFSET UNITYSDK_OFFSET(0x1DEA2090)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_17D8BAF837837F6B_OFFSET UNITYSDK_OFFSET(0x1DEAC160)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_1D24645FEB1BB1C1_1_OFFSET UNITYSDK_OFFSET(0x1DEAC2D0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_1D24645FEB1BB1C1_OFFSET UNITYSDK_OFFSET(0x1DEAC1E0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_28E63F96101B61FF_OFFSET UNITYSDK_OFFSET(0x1DEAC1B0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_34F83547D6B8E159_1_OFFSET UNITYSDK_OFFSET(0x1DEAC490)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_34F83547D6B8E159_OFFSET UNITYSDK_OFFSET(0x1DEAC3C0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_41F3538BC1933ED0_OFFSET UNITYSDK_OFFSET(0x1DEABEF0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_ACB475B3A1DF27E9_OFFSET UNITYSDK_OFFSET(0x1DEAB380)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA1E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ValueEvaluatorConfig_TypeDefinitionIndex = 23762;

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

		static ::System::Void Method_2_036959E25D264AFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_036959E25D264AFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_41F3538BC1933ED0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_41F3538BC1933ED0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_07E548F0720089AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_07E548F0720089AB_OFFSET))(a1, a2);
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
