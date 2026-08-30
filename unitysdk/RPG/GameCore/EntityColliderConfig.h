#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarColliderCameraConfig; }
namespace RPG::GameCore { class EntityColliderCameraConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYCOLLIDERCONFIG_METHOD_2_2F340964F90CB45E_OFFSET UNITYSDK_OFFSET(0x1D7C3A50)
#define RPG_GAMECORE_ENTITYCOLLIDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C3BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityColliderConfig_TypeDefinitionIndex = 16382;

	class EntityColliderConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AvatarColliderCameraConfig*>* AvatarColliderCameraConfigs; // 0x10
		::Il2CppArray<::RPG::GameCore::EntityColliderCameraConfig*>* EntityColliderCameraConfigList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2F340964F90CB45E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityColliderConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityColliderConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERCONFIG_METHOD_2_2F340964F90CB45E_OFFSET))(a1, a2);
		}
	};
}
