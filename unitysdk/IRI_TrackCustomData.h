#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseBuildingCustomData.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System { class String; }

#define IRI_TRACKCUSTOMDATA_METHOD_6_A2846FC5EA0763C6_OFFSET UNITYSDK_OFFSET(0x1241C290)
#define IRI_TRACKCUSTOMDATA_METHOD_6_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1241C210)
#define IRI_TRACKCUSTOMDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1241C1D0)
#define IRI_TRACKCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1241C2B0)

inline static constexpr unsigned int IRI_TrackCustomData_TypeDefinitionIndex = 43977;

class IRI_TrackCustomData : public ::IRI_BaseBuildingCustomData
{
public:
	::System::String* Lod0Path; // 0x40
	::System::String* GeneratorPath; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_TRACKCUSTOMDATA__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_TRACKCUSTOMDATA_ONENABLE_OFFSET))(this);
	}

	::System::Single Method_6_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_TRACKCUSTOMDATA_METHOD_6_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_6_A2846FC5EA0763C6()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_TRACKCUSTOMDATA_METHOD_6_A2846FC5EA0763C6_OFFSET))(this);
	}
};
