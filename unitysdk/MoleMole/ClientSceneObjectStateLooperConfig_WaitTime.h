#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ClientSceneObjectStateLooperConfigBase.h"
#include "unitysdk/MoleMole/ClientSceneObjectStateLooperConfigBase_LoopConditionType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CLIENTSCENEOBJECTSTATELOOPERCONFIG_WAITTIME_GET_LOOPCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A494200)
#define MOLEMOLE_CLIENTSCENEOBJECTSTATELOOPERCONFIG_WAITTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A494210)

namespace MoleMole
{
	inline static constexpr unsigned int ClientSceneObjectStateLooperConfig_WaitTime_TypeDefinitionIndex = 74260;

	class ClientSceneObjectStateLooperConfig_WaitTime : public ::MoleMole::ClientSceneObjectStateLooperConfigBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* HoldOnArea; // 0x20
		::System::Single WaitTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLIENTSCENEOBJECTSTATELOOPERCONFIG_WAITTIME__CTOR_OFFSET))(this);
		}

		::MoleMole::ClientSceneObjectStateLooperConfigBase_LoopConditionType get_loopConditionType()
		{
			return ((::MoleMole::ClientSceneObjectStateLooperConfigBase_LoopConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLIENTSCENEOBJECTSTATELOOPERCONFIG_WAITTIME_GET_LOOPCONDITIONTYPE_OFFSET))(this);
		}
	};
}
