#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyOverrideType.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_RTMODIFIERPROPERTYOVERRIDEDATA_METHOD_2_EF0947BA2994508B_OFFSET UNITYSDK_OFFSET(0x18DD4ED0)
#define RPG_GAMECORE_RTMODIFIERPROPERTYOVERRIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD5080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtModifierPropertyOverrideData_TypeDefinitionIndex = 23185;

	class RtModifierPropertyOverrideData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtModifierPropertyType Property; // 0x10
		::RPG::GameCore::RtModifierPropertyOverrideType OverrideType; // 0x14
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERPROPERTYOVERRIDEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EF0947BA2994508B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtModifierPropertyOverrideData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtModifierPropertyOverrideData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTMODIFIERPROPERTYOVERRIDEDATA_METHOD_2_EF0947BA2994508B_OFFSET))(a1, a2);
		}
	};
}
