#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCPrefabInfo;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RANDOMNPCPREFABSLIBITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x143B3EF0)

inline static constexpr unsigned int RandomNPCPrefabsLibItem_TypeDefinitionIndex = 60211;

class RandomNPCPrefabsLibItem : public ::System::Object
{
public:
	::System::Int32 libraryId; // 0x10
	::System::Collections::Generic::List_1<::NPCPrefabInfo*>* NPCPrefabs; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMNPCPREFABSLIBITEM__CTOR_OFFSET))(this);
	}
};
