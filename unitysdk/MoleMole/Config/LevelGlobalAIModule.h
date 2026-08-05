#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AttackType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AttackCDUpdateData; }
namespace MoleMole::Config { class LevelGlobalAIBTreeData; }
namespace MoleMole::Config { class LevelGlobalAICounterstrokeData; }
namespace MoleMole::Config { class LevelGlobalAICustomTagData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LEVELGLOBALAIMODULE_GET_CUSTOMTAGCONFIGDICT_OFFSET UNITYSDK_OFFSET(0x1350E090)
#define MOLEMOLE_CONFIG_LEVELGLOBALAIMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1350E2D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAIModule_TypeDefinitionIndex = 71380;

	class LevelGlobalAIModule : public ::System::Object
	{
	public:
		::System::Int32 AvatarBeAttackMaxNum; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* AtkRemoveCD; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::System::Int32>* AvatarBeAttackTypeMaxNum; // 0x20
		::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::System::Int32>* LeftOnlyTypeAddNumDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::System::Single>* AttackTypeActionModeCoolDownTime; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Config::LevelGlobalAICustomTagData*>* CustomTagConfig; // 0x38
		::MoleMole::Config::LevelGlobalAIBTreeData* AiBTreeData; // 0x40
		::MoleMole::Config::LevelGlobalAICounterstrokeData* CounterstrokeData; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::Config::AttackCDUpdateData*>* AttackCdUpdateData; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LevelGlobalAICustomTagData*>* _customTagConfigDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAIMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LevelGlobalAICustomTagData*>* get_CustomTagConfigDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LevelGlobalAICustomTagData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAIMODULE_GET_CUSTOMTAGCONFIGDICT_OFFSET))(this);
		}
	};
}
