#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTDAMAGETEXTCONFIGGROUP_METHOD_2_16A8D0100BE6A128_OFFSET UNITYSDK_OFFSET(0x1D4A70A0)
#define RPG_GAMECORE_RTDAMAGETEXTCONFIGGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A71B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDamageTextConfigGroup_TypeDefinitionIndex = 17833;

	class RtDamageTextConfigGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single TextScale; // 0x10
		::System::Single TextAlpha; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGETEXTCONFIGGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_16A8D0100BE6A128(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDamageTextConfigGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDamageTextConfigGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGETEXTCONFIGGROUP_METHOD_2_16A8D0100BE6A128_OFFSET))(a1, a2);
		}
	};
}
