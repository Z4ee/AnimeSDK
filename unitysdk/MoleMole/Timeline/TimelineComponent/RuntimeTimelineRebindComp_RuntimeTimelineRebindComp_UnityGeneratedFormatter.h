#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Timeline::TimelineComponent { class NoSeamlessBaseReferenceCompInfo; }
namespace MoleMole::Timeline::TimelineComponent { class RuntimeTimelineRebindComp; }
namespace MoleMole::Timeline::TimelineComponent { class SeamlessBaseReferenceCompInfo; }
namespace MoleMole::Timeline::TimelineComponent { class SeamlessTrackBindInfo; }
namespace MoleMole::Timeline::TimelineComponent { class SyncReferenceInfo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_RUNTIMETIMELINEREBINDCOMP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1237F990)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_RUNTIMETIMELINEREBINDCOMP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1237F9A0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_RUNTIMETIMELINEREBINDCOMP_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1237FD00)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_RUNTIMETIMELINEREBINDCOMP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1237FF50)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_RUNTIMETIMELINEREBINDCOMP_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1237FF10)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineRebindComp_RuntimeTimelineRebindComp_UnityGeneratedFormatter_TypeDefinitionIndex = 82819;

	class RuntimeTimelineRebindComp_RuntimeTimelineRebindComp_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SyncReferenceInfo*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SyncReferenceInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineRebindComp_RuntimeTimelineRebindComp_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43770);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessTrackBindInfo*>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessTrackBindInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineRebindComp_RuntimeTimelineRebindComp_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43778);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineRebindComp_RuntimeTimelineRebindComp_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43780);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo*>*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineRebindComp_RuntimeTimelineRebindComp_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43788);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_RUNTIMETIMELINEREBINDCOMP_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_RUNTIMETIMELINEREBINDCOMP_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_RUNTIMETIMELINEREBINDCOMP_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_RUNTIMETIMELINEREBINDCOMP_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_RUNTIMETIMELINEREBINDCOMP_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
