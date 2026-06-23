#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIAvatarLightSetting; }
namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_B850E47831238E71_METHOD_2_23EC84018340F48F_OFFSET UNITYSDK_OFFSET(0x798CB0)
#define STRUCT_2_B850E47831238E71_METHOD_2_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x798CC0)
#define STRUCT_2_B850E47831238E71_METHOD_2_AB7FA3C3A4CF154D_OFFSET UNITYSDK_OFFSET(0x798CA0)
#define STRUCT_2_B850E47831238E71_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x693710)

inline static constexpr unsigned int Struct_2_B850E47831238E71_TypeDefinitionIndex = 47587;

struct alignas(8) Struct_2_B850E47831238E71
{
	::MoleMole::EAvatarLightChangeType Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::UnityEngine::Vector2 Field_2_3; // 0x1C
	::UnityEngine::Vector2 Field_2_4; // 0x24
	::UnityEngine::AnimationCurve* Field_2_5; // 0x30

	::UnityEngine::Vector2 Method_2_AB7FA3C3A4CF154D(::MoleMole::UIAvatarLightSetting* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_B850E47831238E71_METHOD_2_AB7FA3C3A4CF154D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_2_23EC84018340F48F(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_B850E47831238E71_METHOD_2_23EC84018340F48F_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_B850E47831238E71_METHOD_2_570C5557A774C69E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B850E47831238E71_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
