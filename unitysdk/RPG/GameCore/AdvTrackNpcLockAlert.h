#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVTRACKNPCLOCKALERT_METHOD_3_270D8865533E308D_OFFSET UNITYSDK_OFFSET(0x1943AD00)
#define RPG_GAMECORE_ADVTRACKNPCLOCKALERT_METHOD_3_70E1801445196219_OFFSET UNITYSDK_OFFSET(0x1943ABF0)
#define RPG_GAMECORE_ADVTRACKNPCLOCKALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1943ACD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTrackNpcLockAlert_TypeDefinitionIndex = 20965;

	class AdvTrackNpcLockAlert : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCLOCKALERT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70E1801445196219(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcLockAlert*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcLockAlert*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCLOCKALERT_METHOD_3_70E1801445196219_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_270D8865533E308D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTrackNpcLockAlert* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTrackNpcLockAlert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCLOCKALERT_METHOD_3_270D8865533E308D_OFFSET))(a1, a2);
		}
	};
}
