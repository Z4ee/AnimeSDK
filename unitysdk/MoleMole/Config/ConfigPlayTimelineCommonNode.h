#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPLAYTIMELINECOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x159F3E60)
#define MOLEMOLE_CONFIG_CONFIGPLAYTIMELINECOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x159F3ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayTimelineCommonNode_TypeDefinitionIndex = 59660;

	class ConfigPlayTimelineCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::StringUISpecialNum* TimelineKey; // 0x18
		::MoleMole::Config::StringUISpecialNum* ParentTransKey; // 0x20
		::MoleMole::Config::BoolUISpecialNum* IsSyncLoad; // 0x28
		::System::String* TimelineKey_BlackBoard; // 0x30
		::System::Boolean UseBlackBoard_TimelineKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYTIMELINECOMMONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYTIMELINECOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
