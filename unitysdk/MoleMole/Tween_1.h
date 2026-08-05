#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Tweener.h"

namespace MoleMole
{
	inline static constexpr unsigned int Tween_1_TypeDefinitionIndex = 84819;

	template <typename T>
	class Tween_1 : public ::MoleMole::Tweener
	{
	public:
		T from; // 0x0
		T to; // 0x0
		T Field_6_6; // 0x0
	};
}
