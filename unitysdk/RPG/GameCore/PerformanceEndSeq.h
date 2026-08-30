#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceResultCase; }

#define RPG_GAMECORE_PERFORMANCEENDSEQ_METHOD_3_18744BB5EDD66E22_OFFSET UNITYSDK_OFFSET(0x1D318D60)
#define RPG_GAMECORE_PERFORMANCEENDSEQ_METHOD_3_AF0E8AC152B22ED5_OFFSET UNITYSDK_OFFSET(0x1D318DA0)
#define RPG_GAMECORE_PERFORMANCEENDSEQ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D318D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceEndSeq_TypeDefinitionIndex = 20998;

	class PerformanceEndSeq : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PerformanceResultCase*>* Cases; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BeforeCases; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDSEQ__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_18744BB5EDD66E22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceEndSeq*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceEndSeq*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDSEQ_METHOD_3_18744BB5EDD66E22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AF0E8AC152B22ED5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceEndSeq* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceEndSeq*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEENDSEQ_METHOD_3_AF0E8AC152B22ED5_OFFSET))(a1, a2);
		}
	};
}
