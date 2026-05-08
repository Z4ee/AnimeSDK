#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCPREFABPARTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11B31DF0)

inline static constexpr unsigned int NPCPrefabPartInfo_TypeDefinitionIndex = 77143;

class NPCPrefabPartInfo : public ::System::Object
{
public:
	::System::Int32 partId; // 0x10
	::Il2CppArray<::System::Boolean>* bOverrides; // 0x18
	::Il2CppArray<::System::Int32>* overrideInfoIds; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* logicTags; // 0x28

	::System::Void _ctor(::System::Int32 inPartId)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCPREFABPARTINFO__CTOR_OFFSET))(this, inPartId);
	}
};
