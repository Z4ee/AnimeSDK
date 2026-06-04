#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ENTITYCOLLIDERHEIGHTCAMERACONFIG_METHOD_2_35D1464FEA37EB89_OFFSET UNITYSDK_OFFSET(0x196EAF40)
#define RPG_GAMECORE_ENTITYCOLLIDERHEIGHTCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196EB0A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityColliderHeightCameraConfig_TypeDefinitionIndex = 15610;

	class EntityColliderHeightCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MinHeight; // 0x10
		::System::Single MaxHeight; // 0x14
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERHEIGHTCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_35D1464FEA37EB89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityColliderHeightCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityColliderHeightCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERHEIGHTCAMERACONFIG_METHOD_2_35D1464FEA37EB89_OFFSET))(a1, a2);
		}
	};
}
