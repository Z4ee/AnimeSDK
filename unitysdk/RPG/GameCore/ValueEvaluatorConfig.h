#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ValuePostProcessConfig; }

#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_15F89779E6F68E0D_OFFSET UNITYSDK_OFFSET(0x190ED620)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_17D8BAF837837F6B_OFFSET UNITYSDK_OFFSET(0x190F1330)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_28E63F96101B61FF_OFFSET UNITYSDK_OFFSET(0x190F1360)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_ACB475B3A1DF27E9_OFFSET UNITYSDK_OFFSET(0x190F1200)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_BB963CFC0DCDEAA2_1_OFFSET UNITYSDK_OFFSET(0x190F1450)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_BB963CFC0DCDEAA2_OFFSET UNITYSDK_OFFSET(0x190F1410)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_D33CB17D94D24B2A_1_OFFSET UNITYSDK_OFFSET(0x190F13D0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_D33CB17D94D24B2A_OFFSET UNITYSDK_OFFSET(0x190F1390)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190ECE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ValueEvaluatorConfig_TypeDefinitionIndex = 23026;

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

		static ::RPG::GameCore::ValueEvaluatorConfig* Method_2_17D8BAF837837F6B(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ValueEvaluatorConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_17D8BAF837837F6B_OFFSET))(a1);
		}

		static ::RPG::GameCore::ValueEvaluatorConfig* Method_2_28E63F96101B61FF(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::ValueEvaluatorConfig*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_28E63F96101B61FF_OFFSET))(a1);
		}

		static ::System::Boolean Method_2_D33CB17D94D24B2A(::RPG::GameCore::ValueEvaluatorConfig* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_D33CB17D94D24B2A_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_D33CB17D94D24B2A_1(::RPG::GameCore::ValueEvaluatorConfig* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_D33CB17D94D24B2A_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_BB963CFC0DCDEAA2(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_BB963CFC0DCDEAA2_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_2_BB963CFC0DCDEAA2_1(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_METHOD_2_BB963CFC0DCDEAA2_1_OFFSET))(a1, a2);
		}
	};
}
