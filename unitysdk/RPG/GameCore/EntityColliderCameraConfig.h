#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EntityColliderHeightCameraConfig; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }

#define RPG_GAMECORE_ENTITYCOLLIDERCAMERACONFIG_METHOD_2_E488470B7916462B_OFFSET UNITYSDK_OFFSET(0x196EAC50)
#define RPG_GAMECORE_ENTITYCOLLIDERCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196EADD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityColliderCameraConfig_TypeDefinitionIndex = 15609;

	class EntityColliderCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* KeyName; // 0x10
		::Il2CppArray<::RPG::GameCore::EntityColliderHeightCameraConfig*>* ConfigByHeight; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* OverrideByNameList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E488470B7916462B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityColliderCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityColliderCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERCAMERACONFIG_METHOD_2_E488470B7916462B_OFFSET))(a1, a2);
		}
	};
}
