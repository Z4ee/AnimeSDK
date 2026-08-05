#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIMainPageBG3DModelController; }
namespace UnityEngine { class GameObject; }

namespace MoleMole
{
	inline static constexpr unsigned int UIMainPageBG3DModelController___c__DisplayClass59_0_TypeDefinitionIndex = 40750;

	struct alignas(8) UIMainPageBG3DModelController___c__DisplayClass59_0
	{
		::MoleMole::UIMainPageBG3DModelController* __4__this; // 0x10
		::MoleMole::AvatarShowSetting* showSetting; // 0x18
		::UnityEngine::GameObject* go; // 0x20
		::System::Single shaderUIOutLine; // 0x28
		::System::Int32 curRandomInt; // 0x2C
	};
}
