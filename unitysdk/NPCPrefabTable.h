#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCPrefabInfo;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCPREFABTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1150CEB0)

inline static constexpr unsigned int NPCPrefabTable_TypeDefinitionIndex = 44547;

class NPCPrefabTable : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::NPCPrefabInfo*>* NPCPrefabs; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCPREFABTABLE__CTOR_OFFSET))(this);
	}
};
