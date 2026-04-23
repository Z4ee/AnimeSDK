#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET_METHOD_3_F07B9838C0838CBA_OFFSET UNITYSDK_OFFSET(0x188A5570)
#define RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET_METHOD_3_F8667EEA6F863A43_OFFSET UNITYSDK_OFFSET(0x188A55F0)
#define RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x188A55C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableFieldEffectSoftZOffset_TypeDefinitionIndex = 21608;

	class EnableFieldEffectSoftZOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F07B9838C0838CBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableFieldEffectSoftZOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableFieldEffectSoftZOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET_METHOD_3_F07B9838C0838CBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F8667EEA6F863A43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableFieldEffectSoftZOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableFieldEffectSoftZOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEFIELDEFFECTSOFTZOFFSET_METHOD_3_F8667EEA6F863A43_OFFSET))(a1, a2);
		}
	};
}
