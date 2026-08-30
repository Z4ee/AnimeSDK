#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_METHOD_3_39967D9E9082E406_OFFSET UNITYSDK_OFFSET(0x1DEC2690)
#define RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_METHOD_3_BE6F3834162E3A85_OFFSET UNITYSDK_OFFSET(0x1DEC2650)
#define RPG_GAMECORE_WAITSTREAMINGJOBFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC2680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitStreamingJobFinished_TypeDefinitionIndex = 20518;

	class WaitStreamingJobFinished : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean StopLoadingTick; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTREAMINGJOBFINISHED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE6F3834162E3A85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitStreamingJobFinished*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitStreamingJobFinished*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_METHOD_3_BE6F3834162E3A85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_39967D9E9082E406(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitStreamingJobFinished* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitStreamingJobFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSTREAMINGJOBFINISHED_METHOD_3_39967D9E9082E406_OFFSET))(a1, a2);
		}
	};
}
