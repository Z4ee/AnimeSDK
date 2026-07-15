#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CameraForwardAttachType.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA_METHOD_3_07A8BAC121A8E18D_OFFSET UNITYSDK_OFFSET(0x1B708CB0)
#define RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA_METHOD_3_BF92578ED234D7CA_OFFSET UNITYSDK_OFFSET(0x1B708D10)
#define RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B708D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraForwardWithDetectProjectileData_TypeDefinitionIndex = 15063;

	class CameraForwardWithDetectProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::System::Single CollisionEnableDelay; // 0xB8
		::System::Single MaxLifeTime; // 0xBC
		::RPG::GameCore::CameraForwardAttachType AttachType; // 0xC0
		::System::String* AttachUniqueEffectName; // 0xC8
		::System::String* AttachEffectPoint; // 0xD0
		::RPG::GameCore::DynamicFloat* ForwardDistanceOffset; // 0xD8
		::RPG::GameCore::DynamicFloat* PitchAngleOffset; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07A8BAC121A8E18D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CameraForwardWithDetectProjectileData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CameraForwardWithDetectProjectileData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA_METHOD_3_07A8BAC121A8E18D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF92578ED234D7CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CameraForwardWithDetectProjectileData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CameraForwardWithDetectProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERAFORWARDWITHDETECTPROJECTILEDATA_METHOD_3_BF92578ED234D7CA_OFFSET))(a1, a2);
		}
	};
}
