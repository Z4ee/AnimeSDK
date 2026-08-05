#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_45E02118116C45A5_CLASS_1_62C7BC526136B5E6_METHOD_1_6B791B1B1B8A536E_OFFSET UNITYSDK_OFFSET(0x120C0960)
#define CLASS_1_45E02118116C45A5_CLASS_1_62C7BC526136B5E6__CTOR_OFFSET UNITYSDK_OFFSET(0x120C0950)

inline static constexpr unsigned int Class_1_45E02118116C45A5_Class_1_62C7BC526136B5E6_TypeDefinitionIndex = 64805;

class Class_1_45E02118116C45A5_Class_1_62C7BC526136B5E6 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E02118116C45A5_CLASS_1_62C7BC526136B5E6__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_6B791B1B1B8A536E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E02118116C45A5_CLASS_1_62C7BC526136B5E6_METHOD_1_6B791B1B1B8A536E_OFFSET))(this);
	}
};
