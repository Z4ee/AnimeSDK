#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_83C56BD9A06FA6EA.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class FiveDimConveyorConfig; }

#define CLASS_1_3E340ADED0D689E0_METHOD_1_970BCCE76DD4D0DD_OFFSET UNITYSDK_OFFSET(0x1682DDB0)
#define CLASS_1_3E340ADED0D689E0_METHOD_1_BDDA6FB35CD1559B_OFFSET UNITYSDK_OFFSET(0x1682E3F0)
#define CLASS_1_3E340ADED0D689E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1682E790)

inline static constexpr unsigned int Class_1_3E340ADED0D689E0_TypeDefinitionIndex = 33497;

class Class_1_3E340ADED0D689E0 : public ::System::Object
{
public:
	::Struct_2_83C56BD9A06FA6EA Field_1_1; // 0x10
	::RPG::GameCore::FiveDimConveyorConfig* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E340ADED0D689E0__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_970BCCE76DD4D0DD(::Struct_2_EAC1BB0F093534A5 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3E340ADED0D689E0_METHOD_1_970BCCE76DD4D0DD_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_BDDA6FB35CD1559B(::Struct_2_EAC1BB0F093534A5 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3E340ADED0D689E0_METHOD_1_BDDA6FB35CD1559B_OFFSET))(this, a1, a2, a3);
	}
};
