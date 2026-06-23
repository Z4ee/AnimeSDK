#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class AttractorManager; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_ATTRACTORMANAGER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA65DA00)
#define NPCCROWD_AI_ATTRACTORMANAGER___C__DISPLAYCLASS40_0__INITHANDLECONFLICT_B__1_OFFSET UNITYSDK_OFFSET(0xA65DA10)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorManager___c__DisplayClass40_0_TypeDefinitionIndex = 65972;

	class AttractorManager___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* id2Handler; // 0x10
		::NPCCrowd::AI::AttractorManager* __4__this; // 0x18
		::System::Func_2<::System::Int32, ::System::Int32>* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitHandleConflict_b__1(::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER___C__DISPLAYCLASS40_0__INITHANDLECONFLICT_B__1_OFFSET))(this, i);
		}
	};
}
