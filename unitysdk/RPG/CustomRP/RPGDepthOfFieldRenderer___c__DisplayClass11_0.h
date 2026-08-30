#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class RPGDepthOfField; }

#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18594DE0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER___C__DISPLAYCLASS11_0__SETUPDOFBOKEHPOLYGON_B__0_OFFSET UNITYSDK_OFFSET(0x18595050)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfFieldRenderer___c__DisplayClass11_0_TypeDefinitionIndex = 37122;

	class RPGDepthOfFieldRenderer___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::CustomRP::RPGDepthOfField* settings; // 0x10
		::System::Single ratio; // 0x18
		::System::Single textureTapCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 _SetupDOFBokehPolygon_b__0(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER___C__DISPLAYCLASS11_0__SETUPDOFBOKEHPOLYGON_B__0_OFFSET))(this, a1, a2);
		}
	};
}
