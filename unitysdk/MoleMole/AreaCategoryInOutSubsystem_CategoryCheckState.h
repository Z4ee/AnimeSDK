#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CATEGORYCHECKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x167D4C50)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem_CategoryCheckState_TypeDefinitionIndex = 68259;

	class AreaCategoryInOutSubsystem_CategoryCheckState : public ::System::Object
	{
	public:
		::System::String* CurrentHitSceneNameId; // 0x10
		::System::String* NextHitSceneNameId; // 0x18
		::MoleMole::Config::SceneConfigRuntimeDataArea NextHitArea; // 0x20
		::MoleMole::Config::SceneConfigRuntimeDataArea CurrentHitArea; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* CachedAreas; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CATEGORYCHECKSTATE__CTOR_OFFSET))(this);
		}
	};
}
