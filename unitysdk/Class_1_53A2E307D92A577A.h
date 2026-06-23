#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_194AF035DF2F7DB0;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole { class CustomCollisionConfigData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_1_53A2E307D92A577A_METHOD_1_298110F0381D365B_OFFSET UNITYSDK_OFFSET(0xD32D920)
#define CLASS_1_53A2E307D92A577A_METHOD_1_4C61A9EC49EFFA3D_OFFSET UNITYSDK_OFFSET(0xD32D990)
#define CLASS_1_53A2E307D92A577A_METHOD_1_C3E8CCDAE55E1C16_OFFSET UNITYSDK_OFFSET(0xD32D980)
#define CLASS_1_53A2E307D92A577A__CTOR_OFFSET UNITYSDK_OFFSET(0xD32D910)

inline static constexpr unsigned int Class_1_53A2E307D92A577A_TypeDefinitionIndex = 54763;

class Class_1_53A2E307D92A577A : public ::System::Object
{
public:
	::Class_1_194AF035DF2F7DB0* Field_1_2; // 0x10
	::MoleMole::Cameras::CameraDataAccessor* Field_1_0; // 0x18
	::MoleMole::CustomCollisionConfigData* Field_1_1; // 0x20

	::System::Void _ctor(::Class_1_194AF035DF2F7DB0* a1, ::MoleMole::CustomCollisionConfigData* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_194AF035DF2F7DB0*, ::MoleMole::CustomCollisionConfigData*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_53A2E307D92A577A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_298110F0381D365B(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_1_53A2E307D92A577A_METHOD_1_298110F0381D365B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C3E8CCDAE55E1C16(::MoleMole::CustomCollisionConfigData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CustomCollisionConfigData*))((::PBYTE)hIl2Cpp + CLASS_1_53A2E307D92A577A_METHOD_1_C3E8CCDAE55E1C16_OFFSET))(this, a1);
	}

	::MoleMole::CustomCollisionConfigData* Method_1_4C61A9EC49EFFA3D()
	{
		return ((::MoleMole::CustomCollisionConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53A2E307D92A577A_METHOD_1_4C61A9EC49EFFA3D_OFFSET))(this);
	}
};
