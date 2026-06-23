#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B3DC68436059CEA0.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class VESequenceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE_GETALLVEKEY_OFFSET UNITYSDK_OFFSET(0x10D0B0F0)
#define MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x10D0B070)
#define MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0B170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlaySequenceVENode_TypeDefinitionIndex = 76075;

	class ConfigPlaySequenceVENode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* SwitchStartEffectPath; // 0x18
		::System::String* SwitchEndEffectPath; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::VESequenceInfo*>* VESequenceInfoList; // 0x28
		::System::Boolean isOnlyVisbile; // 0x30
		::Enum_3_B3DC68436059CEA0 PlayMode; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GetAllVEKey()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYSEQUENCEVENODE_GETALLVEKEY_OFFSET))(this);
		}
	};
}
