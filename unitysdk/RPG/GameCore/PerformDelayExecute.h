#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PERFORMDELAYEXECUTE_METHOD_3_03CB628FE4B6784C_OFFSET UNITYSDK_OFFSET(0x17490910)
#define RPG_GAMECORE_PERFORMDELAYEXECUTE_METHOD_3_838C23B8D9F93EBE_OFFSET UNITYSDK_OFFSET(0x17490990)
#define RPG_GAMECORE_PERFORMDELAYEXECUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17490960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformDelayExecute_TypeDefinitionIndex = 21032;

	class PerformDelayExecute : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PerformTaskList; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean AliveOnly; // 0x28
		::RPG::GameCore::DynamicFloat* Delay; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMDELAYEXECUTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03CB628FE4B6784C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformDelayExecute*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformDelayExecute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMDELAYEXECUTE_METHOD_3_03CB628FE4B6784C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_838C23B8D9F93EBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformDelayExecute* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformDelayExecute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMDELAYEXECUTE_METHOD_3_838C23B8D9F93EBE_OFFSET))(a1, a2);
		}
	};
}
