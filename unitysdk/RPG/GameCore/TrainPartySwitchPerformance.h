#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE_METHOD_3_36F0372891913F38_OFFSET UNITYSDK_OFFSET(0x190AF570)
#define RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE_METHOD_3_FCF9119EFE01C0BA_OFFSET UNITYSDK_OFFSET(0x190AF5F0)
#define RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x190AF5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartySwitchPerformance_TypeDefinitionIndex = 21238;

	class TrainPartySwitchPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StartConfigPath; // 0x18
		::System::String* PerformanceConfigPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_36F0372891913F38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartySwitchPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartySwitchPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE_METHOD_3_36F0372891913F38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FCF9119EFE01C0BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartySwitchPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartySwitchPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSWITCHPERFORMANCE_METHOD_3_FCF9119EFE01C0BA_OFFSET))(a1, a2);
		}
	};
}
