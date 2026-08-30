#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_882A7D00DFE0F598.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_2_197CC3E8889A3449;
namespace UnityEngine { class Transform; }

#define CLASS_1_328908A2B3683652__CTOR_OFFSET UNITYSDK_OFFSET(0x1C756BE0)

inline static constexpr unsigned int Class_1_328908A2B3683652_TypeDefinitionIndex = 41207;

class Class_1_328908A2B3683652 : public ::System::Object
{
public:
	::UnityEngine::Transform* HPKFMJOMHFI; // 0x10
	::Class_2_197CC3E8889A3449* FNPCCACIFBF; // 0x18
	::System::Nullable_1<::Struct_2_882A7D00DFE0F598> FJGJDPKCKLK; // 0x20
	::UnityEngine::Vector3Int IGDPLGAGAHF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_328908A2B3683652__CTOR_OFFSET))(this);
	}
};
