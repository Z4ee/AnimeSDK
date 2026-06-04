#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES_METHOD_3_8EB6AE516F4A8EE5_OFFSET UNITYSDK_OFFSET(0x19C80900)
#define RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES_METHOD_3_96823ECCBF09953E_OFFSET UNITYSDK_OFFSET(0x19C80860)
#define RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES__CTOR_OFFSET UNITYSDK_OFFSET(0x19C808C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPerformanceRollingSubtitles_TypeDefinitionIndex = 20721;

	class ShowPerformanceRollingSubtitles : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single PrevDuration; // 0x18
		::System::Single PostDuration; // 0x1C
		::System::Boolean IsGoNextImmediately; // 0x20
		::System::String* JsonConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96823ECCBF09953E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPerformanceRollingSubtitles*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPerformanceRollingSubtitles*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES_METHOD_3_96823ECCBF09953E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8EB6AE516F4A8EE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPerformanceRollingSubtitles* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPerformanceRollingSubtitles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPERFORMANCEROLLINGSUBTITLES_METHOD_3_8EB6AE516F4A8EE5_OFFSET))(a1, a2);
		}
	};
}
