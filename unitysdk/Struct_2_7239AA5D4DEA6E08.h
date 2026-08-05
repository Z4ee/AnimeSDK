#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_7239AA5D4DEA6E08_METHOD_2_23EC84018340F48F_OFFSET UNITYSDK_OFFSET(0x632250)
#define STRUCT_2_7239AA5D4DEA6E08_METHOD_2_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x632270)
#define STRUCT_2_7239AA5D4DEA6E08_METHOD_2_A6618F8589034EC1_OFFSET UNITYSDK_OFFSET(0x632240)
#define STRUCT_2_7239AA5D4DEA6E08_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x632260)

inline static constexpr unsigned int Struct_2_7239AA5D4DEA6E08_TypeDefinitionIndex = 52961;

struct alignas(8) Struct_2_7239AA5D4DEA6E08
{
	::MoleMole::EAvatarLightChangeType Field_2_0; // 0x10
	::System::Single Field_2_7; // 0x14
	::System::Single Field_2_6; // 0x18
	::UnityEngine::Vector2 Field_2_5; // 0x1C
	::UnityEngine::Vector2 Field_2_4; // 0x24
	::UnityEngine::AnimationCurve* Field_2_11; // 0x30

	::UnityEngine::Vector2 Method_2_A6618F8589034EC1(::MoleMole::EAvatarLightChangeType a1, ::System::Single a2, ::System::String* a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::EAvatarLightChangeType, ::System::Single, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_7239AA5D4DEA6E08_METHOD_2_A6618F8589034EC1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector2 Method_2_23EC84018340F48F(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_7239AA5D4DEA6E08_METHOD_2_23EC84018340F48F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7239AA5D4DEA6E08_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_2_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_7239AA5D4DEA6E08_METHOD_2_570C5557A774C69E_OFFSET))(this, a1);
	}
};
