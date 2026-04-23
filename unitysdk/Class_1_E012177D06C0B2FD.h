#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarAssetPreloadConfig; }
namespace RPG::GameCore { class DeviceSettingConfig; }
namespace RPG::GameCore { class FrameTimeBudgetInfo; }
namespace RPG::GameCore { class GameObjectPoolSetting; }
namespace RPG::GameCore { class MonsterAssetPreloadConfig; }
namespace System { class String; }

#define CLASS_1_E012177D06C0B2FD_METHOD_1_7A299E5A4491551D_OFFSET UNITYSDK_OFFSET(0x111B4890)
#define CLASS_1_E012177D06C0B2FD__CTOR_OFFSET UNITYSDK_OFFSET(0x111B4A80)

inline static constexpr unsigned int Class_1_E012177D06C0B2FD_TypeDefinitionIndex = 62957;

class Class_1_E012177D06C0B2FD : public ::System::Object
{
public:
	::RPG::GameCore::MonsterAssetPreloadConfig* Field_1_3; // 0x10
	::RPG::GameCore::FrameTimeBudgetInfo* Field_1_1; // 0x18
	::RPG::GameCore::AvatarAssetPreloadConfig* Field_1_2; // 0x20
	::RPG::GameCore::GameObjectPoolSetting* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E012177D06C0B2FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7A299E5A4491551D(::RPG::GameCore::DeviceSettingConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DeviceSettingConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E012177D06C0B2FD_METHOD_1_7A299E5A4491551D_OFFSET))(this, a1);
	}
};
