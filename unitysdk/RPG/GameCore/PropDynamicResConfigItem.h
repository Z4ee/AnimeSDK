#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropOverrideAnimLayerConfig; }
namespace RPG::GameCore { class PropOverrideColliderConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPDYNAMICRESCONFIGITEM_METHOD_2_186C98ED0A7577E4_OFFSET UNITYSDK_OFFSET(0x18C6A350)
#define RPG_GAMECORE_PROPDYNAMICRESCONFIGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6A530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDynamicResConfigItem_TypeDefinitionIndex = 16685;

	class PropDynamicResConfigItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* ConfigEntityPath; // 0x18
		::System::String* JsonPath; // 0x20
		::Il2CppArray<::RPG::GameCore::PropOverrideAnimLayerConfig*>* AnimLayerConfigs; // 0x28
		::RPG::GameCore::PropOverrideColliderConfig* ColliderConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDYNAMICRESCONFIGITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_186C98ED0A7577E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropDynamicResConfigItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropDynamicResConfigItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDYNAMICRESCONFIGITEM_METHOD_2_186C98ED0A7577E4_OFFSET))(a1, a2);
		}
	};
}
