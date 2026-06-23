#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CATEGORYCHECKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x106AAAE0)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem_CategoryCheckState_TypeDefinitionIndex = 63605;

	class AreaCategoryInOutSubsystem_CategoryCheckState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* CachedAreas; // 0x10
		::MoleMole::Config::SceneConfigRuntimeDataArea NextHitArea; // 0x18
		::System::String* CurrentHitSceneNameId; // 0x58
		::MoleMole::Config::SceneConfigRuntimeDataArea CurrentHitArea; // 0x60
		::System::String* NextHitSceneNameId; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CATEGORYCHECKSTATE__CTOR_OFFSET))(this);
		}
	};
}
