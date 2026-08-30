#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConicalVisionConfig; }

#define RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_METHOD_3_0E19A36C6AF2459D_OFFSET UNITYSDK_OFFSET(0x1CDDAF20)
#define RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_METHOD_3_20BC040E56BE3E06_OFFSET UNITYSDK_OFFSET(0x1CDDAEE0)
#define RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDAF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetNpcConicalVisionsConfig_TypeDefinitionIndex = 19766;

	class AdvSetNpcConicalVisionsConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConicalVisionConfig*>* Visions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_20BC040E56BE3E06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_METHOD_3_20BC040E56BE3E06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E19A36C6AF2459D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetNpcConicalVisionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETNPCCONICALVISIONSCONFIG_METHOD_3_0E19A36C6AF2459D_OFFSET))(a1, a2);
		}
	};
}
