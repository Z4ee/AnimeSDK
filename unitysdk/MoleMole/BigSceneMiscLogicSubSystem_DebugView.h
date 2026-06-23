#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class BigSceneMiscLogicSubSystem; }
namespace MoleMole { class BigSceneMiscLogicSubSystem_BigSceneCommonSkill; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DEBUGVIEW_GET__ACTIVATEDSKILL_OFFSET UNITYSDK_OFFSET(0x13FF0270)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DEBUGVIEW_GET__RUNTIMETAGS_OFFSET UNITYSDK_OFFSET(0x13FF0230)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DEBUGVIEW_GET__SKILLS_OFFSET UNITYSDK_OFFSET(0x13FF0250)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DEBUGVIEW_GET__STATICTAGS_OFFSET UNITYSDK_OFFSET(0x13FF00F0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DEBUGVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF0290)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_DebugView_TypeDefinitionIndex = 57042;

	class BigSceneMiscLogicSubSystem_DebugView : public ::System::Object
	{
	public:
		::MoleMole::BigSceneMiscLogicSubSystem* Owner; // 0x10
		::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* __staticTags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DEBUGVIEW__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Foundation::Unreal::FGameplayTag>* get__staticTags()
		{
			return ((::System::Collections::Generic::IList_1<::Foundation::Unreal::FGameplayTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DEBUGVIEW_GET__STATICTAGS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Foundation::Unreal::FGameplayTag>* get__runtimeTags()
		{
			return ((::System::Collections::Generic::IList_1<::Foundation::Unreal::FGameplayTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DEBUGVIEW_GET__RUNTIMETAGS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::MoleMole::BigSceneMiscLogicSubSystem_BigSceneCommonSkill*>* get__skills()
		{
			return ((::System::Collections::Generic::IList_1<::MoleMole::BigSceneMiscLogicSubSystem_BigSceneCommonSkill*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DEBUGVIEW_GET__SKILLS_OFFSET))(this);
		}

		::MoleMole::BigSceneMiscLogicSubSystem_BigSceneCommonSkill* get__activatedSkill()
		{
			return ((::MoleMole::BigSceneMiscLogicSubSystem_BigSceneCommonSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_DEBUGVIEW_GET__ACTIVATEDSKILL_OFFSET))(this);
		}
	};
}
