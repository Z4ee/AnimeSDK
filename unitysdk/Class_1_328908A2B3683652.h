#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_882A7D00DFE0F598.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_2_197CC3E8889A3449;
namespace UnityEngine { class Transform; }

#define CLASS_1_328908A2B3683652__CTOR_OFFSET UNITYSDK_OFFSET(0x18D76F70)

inline static constexpr unsigned int Class_1_328908A2B3683652_TypeDefinitionIndex = 39519;

class Class_1_328908A2B3683652 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::Class_2_197CC3E8889A3449* Field_1_1; // 0x18
	::System::Nullable_1<::Struct_2_882A7D00DFE0F598> Field_1_2; // 0x20
	::UnityEngine::Vector3Int Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_328908A2B3683652__CTOR_OFFSET))(this);
	}
};
