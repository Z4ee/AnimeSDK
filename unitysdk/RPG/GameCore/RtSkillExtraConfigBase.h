#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTSKILLEXTRACONFIGBASE_METHOD_2_1DA63BBD2128607B_OFFSET UNITYSDK_OFFSET(0x1CCEDB30)
#define RPG_GAMECORE_RTSKILLEXTRACONFIGBASE_METHOD_2_F11E3F9E62820973_OFFSET UNITYSDK_OFFSET(0x1CCEDD40)
#define RPG_GAMECORE_RTSKILLEXTRACONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD8530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillExtraConfigBase_TypeDefinitionIndex = 17462;

	class RtSkillExtraConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLEXTRACONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1DA63BBD2128607B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillExtraConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillExtraConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLEXTRACONFIGBASE_METHOD_2_1DA63BBD2128607B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F11E3F9E62820973(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillExtraConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillExtraConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLEXTRACONFIGBASE_METHOD_2_F11E3F9E62820973_OFFSET))(a1, a2);
		}
	};
}
