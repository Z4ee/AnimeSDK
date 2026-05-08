#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractTriggerMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_35D50070BC469EAB;
namespace MoleMole::Config { class InteractEntryMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_INTERACTENTRY_CREATEINTERACTINSTANCE_OFFSET UNITYSDK_OFFSET(0x142524A0)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GETACTIONLIST_OFFSET UNITYSDK_OFFSET(0x142525A0)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GETEFFINTERACTRANGE_OFFSET UNITYSDK_OFFSET(0x14252430)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GETVALUELIST_OFFSET UNITYSDK_OFFSET(0x14252600)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GET_ISSUPPORTREPEAT_OFFSET UNITYSDK_OFFSET(0x142523D0)
#define MOLEMOLE_CONFIG_INTERACTENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14252500)
#define MOLEMOLE_CONFIG_INTERACTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x14252660)
#define MOLEMOLE_CONFIG_INTERACTENTRY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14252690)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntry_TypeDefinitionIndex = 68133;

	class InteractEntry : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ZoneTagBlackList; // 0x10
		::Il2CppArray<::System::String*>* fcEventArray; // 0x18
		::System::String* interactShowName; // 0x20
		::System::String* interactName; // 0x28
		::Il2CppArray<::System::String*>* addAbilityArray; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* ZoneTagWhiteList; // 0x38
		::MoleMole::Config::InteractEntryMode* mode; // 0x40
		::System::Single maxAngle; // 0x48
		::System::Int32 interactCount; // 0x4C
		::MoleMole::Config::InteractTriggerMode triggerMode; // 0x50
		::System::Single interactRange; // 0x54
		::UnityEngine::Vector3 offset; // 0x58
		::System::Single excludeSourceMaxAngle; // 0x64
		::System::Boolean limitSourceDirection; // 0x68
		::System::Single limitSourceMaxAngle; // 0x6C
		::System::Single maxHeight; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSupportRepeat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_GET_ISSUPPORTREPEAT_OFFSET))(this);
		}

		::System::Boolean GetEffInteractRange(::System::Single& effRadius)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_GETEFFINTERACTRANGE_OFFSET))(this, effRadius);
		}

		::Class_1_35D50070BC469EAB* CreateInteractInstance()
		{
			return ((::Class_1_35D50070BC469EAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_CREATEINTERACTINSTANCE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_TOSTRING_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetActionList()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_GETACTIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetValueList()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_GETVALUELIST_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
