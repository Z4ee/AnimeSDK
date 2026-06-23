#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class Class_1_D72537470FC2F779;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCLEARICONANIMATION_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x18F30340)
#define MOLEMOLE_CONFIG_CONFIGCLEARICONANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18F30400)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigClearIconAnimation_TypeDefinitionIndex = 63516;

	class ConfigClearIconAnimation : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* OffsetList; // 0x18
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x20
		::System::Boolean UseSpecific; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLEARICONANIMATION__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCLEARICONANIMATION_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
