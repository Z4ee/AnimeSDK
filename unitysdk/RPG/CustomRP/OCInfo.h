#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class InstanceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CUSTOMRP_OCINFO_SETOCENABLE_OFFSET UNITYSDK_OFFSET(0x18EEDBC0)
#define RPG_CUSTOMRP_OCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18EEDBD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int OCInfo_TypeDefinitionIndex = 35252;

	class OCInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outerFrustumList; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* instanceList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::InstanceInfo*>* mapInstances; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ocList; // 0x28
		::System::Boolean enableOC; // 0x30
		::System::Int32 maxDepth01; // 0x34
		::System::Int32 ocLightCount; // 0x38
		::System::Int32 frustumLightCount; // 0x3C
		::System::Int32 maxDepth; // 0x40
		::System::Int32 innerFrustumCount; // 0x44
		::System::Int32 focusDepth; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_OCINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetOCEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_OCINFO_SETOCENABLE_OFFSET))(this, a1);
		}
	};
}
