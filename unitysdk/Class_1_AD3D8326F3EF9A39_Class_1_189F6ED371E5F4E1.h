#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_204C453CC79AE4E0_1;

#define CLASS_1_AD3D8326F3EF9A39_CLASS_1_189F6ED371E5F4E1_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x1717B250)
#define CLASS_1_AD3D8326F3EF9A39_CLASS_1_189F6ED371E5F4E1_METHOD_1_FF5188F77C143723_OFFSET UNITYSDK_OFFSET(0x1717B490)
#define CLASS_1_AD3D8326F3EF9A39_CLASS_1_189F6ED371E5F4E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1717B240)

inline static constexpr unsigned int Class_1_AD3D8326F3EF9A39_Class_1_189F6ED371E5F4E1_TypeDefinitionIndex = 52851;

class Class_1_AD3D8326F3EF9A39_Class_1_189F6ED371E5F4E1 : public ::System::Object
{
public:
	::Class_1_204C453CC79AE4E0_1* Field_1_1; // 0x10
	::MoleMole::EntityHandle Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD3D8326F3EF9A39_CLASS_1_189F6ED371E5F4E1__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD3D8326F3EF9A39_CLASS_1_189F6ED371E5F4E1_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::System::Single Method_1_FF5188F77C143723()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD3D8326F3EF9A39_CLASS_1_189F6ED371E5F4E1_METHOD_1_FF5188F77C143723_OFFSET))(this);
	}
};
