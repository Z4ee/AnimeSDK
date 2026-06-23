#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigShaderCustomBaseMap.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShaderCustomBaseMap_1_TypeDefinitionIndex = 62072;

	template <typename T>
	class ConfigShaderCustomBaseMap_1 : public ::MoleMole::Config::ConfigShaderCustomBaseMap
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, T>* DataMap; // 0x0
	};
}
