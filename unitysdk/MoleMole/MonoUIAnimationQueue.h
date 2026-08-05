#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIAnimationQueue_PlayItem.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_MONOUIANIMATIONQUEUE_AWAKE_OFFSET UNITYSDK_OFFSET(0x180917C0)
#define MOLEMOLE_MONOUIANIMATIONQUEUE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18091610)
#define MOLEMOLE_MONOUIANIMATIONQUEUE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x18091760)
#define MOLEMOLE_MONOUIANIMATIONQUEUE_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x180916D0)
#define MOLEMOLE_MONOUIANIMATIONQUEUE_PLAYQUEUE_OFFSET UNITYSDK_OFFSET(0x180918D0)
#define MOLEMOLE_MONOUIANIMATIONQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18091CF0)
#define MOLEMOLE_MONOUIANIMATIONQUEUE__PLAYINDEX_OFFSET UNITYSDK_OFFSET(0x18091940)
#define MOLEMOLE_MONOUIANIMATIONQUEUE__TRYNEXT_OFFSET UNITYSDK_OFFSET(0x18091C90)
#define MOLEMOLE_MONOUIANIMATIONQUEUE___PLAYINDEX_B__10_0_OFFSET UNITYSDK_OFFSET(0x18091D40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIAnimationQueue_TypeDefinitionIndex = 63443;

	class MonoUIAnimationQueue : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Animation* _animation; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::MonoUIAnimationQueue_PlayItem>* playQueues; // 0x60
		::System::Boolean StartOnEnabled; // 0x68
		::System::Int32 _curIndex; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIANIMATIONQUEUE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIANIMATIONQUEUE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIANIMATIONQUEUE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIANIMATIONQUEUE_AWAKE_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIANIMATIONQUEUE_ONREALENABLE_OFFSET))(this);
		}

		::System::Void PlayQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIANIMATIONQUEUE_PLAYQUEUE_OFFSET))(this);
		}

		::System::Void _PlayIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIANIMATIONQUEUE__PLAYINDEX_OFFSET))(this, index);
		}

		::System::Void _TryNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIANIMATIONQUEUE__TRYNEXT_OFFSET))(this);
		}

		::System::Void __PlayIndex_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIANIMATIONQUEUE___PLAYINDEX_B__10_0_OFFSET))(this);
		}
	};
}
