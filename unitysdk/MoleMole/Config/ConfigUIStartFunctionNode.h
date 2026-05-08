#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseFunctionNode.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUISTARTFUNCTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11032110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIStartFunctionNode_TypeDefinitionIndex = 63187;

	class ConfigUIStartFunctionNode : public ::MoleMole::Config::ConfigUIBaseFunctionNode
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* OutputIndexList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISTARTFUNCTIONNODE__CTOR_OFFSET))(this);
		}
	};
}
