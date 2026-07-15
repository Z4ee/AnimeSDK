#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BindInfo.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class Class_1_A2C90C566F67A6EF;
namespace RPGTools::Timeline { class ArchiveAsset; }
namespace System { class String; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_BINDINGDATA_METHOD_3_05ACC7784C84BBE4_OFFSET UNITYSDK_OFFSET(0x1B34A0F0)
#define RPGTOOLS_TIMELINE_BINDINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B34A350)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BindingData_TypeDefinitionIndex = 46718;

	class BindingData : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::String* DEFAULT_NAME; // 0x0
		::Il2CppArray<::RPGTools::Timeline::ArchiveAsset*>* ArchiveArray; // 0x18
		::Il2CppArray<::RPGTools::Timeline::BindInfo>* BindInfoArray; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BINDINGDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_05ACC7784C84BBE4(::UnityEngine::Playables::PlayableDirector* a1, ::Class_1_A2C90C566F67A6EF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::Class_1_A2C90C566F67A6EF*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BINDINGDATA_METHOD_3_05ACC7784C84BBE4_OFFSET))(this, a1, a2);
		}
	};
}
