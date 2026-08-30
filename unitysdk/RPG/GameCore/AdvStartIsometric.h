#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVSTARTISOMETRIC_METHOD_3_CAB696B1A37E8085_OFFSET UNITYSDK_OFFSET(0x1CDDD3C0)
#define RPG_GAMECORE_ADVSTARTISOMETRIC_METHOD_3_E8F7AF6D9DE52D20_OFFSET UNITYSDK_OFFSET(0x1CDDD380)
#define RPG_GAMECORE_ADVSTARTISOMETRIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDD3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvStartIsometric_TypeDefinitionIndex = 21958;

	class AdvStartIsometric : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ZoomOffsetUp; // 0x18
		::RPG::GameCore::DynamicFloat* ZoomOffsetDown; // 0x20
		::RPG::GameCore::DynamicFloat* ZoomOffsetLeft; // 0x28
		::RPG::GameCore::DynamicFloat* ZoomOffsetRight; // 0x30
		::RPG::GameCore::DynamicString* OriginAnchorKey; // 0x38
		::RPG::GameCore::DynamicFloat* MaxCameraSize; // 0x40
		::RPG::GameCore::DynamicString* FollowAnchorKey; // 0x48
		::RPG::GameCore::DynamicString* SwipeAnchorKey; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTISOMETRIC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8F7AF6D9DE52D20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvStartIsometric*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvStartIsometric*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTISOMETRIC_METHOD_3_E8F7AF6D9DE52D20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CAB696B1A37E8085(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvStartIsometric* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvStartIsometric*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTISOMETRIC_METHOD_3_CAB696B1A37E8085_OFFSET))(a1, a2);
		}
	};
}
