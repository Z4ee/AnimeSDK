#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"
#include "unitysdk/UnityEngine/Timeline/TimelineFrame.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine::Playables { class PlayableBehaviour; }

#define MOLEMOLE_TIMELINE_IKKFRAME_GET_FRAMETYPES_OFFSET UNITYSDK_OFFSET(0x15E2D7C0)
#define MOLEMOLE_TIMELINE_IKKFRAME_GET_TRACKNAME_OFFSET UNITYSDK_OFFSET(0x15E2D820)
#define MOLEMOLE_TIMELINE_IKKFRAME_INITPROPERTIES_OFFSET UNITYSDK_OFFSET(0x15E2DC50)
#define MOLEMOLE_TIMELINE_IKKFRAME_METHOD_6_07DE61D1D75CC71A_OFFSET UNITYSDK_OFFSET(0x15E2E8D0)
#define MOLEMOLE_TIMELINE_IKKFRAME_METHOD_6_B87EC206A790C03D_OFFSET UNITYSDK_OFFSET(0x15E2E900)
#define MOLEMOLE_TIMELINE_IKKFRAME_METHOD_6_DC821D475D99E915_OFFSET UNITYSDK_OFFSET(0x15E2E8E0)
#define MOLEMOLE_TIMELINE_IKKFRAME_METHOD_6_FF525105087F50DA_OFFSET UNITYSDK_OFFSET(0x15E2E8F0)
#define MOLEMOLE_TIMELINE_IKKFRAME_RECORDERUNKFRAMEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15E2E3C0)
#define MOLEMOLE_TIMELINE_IKKFRAME_UNKFRAMEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15E2E360)
#define MOLEMOLE_TIMELINE_IKKFRAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E2E750)
#define MOLEMOLE_TIMELINE_IKKFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2E6F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int IKKFrame_TypeDefinitionIndex = 49646;

	class IKKFrame : public ::UnityEngine::Timeline::TimelineFrame
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>*>** StaticGet__propertyInfoDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(IKKFrame_TypeDefinitionIndex)->GetStaticField(0x49EB0);
		}
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet__cachedFrameTypes()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(IKKFrame_TypeDefinitionIndex)->GetStaticField(0x49EB8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKKFRAME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKKFRAME__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::System::Type*>* get_frameTypes()
		{
			return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKKFRAME_GET_FRAMETYPES_OFFSET))(this);
		}

		::System::String* get_trackName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKKFRAME_GET_TRACKNAME_OFFSET))(this);
		}

		::System::Void InitProperties(::System::Int32 a1, ::UnityEngine::Playables::PlayableBehaviour* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Playables::PlayableBehaviour*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKKFRAME_INITPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnKFrameProperty(::System::Type* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKKFRAME_UNKFRAMEPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RecorderUnKFrameProperty(::System::Type* a1, ::System::String* a2, ::UnityEngine::Timeline::KFrameFieldType a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKKFRAME_RECORDERUNKFRAMEPROPERTY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_6_07DE61D1D75CC71A(::System::Type* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKKFRAME_METHOD_6_07DE61D1D75CC71A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_DC821D475D99E915(::System::Type* a1, ::System::String* a2, ::UnityEngine::Timeline::KFrameFieldType a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKKFRAME_METHOD_6_DC821D475D99E915_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_FF525105087F50DA(::System::Int32 a1, ::UnityEngine::Playables::PlayableBehaviour* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Playables::PlayableBehaviour*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKKFRAME_METHOD_6_FF525105087F50DA_OFFSET))(this, a1, a2);
		}

		::System::String* Method_6_B87EC206A790C03D()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_IKKFRAME_METHOD_6_B87EC206A790C03D_OFFSET))(this);
		}
	};
}
