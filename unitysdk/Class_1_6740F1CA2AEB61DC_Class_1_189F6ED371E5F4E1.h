#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_204C453CC79AE4E0_2;

#define CLASS_1_6740F1CA2AEB61DC_CLASS_1_189F6ED371E5F4E1_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x1515EE70)
#define CLASS_1_6740F1CA2AEB61DC_CLASS_1_189F6ED371E5F4E1_METHOD_1_FF5188F77C143723_OFFSET UNITYSDK_OFFSET(0x1515F0B0)
#define CLASS_1_6740F1CA2AEB61DC_CLASS_1_189F6ED371E5F4E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1515EE60)

inline static constexpr unsigned int Class_1_6740F1CA2AEB61DC_Class_1_189F6ED371E5F4E1_TypeDefinitionIndex = 67680;

class Class_1_6740F1CA2AEB61DC_Class_1_189F6ED371E5F4E1 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_2; // 0x10
	::Class_1_204C453CC79AE4E0_2* Field_1_1; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_CLASS_1_189F6ED371E5F4E1__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_CLASS_1_189F6ED371E5F4E1_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::System::Single Method_1_FF5188F77C143723()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_CLASS_1_189F6ED371E5F4E1_METHOD_1_FF5188F77C143723_OFFSET))(this);
	}
};
