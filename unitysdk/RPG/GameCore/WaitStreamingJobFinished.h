#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_METHOD_3_39967D9E9082E406_OFFSET UNITYSDK_OFFSET(0x17905910)
#define RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_METHOD_3_C4D6C64268301497_OFFSET UNITYSDK_OFFSET(0x17905890)
#define RPG_GAMECORE_WAITSTREAMINGJOBFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x179058E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitStreamingJobFinished_TypeDefinitionIndex = 19077;

	class WaitStreamingJobFinished : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean StopLoadingTick; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTREAMINGJOBFINISHED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4D6C64268301497(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitStreamingJobFinished*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitStreamingJobFinished*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_METHOD_3_C4D6C64268301497_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_39967D9E9082E406(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitStreamingJobFinished* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitStreamingJobFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_METHOD_3_39967D9E9082E406_OFFSET))(a1, a2);
		}
	};
}
