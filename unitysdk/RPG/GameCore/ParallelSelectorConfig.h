#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PARALLELSELECTORCONFIG_METHOD_4_C6F67081A6188014_OFFSET UNITYSDK_OFFSET(0x1BB0D020)
#define RPG_GAMECORE_PARALLELSELECTORCONFIG_METHOD_4_E7A4AD78092A132F_OFFSET UNITYSDK_OFFSET(0x1BB0D060)
#define RPG_GAMECORE_PARALLELSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0D050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParallelSelectorConfig_TypeDefinitionIndex = 22928;

	class ParallelSelectorConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C6F67081A6188014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParallelSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParallelSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELSELECTORCONFIG_METHOD_4_C6F67081A6188014_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E7A4AD78092A132F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParallelSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParallelSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELSELECTORCONFIG_METHOD_4_E7A4AD78092A132F_OFFSET))(a1, a2);
		}
	};
}
