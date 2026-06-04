#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class SceneLightManagerConfigData_StageData;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENELIGHTSTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD0765B0)

inline static constexpr unsigned int SceneLightStageData_TypeDefinitionIndex = 44684;

class SceneLightStageData : public ::UnityEngine::ScriptableObject
{
public:
	::System::String* branch; // 0x18
	::System::Collections::Generic::List_1<::SceneLightManagerConfigData_StageData*>* sceneLightStageDataItems; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENELIGHTSTAGEDATA__CTOR_OFFSET))(this);
	}
};
