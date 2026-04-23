#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ONMUSEUMPERFORMANCEEND_METHOD_3_05974A3FC6A28351_OFFSET UNITYSDK_OFFSET(0x18BC4810)
#define RPG_GAMECORE_ONMUSEUMPERFORMANCEEND_METHOD_3_4D9236D26CFDA2A5_OFFSET UNITYSDK_OFFSET(0x18BC4920)
#define RPG_GAMECORE_ONMUSEUMPERFORMANCEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC48F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnMuseumPerformanceEnd_TypeDefinitionIndex = 19892;

	class OnMuseumPerformanceEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_05974A3FC6A28351(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnMuseumPerformanceEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnMuseumPerformanceEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEEND_METHOD_3_05974A3FC6A28351_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D9236D26CFDA2A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnMuseumPerformanceEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnMuseumPerformanceEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEEND_METHOD_3_4D9236D26CFDA2A5_OFFSET))(a1, a2);
		}
	};
}
