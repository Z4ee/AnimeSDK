#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGPLAYFILTERPLUGINSPECIALEFFECT_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x17539740)
#define MOLEMOLE_CONFIG_CONFIGPLAYFILTERPLUGINSPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x17539800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayFilterPluginSpecialEffect_TypeDefinitionIndex = 69324;

	class ConfigPlayFilterPluginSpecialEffect : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* effectKeys; // 0x18
		::System::Boolean doFilterChange; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYFILTERPLUGINSPECIALEFFECT__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYFILTERPLUGINSPECIALEFFECT_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
