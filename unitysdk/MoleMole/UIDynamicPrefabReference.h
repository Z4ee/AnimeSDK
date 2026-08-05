#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDYNAMICPREFABREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18559D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIDynamicPrefabReference_TypeDefinitionIndex = 56811;

	class UIDynamicPrefabReference : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* DynamicPrefabNames; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* DynamicPrefabPaths; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDYNAMICPREFABREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
