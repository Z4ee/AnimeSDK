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

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLASS_3_673A95122C1BE0D0_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x173BCE50)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLASS_3_673A95122C1BE0D0_READMEMBER_OFFSET UNITYSDK_OFFSET(0x173BCE60)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLASS_3_673A95122C1BE0D0_WRITE_OFFSET UNITYSDK_OFFSET(0x173BD180)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLASS_3_673A95122C1BE0D0__CCTOR_OFFSET UNITYSDK_OFFSET(0x173BD3A0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLASS_3_673A95122C1BE0D0__CTOR_OFFSET UNITYSDK_OFFSET(0x173BD360)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineRebindComp_Class_3_673A95122C1BE0D0_TypeDefinitionIndex = 87844;

	class RuntimeTimelineRebindComp_Class_3_673A95122C1BE0D0 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessTrackBindInfo*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessTrackBindInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineRebindComp_Class_3_673A95122C1BE0D0_TypeDefinitionIndex)->GetStaticField(0x44F30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineRebindComp_Class_3_673A95122C1BE0D0_TypeDefinitionIndex)->GetStaticField(0x44F38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SyncReferenceInfo*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SyncReferenceInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineRebindComp_Class_3_673A95122C1BE0D0_TypeDefinitionIndex)->GetStaticField(0x44F40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo*>*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTimelineRebindComp_Class_3_673A95122C1BE0D0_TypeDefinitionIndex)->GetStaticField(0x44F48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLASS_3_673A95122C1BE0D0__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLASS_3_673A95122C1BE0D0__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLASS_3_673A95122C1BE0D0_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLASS_3_673A95122C1BE0D0_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::TimelineComponent::RuntimeTimelineRebindComp*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEREBINDCOMP_CLASS_3_673A95122C1BE0D0_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
