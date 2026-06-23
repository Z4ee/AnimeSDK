#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCCrowdMaterialOverrideParamsInfo;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCPREFABPARTOVERRIDETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D957E0)

inline static constexpr unsigned int NPCPrefabPartOverrideTable_TypeDefinitionIndex = 81034;

class NPCPrefabPartOverrideTable : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::NPCCrowdMaterialOverrideParamsInfo*>* PartOverrideInfoList; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCPREFABPARTOVERRIDETABLE__CTOR_OFFSET))(this);
	}
};
