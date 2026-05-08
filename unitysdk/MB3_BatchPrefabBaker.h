#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MB3_BatchPrefabBaker_MB3_PrefabBakerRow;
namespace System { class String; }

#define MB3_BATCHPREFABBAKER_CREATESOURCEANDRESULTPREFABINSTANCES_OFFSET UNITYSDK_OFFSET(0x1C4E3EA0)
#define MB3_BATCHPREFABBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E3F10)

inline static constexpr unsigned int MB3_BatchPrefabBaker_TypeDefinitionIndex = 84961;

class MB3_BatchPrefabBaker : public ::UnityEngine::MonoBehaviour
{
public:
	::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL; // 0x18
	::Il2CppArray<::MB3_BatchPrefabBaker_MB3_PrefabBakerRow*>* prefabRows; // 0x20
	::System::String* outputPrefabFolder; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_BATCHPREFABBAKER__CTOR_OFFSET))(this);
	}

	::System::Void CreateSourceAndResultPrefabInstances()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB3_BATCHPREFABBAKER_CREATESOURCEANDRESULTPREFABINSTANCES_OFFSET))(this);
	}
};
