#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_7E9140739F099B31_CLASS_1_65E5EF9512ECA137_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x18DE99A0)
#define CLASS_1_7E9140739F099B31_CLASS_1_65E5EF9512ECA137__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE9990)

inline static constexpr unsigned int Class_1_7E9140739F099B31_Class_1_65E5EF9512ECA137_TypeDefinitionIndex = 51217;

class Class_1_7E9140739F099B31_Class_1_65E5EF9512ECA137 : public ::System::Object
{
public:
	::NPCCrowd::Ability::FTransformFragment Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_CLASS_1_65E5EF9512ECA137__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9140739F099B31_CLASS_1_65E5EF9512ECA137_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}
};
