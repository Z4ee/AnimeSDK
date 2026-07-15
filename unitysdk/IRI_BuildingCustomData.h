#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseBuildingCustomData.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System { class String; }

#define IRI_BUILDINGCUSTOMDATA_METHOD_6_A2846FC5EA0763C6_OFFSET UNITYSDK_OFFSET(0x17506370)
#define IRI_BUILDINGCUSTOMDATA_METHOD_6_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x175062F0)
#define IRI_BUILDINGCUSTOMDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x175062B0)
#define IRI_BUILDINGCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17506390)

inline static constexpr unsigned int IRI_BuildingCustomData_TypeDefinitionIndex = 45378;

class IRI_BuildingCustomData : public ::IRI_BaseBuildingCustomData
{
public:
	::System::String* Lod0Path; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGCUSTOMDATA__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGCUSTOMDATA_ONENABLE_OFFSET))(this);
	}

	::System::Single Method_6_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGCUSTOMDATA_METHOD_6_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_6_A2846FC5EA0763C6()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGCUSTOMDATA_METHOD_6_A2846FC5EA0763C6_OFFSET))(this);
	}
};
