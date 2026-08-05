#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_1_194AF035DF2F7DB0;
class Class_1_C18F998324203B33;
namespace MoleMole { class CustomCollisionConfigData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_1_829E65A484EE12DD__CTOR_OFFSET UNITYSDK_OFFSET(0x133E4290)

inline static constexpr unsigned int Class_1_829E65A484EE12DD_TypeDefinitionIndex = 81111;

class Class_1_829E65A484EE12DD : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraDataAccessor* Field_1_5; // 0x10
	::Class_1_194AF035DF2F7DB0* Field_1_11; // 0x18
	::Class_1_C18F998324203B33* Field_1_6; // 0x20
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_7; // 0x28
	::MoleMole::CustomCollisionConfigData* Field_1_4; // 0x30
	::UnityEngine::Ray Field_1_0; // 0x38

	::System::Void _ctor(::Class_1_194AF035DF2F7DB0* a1, ::MoleMole::CustomCollisionConfigData* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_194AF035DF2F7DB0*, ::MoleMole::CustomCollisionConfigData*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_829E65A484EE12DD__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
