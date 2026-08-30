#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVTRACKNPCLOCKALERT_METHOD_3_270D8865533E308D_OFFSET UNITYSDK_OFFSET(0x1CBA4B80)
#define RPG_GAMECORE_ADVTRACKNPCLOCKALERT_METHOD_3_7618B718EB0A65D0_OFFSET UNITYSDK_OFFSET(0x1CBA4AB0)
#define RPG_GAMECORE_ADVTRACKNPCLOCKALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA4B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTrackNpcLockAlert_TypeDefinitionIndex = 21941;

	class AdvTrackNpcLockAlert : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCLOCKALERT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7618B718EB0A65D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcLockAlert*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcLockAlert*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCLOCKALERT_METHOD_3_7618B718EB0A65D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_270D8865533E308D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcLockAlert* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcLockAlert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCLOCKALERT_METHOD_3_270D8865533E308D_OFFSET))(a1, a2);
		}
	};
}
