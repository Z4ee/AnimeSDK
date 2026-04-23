#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPSTATEOVERRIDEITEM_METHOD_2_0002226D54DE06D4_OFFSET UNITYSDK_OFFSET(0x18C7A520)
#define RPG_GAMECORE_PROPSTATEOVERRIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7A6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateOverrideItem_TypeDefinitionIndex = 18064;

	class PropStateOverrideItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::RPG::GameCore::PropState PropState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEOVERRIDEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0002226D54DE06D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateOverrideItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateOverrideItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEOVERRIDEITEM_METHOD_2_0002226D54DE06D4_OFFSET))(a1, a2);
		}
	};
}
