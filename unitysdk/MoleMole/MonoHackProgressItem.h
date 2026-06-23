#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOHACKPROGRESSITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD1CD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoHackProgressItem_TypeDefinitionIndex = 64452;

	class MonoHackProgressItem : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ProgressItems; // 0x58
		::UnityEngine::GameObject* ProgressRoot; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* TipGameObjects; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHACKPROGRESSITEM__CTOR_OFFSET))(this);
		}
	};
}
