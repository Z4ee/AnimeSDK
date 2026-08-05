#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MODIFYHOLLOWPARTICLEHDRCONFIG_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1C470700)
#define MOLEMOLE_CONFIG_MODIFYHOLLOWPARTICLEHDRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4707C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ModifyHollowParticleHDRConfig_TypeDefinitionIndex = 59060;

	class ModifyHollowParticleHDRConfig : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ModifyPath; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Single Intensity; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODIFYHOLLOWPARTICLEHDRCONFIG__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MODIFYHOLLOWPARTICLEHDRCONFIG_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
