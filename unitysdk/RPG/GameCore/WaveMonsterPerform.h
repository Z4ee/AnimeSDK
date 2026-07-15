#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAVEMONSTERPERFORM_METHOD_3_61AFCF5DB9951561_OFFSET UNITYSDK_OFFSET(0x1D1C0830)
#define RPG_GAMECORE_WAVEMONSTERPERFORM_METHOD_3_A44AE27B35E01ADE_OFFSET UNITYSDK_OFFSET(0x1D1C07F0)
#define RPG_GAMECORE_WAVEMONSTERPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C0820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaveMonsterPerform_TypeDefinitionIndex = 22565;

	class WaveMonsterPerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFindPerformMonsterFailed; // 0x18
		::RPG::GameCore::WaveMonsterTiming CreateTiming; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A44AE27B35E01ADE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonsterPerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonsterPerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERPERFORM_METHOD_3_A44AE27B35E01ADE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61AFCF5DB9951561(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonsterPerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonsterPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERPERFORM_METHOD_3_61AFCF5DB9951561_OFFSET))(a1, a2);
		}
	};
}
