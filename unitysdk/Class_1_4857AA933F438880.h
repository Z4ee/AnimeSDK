#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4857AA933F438880_DeformMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_4857AA933F438880_ItemData;

#define CLASS_1_4857AA933F438880_METHOD_1_13F0FEDB1C58AAEC_OFFSET UNITYSDK_OFFSET(0x198727B0)
#define CLASS_1_4857AA933F438880_METHOD_1_266F68E5A23A0D2E_OFFSET UNITYSDK_OFFSET(0x19872420)
#define CLASS_1_4857AA933F438880_METHOD_1_C2FC09F0D0C7A1E9_OFFSET UNITYSDK_OFFSET(0x19872830)
#define CLASS_1_4857AA933F438880_METHOD_1_D2F0563CF77B4C21_OFFSET UNITYSDK_OFFSET(0x198736A0)
#define CLASS_1_4857AA933F438880__CTOR_OFFSET UNITYSDK_OFFSET(0x19873750)

inline static constexpr unsigned int Class_1_4857AA933F438880_TypeDefinitionIndex = 49311;

class Class_1_4857AA933F438880 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4857AA933F438880__CTOR_OFFSET))(this);
	}

	static ::Class_1_4857AA933F438880_ItemData* Method_1_266F68E5A23A0D2E(::UnityEngine::Vector4 a1, ::Class_1_4857AA933F438880_DeformMode a2)
	{
		return ((::Class_1_4857AA933F438880_ItemData*(*)(::UnityEngine::Vector4, ::Class_1_4857AA933F438880_DeformMode))((::PBYTE)hIl2Cpp + CLASS_1_4857AA933F438880_METHOD_1_266F68E5A23A0D2E_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector4 Method_1_C2FC09F0D0C7A1E9(::Class_1_4857AA933F438880_ItemData* a1, ::Class_1_4857AA933F438880_DeformMode a2)
	{
		return ((::UnityEngine::Vector4(*)(::Class_1_4857AA933F438880_ItemData*, ::Class_1_4857AA933F438880_DeformMode))((::PBYTE)hIl2Cpp + CLASS_1_4857AA933F438880_METHOD_1_C2FC09F0D0C7A1E9_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_13F0FEDB1C58AAEC(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4857AA933F438880_METHOD_1_13F0FEDB1C58AAEC_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_D2F0563CF77B4C21(::System::Single a1)
	{
		return ((::System::UInt32(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4857AA933F438880_METHOD_1_D2F0563CF77B4C21_OFFSET))(a1);
	}
};
