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

#define MOLEMOLE_CONFIG_INTERACTENTRY_CREATEINTERACTINSTANCE_OFFSET UNITYSDK_OFFSET(0x10D11090)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GETACTIONLIST_OFFSET UNITYSDK_OFFSET(0x10D11190)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GETEFFINTERACTRANGE_OFFSET UNITYSDK_OFFSET(0x10D11020)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GETVALUELIST_OFFSET UNITYSDK_OFFSET(0x10D111F0)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GET_ISSUPPORTREPEAT_OFFSET UNITYSDK_OFFSET(0x10D10FC0)
#define MOLEMOLE_CONFIG_INTERACTENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10D110F0)
#define MOLEMOLE_CONFIG_INTERACTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x10D11250)
#define MOLEMOLE_CONFIG_INTERACTENTRY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10D11280)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntry_TypeDefinitionIndex = 53363;

	class InteractEntry : public ::System::Object
	{
	public:
		::MoleMole::Config::InteractEntryMode* mode; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* ZoneTagWhiteList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* ZoneTagBlackList; // 0x20
		::System::String* interactShowName; // 0x28
		::Il2CppArray<::System::String*>* fcEventArray; // 0x30
		::System::String* interactName; // 0x38
		::Il2CppArray<::System::String*>* addAbilityArray; // 0x40
		::System::Single maxAngle; // 0x48
		::System::Single interactRange; // 0x4C
		::System::Boolean limitSourceDirection; // 0x50
		::UnityEngine::Vector3 offset; // 0x54
		::MoleMole::Config::InteractTriggerMode triggerMode; // 0x60
		::System::Single limitSourceMaxAngle; // 0x64
		::System::Single excludeSourceMaxAngle; // 0x68
		::System::Single maxHeight; // 0x6C
		::System::Int32 interactCount; // 0x70

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
