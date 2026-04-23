#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BoxMaterial;
class IndexCargoList;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RANDOMCARGO_AWAKE_OFFSET UNITYSDK_OFFSET(0xB9302A0)
#define RANDOMCARGO_RANDOMCARGOWITHINDEX_OFFSET UNITYSDK_OFFSET(0xB9302F0)
#define RANDOMCARGO__CTOR_OFFSET UNITYSDK_OFFSET(0xB930650)

inline static constexpr unsigned int RandomCargo_TypeDefinitionIndex = 43896;

class RandomCargo : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::IndexCargoList*>* RandomIndexList; // 0x18
	::System::Collections::Generic::List_1<::BoxMaterial*>* MaterialsRandomIndexList; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMCARGO__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMCARGO_AWAKE_OFFSET))(this);
	}

	::System::Void RandomCargoWithIndex()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMCARGO_RANDOMCARGOWITHINDEX_OFFSET))(this);
	}
};
