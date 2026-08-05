#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

class MainCityObjectState_ScriptConfig;
class TrafficRedLimitArea;
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFIGMAINCITYOBJECT_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x13CD9130)
#define CONFIGMAINCITYOBJECT_GETLIMITAREA_OFFSET UNITYSDK_OFFSET(0x13CD8FB0)
#define CONFIGMAINCITYOBJECT_GETTRAFFICTIMELOOP_OFFSET UNITYSDK_OFFSET(0x13CD9210)
#define CONFIGMAINCITYOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD9250)

inline static constexpr unsigned int ConfigMainCityObject_TypeDefinitionIndex = 54123;

class ConfigMainCityObject : public ::Foundation::MihoyoSerializedScriptableObject
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MainCityObjectState_ScriptConfig*>* stateMaps; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>* StateLoopers; // 0x60
	::System::Collections::Generic::List_1<::TrafficRedLimitArea*>* areaLimit; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT__CTOR_OFFSET))(this);
	}

	::TrafficRedLimitArea* GetLimitArea(::System::String* areaName)
	{
		return ((::TrafficRedLimitArea*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_GETLIMITAREA_OFFSET))(this, areaName);
	}

	::MainCityObjectState_ScriptConfig* GetConfig(::System::String* stateKey)
	{
		return ((::MainCityObjectState_ScriptConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_GETCONFIG_OFFSET))(this, stateKey);
	}

	::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>* GetTrafficTimeLoop()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ClientSceneObjectStateLooperConfigBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_GETTRAFFICTIMELOOP_OFFSET))(this);
	}
};
