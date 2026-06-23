#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseFunctionNode.h"

namespace MoleMole::Config { class ConfigUIBaseActionNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIANIMATIONFUNCTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3C920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIAnimationFunctionNode_TypeDefinitionIndex = 46187;

	class ConfigUIAnimationFunctionNode : public ::MoleMole::Config::ConfigUIBaseFunctionNode
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* InputIndexList; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* OutputIndexList; // 0x20
		::MoleMole::Config::ConfigUIBaseActionNode* ConfigAnimationNode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIANIMATIONFUNCTIONNODE__CTOR_OFFSET))(this);
		}
	};
}
