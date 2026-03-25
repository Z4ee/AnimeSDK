#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PERFORMTASKSEQ_METHOD_2_7568C92F49350763_OFFSET UNITYSDK_OFFSET(0x17490BD0)
#define RPG_GAMECORE_PERFORMTASKSEQ__CTOR_OFFSET UNITYSDK_OFFSET(0x17490CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformTaskSeq_TypeDefinitionIndex = 16228;

	class PerformTaskSeq : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TasksConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMTASKSEQ__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7568C92F49350763(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformTaskSeq*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformTaskSeq*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMTASKSEQ_METHOD_2_7568C92F49350763_OFFSET))(a1, a2);
		}
	};
}
