#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PARALLELCONFIG_METHOD_4_89A27707399BD8E9_OFFSET UNITYSDK_OFFSET(0x1D412A60)
#define RPG_GAMECORE_PARALLELCONFIG_METHOD_4_F6859C3893A4E872_OFFSET UNITYSDK_OFFSET(0x1D412AA0)
#define RPG_GAMECORE_PARALLELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D412A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParallelConfig_TypeDefinitionIndex = 23507;

	class ParallelConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_89A27707399BD8E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParallelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParallelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIG_METHOD_4_89A27707399BD8E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6859C3893A4E872(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParallelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParallelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARALLELCONFIG_METHOD_4_F6859C3893A4E872_OFFSET))(a1, a2);
		}
	};
}
