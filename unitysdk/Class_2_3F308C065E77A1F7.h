#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F77BB6F5FCE2E0B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_2_3F308C065E77A1F7_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x92354B0)
#define CLASS_2_3F308C065E77A1F7__CTOR_OFFSET UNITYSDK_OFFSET(0x9235650)
#define CLASS_2_3F308C065E77A1F7___IFIXBASEPROXY_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9235660)

inline static constexpr unsigned int Class_2_3F308C065E77A1F7_TypeDefinitionIndex = 67541;

class Class_2_3F308C065E77A1F7 : public ::Class_1_5F77BB6F5FCE2E0B
{
public:
	::System::String* Field_2_0; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3F308C065E77A1F7__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F308C065E77A1F7_GET_POSITION_OFFSET))(this);
	}

	::UnityEngine::Vector3 __iFixBaseProxy_get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F308C065E77A1F7___IFIXBASEPROXY_GET_POSITION_OFFSET))(this);
	}
};
