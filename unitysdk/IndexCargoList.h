#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define INDEXCARGOLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x14240650)

inline static constexpr unsigned int IndexCargoList_TypeDefinitionIndex = 44440;

class IndexCargoList : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CargoList; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDEXCARGOLIST__CTOR_OFFSET))(this);
	}
};
