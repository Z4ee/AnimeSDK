#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_53A2E307D92A577A.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_194AF035DF2F7DB0;
class Class_1_C18F998324203B33;
namespace MoleMole { class CustomCollisionConfigData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_2_823B87587A6A376C_METHOD_2_58FD9F07BD207E53_OFFSET UNITYSDK_OFFSET(0xE5840D0)
#define CLASS_2_823B87587A6A376C__CTOR_OFFSET UNITYSDK_OFFSET(0xE584070)

inline static constexpr unsigned int Class_2_823B87587A6A376C_TypeDefinitionIndex = 89923;

class Class_2_823B87587A6A376C : public ::Class_1_53A2E307D92A577A
{
public:
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_1; // 0x28
	::Class_1_C18F998324203B33* Field_2_0; // 0x30
	::UnityEngine::Ray Field_2_2; // 0x38

	::System::Void _ctor(::Class_1_194AF035DF2F7DB0* a1, ::MoleMole::CustomCollisionConfigData* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_194AF035DF2F7DB0*, ::MoleMole::CustomCollisionConfigData*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_823B87587A6A376C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_58FD9F07BD207E53(::Cinemachine::CameraState a1, ::System::Single a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_823B87587A6A376C_METHOD_2_58FD9F07BD207E53_OFFSET))(this, a1, a2, a3);
	}
};
