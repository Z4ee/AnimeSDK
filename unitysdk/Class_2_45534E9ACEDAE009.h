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

#define CLASS_2_45534E9ACEDAE009_METHOD_2_D7DAD0FC0B967F29_OFFSET UNITYSDK_OFFSET(0x12E25600)
#define CLASS_2_45534E9ACEDAE009__CTOR_OFFSET UNITYSDK_OFFSET(0x12E255A0)

inline static constexpr unsigned int Class_2_45534E9ACEDAE009_TypeDefinitionIndex = 43062;

class Class_2_45534E9ACEDAE009 : public ::Class_1_53A2E307D92A577A
{
public:
	::Class_1_C18F998324203B33* Field_2_2; // 0x28
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_2_1; // 0x30
	::UnityEngine::Ray Field_2_0; // 0x38

	::System::Void _ctor(::Class_1_194AF035DF2F7DB0* a1, ::MoleMole::CustomCollisionConfigData* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_194AF035DF2F7DB0*, ::MoleMole::CustomCollisionConfigData*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_45534E9ACEDAE009__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D7DAD0FC0B967F29(::Cinemachine::CameraState a1, ::System::Single a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_45534E9ACEDAE009_METHOD_2_D7DAD0FC0B967F29_OFFSET))(this, a1, a2, a3);
	}
};
