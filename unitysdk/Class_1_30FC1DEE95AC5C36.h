#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5D178EC982C80153;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateSelectServantConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30FC1DEE95AC5C36_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x8D7DCB0)
#define CLASS_1_30FC1DEE95AC5C36_INIT_OFFSET UNITYSDK_OFFSET(0x8D7D040)
#define CLASS_1_30FC1DEE95AC5C36_METHOD_1_8689F0C786B03237_OFFSET UNITYSDK_OFFSET(0x8D7D6E0)
#define CLASS_1_30FC1DEE95AC5C36_REFRESH_OFFSET UNITYSDK_OFFSET(0x8D7D190)
#define CLASS_1_30FC1DEE95AC5C36_RESET_OFFSET UNITYSDK_OFFSET(0x8D7D0F0)
#define CLASS_1_30FC1DEE95AC5C36__CTOR_OFFSET UNITYSDK_OFFSET(0x8D7DCF0)

inline static constexpr unsigned int Class_1_30FC1DEE95AC5C36_TypeDefinitionIndex = 56900;

class Class_1_30FC1DEE95AC5C36 : public ::System::Object
{
public:
	::RPG::Client::CameraFightStateSelectServantConfig* Field_1_2; // 0x10
	::RPG::Client::CameraDataAndFlags* Field_1_1; // 0x18
	::Class_2_5D178EC982C80153* Field_1_0; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30FC1DEE95AC5C36__CTOR_OFFSET))(this);
	}

	::System::Void Init(::Class_2_5D178EC982C80153* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D178EC982C80153*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_1_30FC1DEE95AC5C36_INIT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30FC1DEE95AC5C36_RESET_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30FC1DEE95AC5C36_REFRESH_OFFSET))(this);
	}

	::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
	{
		return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30FC1DEE95AC5C36_GETFIGHTSTATECONFIG_OFFSET))(this);
	}

	::RPG::MVector3 Method_1_8689F0C786B03237(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_30FC1DEE95AC5C36_METHOD_1_8689F0C786B03237_OFFSET))(this, a1);
	}
};
