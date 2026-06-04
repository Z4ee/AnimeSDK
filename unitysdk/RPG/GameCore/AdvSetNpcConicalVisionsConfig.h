#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConicalVisionConfig; }

#define RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_METHOD_3_0E19A36C6AF2459D_OFFSET UNITYSDK_OFFSET(0x19437CC0)
#define RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_METHOD_3_E98B2782D205EB7E_OFFSET UNITYSDK_OFFSET(0x19437C40)
#define RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19437C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetNpcConicalVisionsConfig_TypeDefinitionIndex = 18875;

	class AdvSetNpcConicalVisionsConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConicalVisionConfig*>* Visions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E98B2782D205EB7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_METHOD_3_E98B2782D205EB7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E19A36C6AF2459D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_METHOD_3_0E19A36C6AF2459D_OFFSET))(a1, a2);
		}
	};
}
