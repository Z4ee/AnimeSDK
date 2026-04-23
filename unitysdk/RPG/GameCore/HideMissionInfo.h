#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIDEMISSIONINFO_METHOD_3_4494C26EA81E8756_OFFSET UNITYSDK_OFFSET(0x189FF050)
#define RPG_GAMECORE_HIDEMISSIONINFO_METHOD_3_480F3B27221459D7_OFFSET UNITYSDK_OFFSET(0x189FEFD0)
#define RPG_GAMECORE_HIDEMISSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x189FF020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideMissionInfo_TypeDefinitionIndex = 23055;

	class HideMissionInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMISSIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_480F3B27221459D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideMissionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideMissionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMISSIONINFO_METHOD_3_480F3B27221459D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4494C26EA81E8756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideMissionInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideMissionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMISSIONINFO_METHOD_3_4494C26EA81E8756_OFFSET))(a1, a2);
		}
	};
}
