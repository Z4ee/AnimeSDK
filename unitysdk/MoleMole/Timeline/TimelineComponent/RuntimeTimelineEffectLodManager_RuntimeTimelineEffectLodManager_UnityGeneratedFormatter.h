#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Timeline::TimelineComponent { class RuntimeTimelineEffectLodManager; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_RUNTIMETIMELINEEFFECTLODMANAGER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x173A9D60)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_RUNTIMETIMELINEEFFECTLODMANAGER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x173A9D70)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_RUNTIMETIMELINEEFFECTLODMANAGER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x173A9F50)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_RUNTIMETIMELINEEFFECTLODMANAGER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x173AA0F0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_RUNTIMETIMELINEEFFECTLODMANAGER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x173AA0B0)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineEffectLodManager_RuntimeTimelineEffectLodManager_UnityGeneratedFormatter_TypeDefinitionIndex = 84783;

	class RuntimeTimelineEffectLodManager_RuntimeTimelineEffectLodManager_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Timeline::TimelineComponent::RuntimeTimelineEffectLodManager*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystem*, ::MoleMole::Config::EffectLODType>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystem*, ::MoleMole::Config::EffectLODType>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineEffectLodManager_RuntimeTimelineEffectLodManager_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41260);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_RUNTIMETIMELINEEFFECTLODMANAGER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_RUNTIMETIMELINEEFFECTLODMANAGER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_RUNTIMETIMELINEEFFECTLODMANAGER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Timeline::TimelineComponent::RuntimeTimelineEffectLodManager*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineEffectLodManager*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_RUNTIMETIMELINEEFFECTLODMANAGER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Timeline::TimelineComponent::RuntimeTimelineEffectLodManager*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineEffectLodManager*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_RUNTIMETIMELINEEFFECTLODMANAGER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
