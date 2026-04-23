#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCasterToTargetConfig; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define CLASS_1_B959EB0F188E6020_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xD9CAB30)
#define CLASS_1_B959EB0F188E6020_INIT_OFFSET UNITYSDK_OFFSET(0xD9C9C60)
#define CLASS_1_B959EB0F188E6020_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0xD9CAB70)
#define CLASS_1_B959EB0F188E6020_METHOD_1_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0xD9C9DA0)
#define CLASS_1_B959EB0F188E6020_METHOD_1_E78A40FE178718CB_1_OFFSET UNITYSDK_OFFSET(0xD9CCA60)
#define CLASS_1_B959EB0F188E6020_METHOD_1_E78A40FE178718CB_OFFSET UNITYSDK_OFFSET(0xD9CC8B0)
#define CLASS_1_B959EB0F188E6020_REFRESH_OFFSET UNITYSDK_OFFSET(0xD9CAAF0)
#define CLASS_1_B959EB0F188E6020_RESET_OFFSET UNITYSDK_OFFSET(0xD9C9D00)
#define CLASS_1_B959EB0F188E6020__CTOR_OFFSET UNITYSDK_OFFSET(0xD9CCC10)

inline static constexpr unsigned int Class_1_B959EB0F188E6020_TypeDefinitionIndex = 64138;

class Class_1_B959EB0F188E6020 : public ::System::Object
{
public:
	::RPG::Client::CameraDataAndFlags* Field_1_1; // 0x10
	::Class_2_5D178EC982C80153* Field_1_0; // 0x18
	::RPG::Client::CameraFightStateCasterToTargetConfig* Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_5; // 0x28
	::UnityEngine::Vector3 Field_1_6; // 0x34
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_3; // 0x40
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B959EB0F188E6020__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_5D178EC982C80153* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B959EB0F188E6020_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B959EB0F188E6020_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B959EB0F188E6020_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B959EB0F188E6020_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::System::Void Method_1_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B959EB0F188E6020_METHOD_1_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void Method_1_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B959EB0F188E6020_METHOD_1_2157CED3CDDF8996_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_E78A40FE178718CB(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B959EB0F188E6020_METHOD_1_E78A40FE178718CB_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_E78A40FE178718CB_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B959EB0F188E6020_METHOD_1_E78A40FE178718CB_1_OFFSET))(this, a1, a2, a3);
	}
};
