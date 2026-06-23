#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseObjectUISpecialNum.h"

namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int TValueUISpecialNum_1_TypeDefinitionIndex = 45031;

	template <typename T>
	class TValueUISpecialNum_1 : public ::MoleMole::Config::BaseObjectUISpecialNum
	{
	public:
		T value; // 0x0
	};
}
