#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigChessEntity; }
namespace MoleMole { class ConfigChessEntityMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CONFIGCHESSENTITYDATA_GETCONFIGENTITY_OFFSET UNITYSDK_OFFSET(0x1948F8E0)
#define CONFIGCHESSENTITYDATA_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1948F5E0)
#define CONFIGCHESSENTITYDATA_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1948F6D0)
#define CONFIGCHESSENTITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1948F9F0)

inline static constexpr unsigned int ConfigChessEntityData_TypeDefinitionIndex = 60092;

class ConfigChessEntityData : public ::System::Object
{
public:
	static ::MoleMole::ConfigChessEntityMap** StaticGet_config()
	{
		return (::MoleMole::ConfigChessEntityMap**)Il2CppClass::FromTypeDefinitionIndex(ConfigChessEntityData_TypeDefinitionIndex)->GetStaticField(0x387B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATA__CTOR_OFFSET))(this);
	}

	static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATA_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
	}

	static ::System::Void ReloadFromFile(::System::Boolean isAync, ::System::Action* complete)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATA_RELOADFROMFILE_OFFSET))(isAync, complete);
	}

	static ::MoleMole::ConfigChessEntity* GetConfigEntity(::System::String* key)
	{
		return ((::MoleMole::ConfigChessEntity*(*)(::System::String*))((::PBYTE)hIl2Cpp + CONFIGCHESSENTITYDATA_GETCONFIGENTITY_OFFSET))(key);
	}
};
