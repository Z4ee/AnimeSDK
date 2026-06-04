#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UIAdaptiveDeviceType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_7A3194024C7D2DEC;
class MonoUIAdaptConfigItem;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUIADAPTCONFIG_GETUIADAPTIONOPERATIONS_OFFSET UNITYSDK_OFFSET(0xA8500C0)
#define MONOUIADAPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA850720)

inline static constexpr unsigned int MonoUIAdaptConfig_TypeDefinitionIndex = 44876;

class MonoUIAdaptConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::MonoUIAdaptConfigItem*>* Configs; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIADAPTCONFIG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>* GetUIAdaptionOperations(::RPG::GameCore::UIAdaptiveDeviceType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7A3194024C7D2DEC*>*(*)(::PVOID, ::RPG::GameCore::UIAdaptiveDeviceType))((::PBYTE)hIl2Cpp + MONOUIADAPTCONFIG_GETUIADAPTIONOPERATIONS_OFFSET))(this, a1);
	}
};
