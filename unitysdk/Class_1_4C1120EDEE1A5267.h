#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_83C56BD9A06FA6EA.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class FiveDimConveyorConfig; }

#define CLASS_1_4C1120EDEE1A5267_METHOD_1_3B9ED16FECAE18EA_OFFSET UNITYSDK_OFFSET(0x1AA086A0)
#define CLASS_1_4C1120EDEE1A5267_METHOD_1_C40F73D66FB26816_OFFSET UNITYSDK_OFFSET(0x1AA08850)
#define CLASS_1_4C1120EDEE1A5267__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA08A90)

inline static constexpr unsigned int Class_1_4C1120EDEE1A5267_TypeDefinitionIndex = 41831;

class Class_1_4C1120EDEE1A5267 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimConveyorConfig* EABKOHGCHFP; // 0x10
	::Struct_2_83C56BD9A06FA6EA BPAPBAFOMCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C1120EDEE1A5267__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_3B9ED16FECAE18EA(::Struct_2_EAC1BB0F093534A5 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4C1120EDEE1A5267_METHOD_1_3B9ED16FECAE18EA_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_C40F73D66FB26816(::Struct_2_EAC1BB0F093534A5 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4C1120EDEE1A5267_METHOD_1_C40F73D66FB26816_OFFSET))(this, a1, a2, a3);
	}
};
