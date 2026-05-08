#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x122F04F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x122F0450)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONSERIALIZEDTORUNTIME_OFFSET UNITYSDK_OFFSET(0x122F0540)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_RUNTIMETOSERIALIZED_OFFSET UNITYSDK_OFFSET(0x122F04B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_SERIALIZEDTORUNTIME_OFFSET UNITYSDK_OFFSET(0x122F0160)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x122F0580)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x122EFB20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventEntry_TypeDefinitionIndex = 73339;

	class AnimatorEventEntry : public ::System::Object
	{
	public:
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>** StaticGet_AnimatorZoneTagsBlackListV2_Default()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorEventEntry_TypeDefinitionIndex)->GetStaticField(0x3C140);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>** StaticGet_AnimateStateTagsV2_Default()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorEventEntry_TypeDefinitionIndex)->GetStaticField(0x3C148);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>** StaticGet_AnimatorZoneTagsV2_Default()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorEventEntry_TypeDefinitionIndex)->GetStaticField(0x3C150);
		}
		::Il2CppArray<::System::String*>* AnimateStateTagsV2; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* AnimatorZoneTagsBlackListInRuntime; // 0x18
		::Il2CppArray<::System::String*>* AnimatorZoneTagsV2; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* AnimatorZoneTagsInRuntime; // 0x28
		::Il2CppArray<::System::String*>* AnimatorZoneTagsBlackListV2; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* AnimateStateTagsInRuntime; // 0x38
		::System::Int32 frameLength; // 0x40
		::System::Boolean forceTriggerOnTransitionIn; // 0x44
		::System::Boolean maxFrame; // 0x45
		::System::Boolean forceTriggerOnTransitionOut; // 0x46
		::System::Boolean forceTrigger; // 0x47
		::System::Single normalizedTime; // 0x48
		::System::Int32 frame; // 0x4C
		::System::Int32 eventNameHash; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY__CCTOR_OFFSET))();
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void RuntimeToSerialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_RUNTIMETOSERIALIZED_OFFSET))(this);
		}

		::System::Void SerializedToRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_SERIALIZEDTORUNTIME_OFFSET))(this);
		}

		::System::Void OnSerializedToRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONSERIALIZEDTORUNTIME_OFFSET))(this);
		}
	};
}
