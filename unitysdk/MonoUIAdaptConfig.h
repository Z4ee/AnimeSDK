#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UIAdaptiveDeviceType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_33414E91216E4EB5;
class MonoUIAdaptConfigItem;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUIADAPTCONFIG_GETUIADAPTIONOPERATIONS_OFFSET UNITYSDK_OFFSET(0x19C96AB0)
#define MONOUIADAPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C97110)

inline static constexpr unsigned int MonoUIAdaptConfig_TypeDefinitionIndex = 48045;

class MonoUIAdaptConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::MonoUIAdaptConfigItem*>* Configs; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIADAPTCONFIG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_33414E91216E4EB5*>* GetUIAdaptionOperations(::RPG::GameCore::UIAdaptiveDeviceType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_33414E91216E4EB5*>*(*)(::PVOID, ::RPG::GameCore::UIAdaptiveDeviceType))((::PBYTE)hIl2Cpp + MONOUIADAPTCONFIG_GETUIADAPTIONOPERATIONS_OFFSET))(this, a1);
	}
};
