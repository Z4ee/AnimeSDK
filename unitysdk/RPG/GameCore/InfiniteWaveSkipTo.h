#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_INFINITEWAVESKIPTO_METHOD_3_7877202168B91357_OFFSET UNITYSDK_OFFSET(0x18A1D240)
#define RPG_GAMECORE_INFINITEWAVESKIPTO_METHOD_3_E223FC2559A6F1FE_OFFSET UNITYSDK_OFFSET(0x18A1D2C0)
#define RPG_GAMECORE_INFINITEWAVESKIPTO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1D290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveSkipTo_TypeDefinitionIndex = 22689;

	class InfiniteWaveSkipTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaveIndex; // 0x18
		::System::Boolean MuteCurrentWave; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESKIPTO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7877202168B91357(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveSkipTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveSkipTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESKIPTO_METHOD_3_7877202168B91357_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E223FC2559A6F1FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveSkipTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveSkipTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVESKIPTO_METHOD_3_E223FC2559A6F1FE_OFFSET))(a1, a2);
		}
	};
}
