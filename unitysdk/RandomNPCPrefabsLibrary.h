#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class RandomNPCPrefabsLibItem;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RANDOMNPCPREFABSLIBRARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D33CCE0)

inline static constexpr unsigned int RandomNPCPrefabsLibrary_TypeDefinitionIndex = 71233;

class RandomNPCPrefabsLibrary : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RandomNPCPrefabsLibItem*>* randomLibItems; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMNPCPREFABSLIBRARY__CTOR_OFFSET))(this);
	}
};
