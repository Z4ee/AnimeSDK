#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBlackCurtain; }
namespace MoleMole::Config { class ConfigBlackCurtains; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLACKCURTAINCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1AC3D090)
#define BLACKCURTAINCONFIG_REALODDATA_OFFSET UNITYSDK_OFFSET(0x1AC3D1D0)
#define BLACKCURTAINCONFIG_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1AC3CF80)
#define BLACKCURTAINCONFIG_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1AC3CDB0)
#define BLACKCURTAINCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC3D520)
#define BLACKCURTAINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC3D510)

inline static constexpr unsigned int BlackCurtainConfig_TypeDefinitionIndex = 60467;

class BlackCurtainConfig : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigBlackCurtain*>** StaticGet__blackCurtainDict()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigBlackCurtain*>**)Il2CppClass::FromTypeDefinitionIndex(BlackCurtainConfig_TypeDefinitionIndex)->GetStaticField(0x47B80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIG__CCTOR_OFFSET))();
	}

	static ::System::Void ReloadFromFile(::System::Boolean isAync, ::System::Action* complete)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIG_RELOADFROMFILE_OFFSET))(isAync, complete);
	}

	static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIG_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
	}

	static ::MoleMole::Config::ConfigBlackCurtain* GetConfig(::System::String* key)
	{
		return ((::MoleMole::Config::ConfigBlackCurtain*(*)(::System::String*))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIG_GETCONFIG_OFFSET))(key);
	}

	static ::System::Void RealodData(::MoleMole::Config::ConfigBlackCurtains* config)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigBlackCurtains*))((::PBYTE)hIl2Cpp + BLACKCURTAINCONFIG_REALODDATA_OFFSET))(config);
	}
};
