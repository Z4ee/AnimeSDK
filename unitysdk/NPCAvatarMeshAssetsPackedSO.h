#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class NPCAvatarMeshAssetsSO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCAVATARMESHASSETSPACKEDSO__CTOR_OFFSET UNITYSDK_OFFSET(0x125F1EE0)

inline static constexpr unsigned int NPCAvatarMeshAssetsPackedSO_TypeDefinitionIndex = 53895;

class NPCAvatarMeshAssetsPackedSO : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO*>* allAvatarMeshSO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSPACKEDSO__CTOR_OFFSET))(this);
	}
};
