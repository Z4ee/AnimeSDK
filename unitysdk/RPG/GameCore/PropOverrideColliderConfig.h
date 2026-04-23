#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPOVERRIDECOLLIDERCONFIG_METHOD_2_03DAEB89B05256C9_OFFSET UNITYSDK_OFFSET(0x18C6A540)
#define RPG_GAMECORE_PROPOVERRIDECOLLIDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C71520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropOverrideColliderConfig_TypeDefinitionIndex = 16684;

	class PropOverrideColliderConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 BottomOffset; // 0x10
		::System::Single Height; // 0x1C
		::System::Single Radius; // 0x20
		::System::Int32 Direction; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOVERRIDECOLLIDERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_03DAEB89B05256C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropOverrideColliderConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropOverrideColliderConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOVERRIDECOLLIDERCONFIG_METHOD_2_03DAEB89B05256C9_OFFSET))(a1, a2);
		}
	};
}
