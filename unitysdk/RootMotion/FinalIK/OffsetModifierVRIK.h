#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion::FinalIK { class VRIK; }
namespace System::Collections { class IEnumerator; }

#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1FA5BAE0)
#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK_INITIATE_OFFSET UNITYSDK_OFFSET(0x1FA5BBC0)
#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK_MODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1FA5BC10)
#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FA5BDB0)
#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK_START_OFFSET UNITYSDK_OFFSET(0x1FA5BB00)
#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5AD70)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int OffsetModifierVRIK_TypeDefinitionIndex = 38958;

	class OffsetModifierVRIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single weight; // 0x18
		::RootMotion::FinalIK::VRIK* ik; // 0x20
		::System::Single lastTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__CTOR_OFFSET))(this);
		}

		::System::Single get_deltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK_GET_DELTATIME_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Initiate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK_INITIATE_OFFSET))(this);
		}

		::System::Void ModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK_MODIFYOFFSET_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK_ONDESTROY_OFFSET))(this);
		}
	};
}
