#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace NPCCrowd { class NPCAttachPointName; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCATTACHPOINTNAMEASSETSSO__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB3480)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCAttachPointNameAssetsSO_TypeDefinitionIndex = 41131;

	class NPCAttachPointNameAssetsSO : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::NPCAttachPointName*>* allNames; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCATTACHPOINTNAMEASSETSSO__CTOR_OFFSET))(this);
		}
	};
}
