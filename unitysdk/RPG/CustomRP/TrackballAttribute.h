#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/TrackballAttribute_Mode.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_TRACKBALLATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC4B310)
#define RPG_CUSTOMRP_TRACKBALLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4B2F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int TrackballAttribute_TypeDefinitionIndex = 37760;

	class TrackballAttribute : public ::System::Attribute
	{
	public:
		::RPG::CustomRP::TrackballAttribute_Mode mode; // 0x10
		::System::Single SliderMax; // 0x14
		::UnityEngine::Vector4 DefaultValue; // 0x18
		::System::Single SliderMin; // 0x28

		::System::Void _ctor(::RPG::CustomRP::TrackballAttribute_Mode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::TrackballAttribute_Mode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TRACKBALLATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::CustomRP::TrackballAttribute_Mode a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::TrackballAttribute_Mode, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TRACKBALLATTRIBUTE__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
