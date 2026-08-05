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

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_CLASS_3_C465256224AD2D5E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180AB7F0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_CLASS_3_C465256224AD2D5E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180AB800)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_CLASS_3_C465256224AD2D5E_WRITE_OFFSET UNITYSDK_OFFSET(0x180AB990)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_CLASS_3_C465256224AD2D5E__CCTOR_OFFSET UNITYSDK_OFFSET(0x180ABAF0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_CLASS_3_C465256224AD2D5E__CTOR_OFFSET UNITYSDK_OFFSET(0x180ABAB0)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineEffectLodManager_Class_3_C465256224AD2D5E_TypeDefinitionIndex = 66265;

	class RuntimeTimelineEffectLodManager_Class_3_C465256224AD2D5E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Timeline::TimelineComponent::RuntimeTimelineEffectLodManager*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystem*, ::MoleMole::Config::EffectLODType>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystem*, ::MoleMole::Config::EffectLODType>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineEffectLodManager_Class_3_C465256224AD2D5E_TypeDefinitionIndex)->GetStaticField(0x4C470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_CLASS_3_C465256224AD2D5E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_CLASS_3_C465256224AD2D5E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_CLASS_3_C465256224AD2D5E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Timeline::TimelineComponent::RuntimeTimelineEffectLodManager*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineEffectLodManager*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_CLASS_3_C465256224AD2D5E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Timeline::TimelineComponent::RuntimeTimelineEffectLodManager*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineEffectLodManager*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEEFFECTLODMANAGER_CLASS_3_C465256224AD2D5E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
