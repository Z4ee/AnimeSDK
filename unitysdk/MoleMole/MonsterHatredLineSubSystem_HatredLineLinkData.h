#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/MonsterHatredLineSubSystem_HatredLineState.h"
#include "unitysdk/System/Object.h"

class Class_3_CF6254B260CF5CF4;
class Class_3_DFD5D1FDB9D2A4AC;
class ScreenSpaceSplineRenderer;
namespace System { class String; }

#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x125EC100)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_LINKTOWTARGET_OFFSET UNITYSDK_OFFSET(0x125EBB90)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_UNLINK_OFFSET UNITYSDK_OFFSET(0x125EBF60)
#define MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x125EC1B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterHatredLineSubSystem_HatredLineLinkData_TypeDefinitionIndex = 46103;

	class MonsterHatredLineSubSystem_HatredLineLinkData : public ::System::Object
	{
	public:
		::MoleMole::EntityHandle TargetEntity; // 0x10
		::MoleMole::EntityHandle SourceEntity; // 0x20
		::ScreenSpaceSplineRenderer* linkedSplineRenderer; // 0x30
		::Class_3_DFD5D1FDB9D2A4AC* sourceCharacterModelComponent; // 0x38
		::Class_3_CF6254B260CF5CF4* attackTargetComponent; // 0x40
		::MoleMole::MonsterHatredLineSubSystem_HatredLineState currentHatredLineState; // 0x48
		::System::Boolean assetLoaded; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA__CTOR_OFFSET))(this);
		}

		::System::Void LinkTowTarget(::System::String* enemyAttachPointName, ::System::String* playerAttachPointName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_LINKTOWTARGET_OFFSET))(this, enemyAttachPointName, playerAttachPointName);
		}

		::System::Void Unlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_UNLINK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERHATREDLINESUBSYSTEM_HATREDLINELINKDATA_CLEAR_OFFSET))(this);
		}
	};
}
