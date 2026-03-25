#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaitBatchTriggerRule.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class WaitBatchItem; }

#define RPG_GAMECORE_WAITBATCH_METHOD_3_87827B7CE3C57166_OFFSET UNITYSDK_OFFSET(0x178F5260)
#define RPG_GAMECORE_WAITBATCH_METHOD_3_DB9C3454B47C362D_OFFSET UNITYSDK_OFFSET(0x178F52E0)
#define RPG_GAMECORE_WAITBATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x178F52B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBatch_TypeDefinitionIndex = 22031;

	class WaitBatch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::WaitBatchTriggerRule TriggerRule; // 0x18
		::System::Boolean ParallelTrigger; // 0x1C
		::Il2CppArray<::RPG::GameCore::WaitBatchItem*>* WaitList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_87827B7CE3C57166(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBatch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBatch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATCH_METHOD_3_87827B7CE3C57166_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB9C3454B47C362D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitBatch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitBatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATCH_METHOD_3_DB9C3454B47C362D_OFFSET))(a1, a2);
		}
	};
}
