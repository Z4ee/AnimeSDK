#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/TrackingState.h"
#include "unitysdk/System/Object.h"

namespace R3 { class TrackableDisposable; }
namespace R3::Internal { template <typename T1, typename T2> class WeakDictionary_2; }
namespace System { class IDisposable; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define R3_OBSERVABLETRACKER_REMOVETRACKING_OFFSET UNITYSDK_OFFSET(0x1EFBB3F0)
#define R3_OBSERVABLETRACKER_TRYTRACKACTIVESUBSCRIPTIONCORE_OFFSET UNITYSDK_OFFSET(0x1EFBA930)
#define R3_OBSERVABLETRACKER_TRYTRACKACTIVESUBSCRIPTION_OFFSET UNITYSDK_OFFSET(0x1EFBA890)
#define R3_OBSERVABLETRACKER_TYPEBEAUTIFY_OFFSET UNITYSDK_OFFSET(0x1EFBADB0)
#define R3_OBSERVABLETRACKER_UNWRAPTRACKABLEDISPOSABLE_OFFSET UNITYSDK_OFFSET(0x1EFBAD50)
#define R3_OBSERVABLETRACKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFBB4A0)

namespace R3
{
	inline static constexpr unsigned int ObservableTracker_TypeDefinitionIndex = 35246;

	class ObservableTracker : public ::System::Object
	{
	public:
		static ::R3::Internal::WeakDictionary_2<::R3::TrackableDisposable*, ::R3::TrackingState>** StaticGet_tracking()
		{
			return (::R3::Internal::WeakDictionary_2<::R3::TrackableDisposable*, ::R3::TrackingState>**)Il2CppClass::FromTypeDefinitionIndex(ObservableTracker_TypeDefinitionIndex)->GetStaticField(0xD80);
		}
		static ::System::Collections::Generic::List_1<::R3::TrackingState>** StaticGet_iterateCache()
		{
			return (::System::Collections::Generic::List_1<::R3::TrackingState>**)Il2CppClass::FromTypeDefinitionIndex(ObservableTracker_TypeDefinitionIndex)->GetStaticField(0xD88);
		}
		static ::System::Int32* StaticGet_trackingIdCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObservableTracker_TypeDefinitionIndex)->GetStaticField(0x700);
		}
		static ::System::Boolean* StaticGet_dirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ObservableTracker_TypeDefinitionIndex)->GetStaticField(0x704);
		}
		static ::System::Boolean* StaticGet_EnableStackTrace()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ObservableTracker_TypeDefinitionIndex)->GetStaticField(0x705);
		}
		static ::System::Boolean* StaticGet_EnableTracking()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ObservableTracker_TypeDefinitionIndex)->GetStaticField(0x706);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_OBSERVABLETRACKER__CCTOR_OFFSET))();
		}

		static ::System::Boolean TryTrackActiveSubscription(::System::IDisposable* a1, ::System::Int32 a2, ::R3::TrackableDisposable*& a3)
		{
			return ((::System::Boolean(*)(::System::IDisposable*, ::System::Int32, ::R3::TrackableDisposable*&))((::PBYTE)hIl2Cpp + R3_OBSERVABLETRACKER_TRYTRACKACTIVESUBSCRIPTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryTrackActiveSubscriptionCore(::System::IDisposable* a1, ::System::Int32 a2, ::R3::TrackableDisposable*& a3)
		{
			return ((::System::Boolean(*)(::System::IDisposable*, ::System::Int32, ::R3::TrackableDisposable*&))((::PBYTE)hIl2Cpp + R3_OBSERVABLETRACKER_TRYTRACKACTIVESUBSCRIPTIONCORE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveTracking(::R3::TrackableDisposable* a1)
		{
			return ((::System::Void(*)(::R3::TrackableDisposable*))((::PBYTE)hIl2Cpp + R3_OBSERVABLETRACKER_REMOVETRACKING_OFFSET))(a1);
		}

		static ::System::Void TypeBeautify(::System::Type* a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + R3_OBSERVABLETRACKER_TYPEBEAUTIFY_OFFSET))(a1, a2);
		}

		static ::System::IDisposable* UnwrapTrackableDisposable(::System::IDisposable* a1)
		{
			return ((::System::IDisposable*(*)(::System::IDisposable*))((::PBYTE)hIl2Cpp + R3_OBSERVABLETRACKER_UNWRAPTRACKABLEDISPOSABLE_OFFSET))(a1);
		}
	};
}
