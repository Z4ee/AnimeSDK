#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A3F7BC7FD0AC1E07.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_50957C778109E4D2_METHOD_1_D0F6029193BF3AF5_OFFSET UNITYSDK_OFFSET(0x1117C8F0)
#define CLASS_1_50957C778109E4D2_METHOD_1_DFCBD1685FB122E4_OFFSET UNITYSDK_OFFSET(0x1117CE00)
#define CLASS_1_50957C778109E4D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1117C8A0)

inline static constexpr unsigned int Class_1_50957C778109E4D2_TypeDefinitionIndex = 87054;

class Class_1_50957C778109E4D2 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_7; // 0x10
	::Struct_2_A3F7BC7FD0AC1E07 Field_1_0; // 0x18

	::System::Void _ctor(::System::String* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::RectTransform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_50957C778109E4D2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DFCBD1685FB122E4(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_50957C778109E4D2_METHOD_1_DFCBD1685FB122E4_OFFSET))(this, a1);
	}

	static ::Struct_2_A3F7BC7FD0AC1E07 Method_1_D0F6029193BF3AF5(::System::String* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::Struct_2_A3F7BC7FD0AC1E07(*)(::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_50957C778109E4D2_METHOD_1_D0F6029193BF3AF5_OFFSET))(a1, a2);
	}
};
