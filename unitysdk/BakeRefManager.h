#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BAKEREFMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x175A28C0)

inline static constexpr unsigned int BakeRefManager_TypeDefinitionIndex = 48653;

class BakeRefManager : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* additionSceneProp; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* disableOnBakeHeightmapObjs; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKEREFMANAGER__CTOR_OFFSET))(this);
	}
};
