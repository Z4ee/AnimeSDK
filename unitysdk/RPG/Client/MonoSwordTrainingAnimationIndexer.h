#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_MONOSWORDTRAININGANIMATIONINDEXER_GETANIMATIONNAMEBYINDEX_OFFSET UNITYSDK_OFFSET(0x9D39300)
#define RPG_CLIENT_MONOSWORDTRAININGANIMATIONINDEXER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D39390)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSwordTrainingAnimationIndexer_TypeDefinitionIndex = 59785;

	class MonoSwordTrainingAnimationIndexer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>* ComicAnimations; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWORDTRAININGANIMATIONINDEXER__CTOR_OFFSET))(this);
		}

		::System::String* GetAnimationNameByIndex(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSWORDTRAININGANIMATIONINDEXER_GETANIMATIONNAMEBYINDEX_OFFSET))(this, index);
		}
	};
}
