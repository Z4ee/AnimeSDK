#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT_METHOD_3_18DD54CA4C748AAB_OFFSET UNITYSDK_OFFSET(0x1D21C370)
#define RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT_METHOD_3_B0AD0DDF52BD5488_OFFSET UNITYSDK_OFFSET(0x1D21C330)
#define RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21C360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveAddCurWaveMaxCount_TypeDefinitionIndex = 22994;

	class InfiniteWaveAddCurWaveMaxCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AddDelta; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B0AD0DDF52BD5488(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT_METHOD_3_B0AD0DDF52BD5488_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_18DD54CA4C748AAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEADDCURWAVEMAXCOUNT_METHOD_3_18DD54CA4C748AAB_OFFSET))(a1, a2);
		}
	};
}
