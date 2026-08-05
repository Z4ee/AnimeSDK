#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class Class_1_816D4E2238E8C24A;
namespace MoleMole { class AniamtorParamsSetting; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1B4E8FC0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0x1B4E9090)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B4E8CD0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_GET_DEFAULTDROP_OFFSET UNITYSDK_OFFSET(0x1B4E8DD0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_GET_DEFAULTINTERACTANIMATION_OFFSET UNITYSDK_OFFSET(0x1B4E8E70)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_GET_DEFAULTINTERACTCHANGEMODEL_OFFSET UNITYSDK_OFFSET(0x1B4E8F10)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_GET_ISSUPPORTREPEAT_OFFSET UNITYSDK_OFFSET(0x1B4E8FB0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_SET_DEFAULTDROP_OFFSET UNITYSDK_OFFSET(0x1B4E8E60)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_SET_DEFAULTINTERACTANIMATION_OFFSET UNITYSDK_OFFSET(0x1B4E8F00)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_SET_DEFAULTINTERACTCHANGEMODEL_OFFSET UNITYSDK_OFFSET(0x1B4E8FA0)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E9130)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x1B4E9140)
#define MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION___BASE_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0x1B4E91D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntityMode_Collection_TypeDefinitionIndex = 53060;

	class InteractEntityMode_Collection : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		// static const ::System::String* ON_FORBIDDEN; // 0x0
		// static const ::System::String* ON_FORBIDDEN_REASON; // 0x0
		::Il2CppArray<::MoleMole::AniamtorParamsSetting*>* InteractAnimations; // 0x20
		::Il2CppArray<::System::String*>* dropItems; // 0x28
		::Il2CppArray<::System::String*>* CollectedChangeModel; // 0x30
		::System::Single CD; // 0x38
		::System::Single IncreaseCD; // 0x3C
		::System::Int32 MaxInteractCount; // 0x40
		::System::Single InitialCD; // 0x44
		::System::Int32 overridePickType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION__CTOR_OFFSET))(this);
		}

		::Class_1_816D4E2238E8C24A* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::Class_1_816D4E2238E8C24A*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::String* get_DefaultDrop()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_GET_DEFAULTDROP_OFFSET))(this);
		}

		::System::Void set_DefaultDrop(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_SET_DEFAULTDROP_OFFSET))(this, value);
		}

		::MoleMole::AniamtorParamsSetting* get_DefaultInteractAnimation()
		{
			return ((::MoleMole::AniamtorParamsSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_GET_DEFAULTINTERACTANIMATION_OFFSET))(this);
		}

		::System::Void set_DefaultInteractAnimation(::MoleMole::AniamtorParamsSetting* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AniamtorParamsSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_SET_DEFAULTINTERACTANIMATION_OFFSET))(this, value);
		}

		::System::String* get_DefaultInteractChangeModel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_GET_DEFAULTINTERACTCHANGEMODEL_OFFSET))(this);
		}

		::System::Void set_DefaultInteractChangeModel(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_SET_DEFAULTINTERACTCHANGEMODEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsSupportRepeat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_GET_ISSUPPORTREPEAT_OFFSET))(this);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void CheckValueContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION_CHECKVALUECONTENT_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void __base_CheckValueContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTITYMODE_COLLECTION___BASE_CHECKVALUECONTENT_OFFSET))(this);
		}
	};
}
