#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCCrowdMaterialOverrideParamsInfo;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCACCESORYITEMOVERRIDETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A0100)

inline static constexpr unsigned int NPCAccesoryItemOverrideTable_TypeDefinitionIndex = 82094;

class NPCAccesoryItemOverrideTable : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::NPCCrowdMaterialOverrideParamsInfo*>* AccItemOverrideInfoList; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCACCESORYITEMOVERRIDETABLE__CTOR_OFFSET))(this);
	}
};
