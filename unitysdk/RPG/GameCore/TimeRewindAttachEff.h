#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TimeRewindSpreadEffConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDATTACHEFF_METHOD_2_84544CE0FDCC3441_OFFSET UNITYSDK_OFFSET(0x1C151A50)
#define RPG_GAMECORE_TIMEREWINDATTACHEFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C151CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindAttachEff_TypeDefinitionIndex = 15955;

	class TimeRewindAttachEff : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffPath; // 0x10
		::System::String* AttachPoint; // 0x18
		::RPG::MVector3 Scale; // 0x20
		::System::Boolean SyncPropState; // 0x2C
		::RPG::MVector3 PositionOffset; // 0x30
		::System::Single Delay; // 0x3C
		::RPG::GameCore::TimeRewindSpreadEffConfig* DynamicSpreadConfig; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDATTACHEFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_84544CE0FDCC3441(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindAttachEff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindAttachEff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDATTACHEFF_METHOD_2_84544CE0FDCC3441_OFFSET))(a1, a2);
		}
	};
}
