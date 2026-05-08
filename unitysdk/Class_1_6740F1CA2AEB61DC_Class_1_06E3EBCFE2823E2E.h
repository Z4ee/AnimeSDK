#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6740F1CA2AEB61DC_CLASS_1_06E3EBCFE2823E2E_METHOD_1_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0x12471F70)
#define CLASS_1_6740F1CA2AEB61DC_CLASS_1_06E3EBCFE2823E2E_METHOD_1_DC6E236300D681AD_OFFSET UNITYSDK_OFFSET(0x12471D40)
#define CLASS_1_6740F1CA2AEB61DC_CLASS_1_06E3EBCFE2823E2E__CTOR_OFFSET UNITYSDK_OFFSET(0x12471D30)

inline static constexpr unsigned int Class_1_6740F1CA2AEB61DC_Class_1_06E3EBCFE2823E2E_TypeDefinitionIndex = 49721;

class Class_1_6740F1CA2AEB61DC_Class_1_06E3EBCFE2823E2E : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_CLASS_1_06E3EBCFE2823E2E__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_DC6E236300D681AD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_CLASS_1_06E3EBCFE2823E2E_METHOD_1_DC6E236300D681AD_OFFSET))(this);
	}

	::System::Single Method_1_D3CDDBF95A81E584()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6740F1CA2AEB61DC_CLASS_1_06E3EBCFE2823E2E_METHOD_1_D3CDDBF95A81E584_OFFSET))(this);
	}
};
