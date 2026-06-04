#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PARALLELCOMPLETECONFIG_METHOD_4_041A8831D8870D80_OFFSET UNITYSDK_OFFSET(0x199E3E70)
#define RPG_GAMECORE_PARALLELCOMPLETECONFIG_METHOD_4_D9FB642352B45979_OFFSET UNITYSDK_OFFSET(0x199E3EF0)
#define RPG_GAMECORE_PARALLELCOMPLETECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199E3EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParallelCompleteConfig_TypeDefinitionIndex = 22479;

	class ParallelCompleteConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCOMPLETECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_041A8831D8870D80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParallelCompleteConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParallelCompleteConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCOMPLETECONFIG_METHOD_4_041A8831D8870D80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D9FB642352B45979(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParallelCompleteConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParallelCompleteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCOMPLETECONFIG_METHOD_4_D9FB642352B45979_OFFSET))(a1, a2);
		}
	};
}
