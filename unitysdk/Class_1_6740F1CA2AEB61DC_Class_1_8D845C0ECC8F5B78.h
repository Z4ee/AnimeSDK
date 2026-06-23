#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6740F1CA2AEB61DC_Class_1_119FA23D89A6928A_24;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_6740F1CA2AEB61DC_CLASS_1_8D845C0ECC8F5B78_METHOD_1_31B71B6D307F7F0C_OFFSET UNITYSDK_OFFSET(0x147CD660)
#define CLASS_1_6740F1CA2AEB61DC_CLASS_1_8D845C0ECC8F5B78__CTOR_OFFSET UNITYSDK_OFFSET(0x147CD650)

inline static constexpr unsigned int Class_1_6740F1CA2AEB61DC_Class_1_8D845C0ECC8F5B78_TypeDefinitionIndex = 67678;

class Class_1_6740F1CA2AEB61DC_Class_1_8D845C0ECC8F5B78 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::Class_1_6740F1CA2AEB61DC_Class_1_119FA23D89A6928A_24* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_CLASS_1_8D845C0ECC8F5B78__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_31B71B6D307F7F0C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_CLASS_1_8D845C0ECC8F5B78_METHOD_1_31B71B6D307F7F0C_OFFSET))(this);
	}
};
