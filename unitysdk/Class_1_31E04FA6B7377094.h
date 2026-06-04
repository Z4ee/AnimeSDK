#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_1_31E04FA6B7377094_METHOD_1_364095622C0E636A_OFFSET UNITYSDK_OFFSET(0x14246510)
#define CLASS_1_31E04FA6B7377094_METHOD_1_4C4938F725C5A1E4_OFFSET UNITYSDK_OFFSET(0x142476A0)
#define CLASS_1_31E04FA6B7377094_METHOD_1_64770466C021CFF5_OFFSET UNITYSDK_OFFSET(0x14247730)
#define CLASS_1_31E04FA6B7377094_METHOD_1_661DC7A341391D97_OFFSET UNITYSDK_OFFSET(0x14245020)
#define CLASS_1_31E04FA6B7377094_METHOD_1_AF11EB02CE78B812_OFFSET UNITYSDK_OFFSET(0x14244CD0)
#define CLASS_1_31E04FA6B7377094_METHOD_1_ED05E1A1F25B4A05_OFFSET UNITYSDK_OFFSET(0x14244E10)
#define CLASS_1_31E04FA6B7377094__CCTOR_OFFSET UNITYSDK_OFFSET(0x14247A70)

inline static constexpr unsigned int Class_1_31E04FA6B7377094_TypeDefinitionIndex = 45747;

class Class_1_31E04FA6B7377094 : public ::System::Object
{
public:
	static ::UnityEngine::Transform** StaticGet_Field_1_0()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31E04FA6B7377094_TypeDefinitionIndex)->GetStaticField(0x1B600);
	}
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31E04FA6B7377094_TypeDefinitionIndex)->GetStaticField(0x1B608);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31E04FA6B7377094_TypeDefinitionIndex)->GetStaticField(0x1B610);
	}
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TimelineClip*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TimelineClip*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31E04FA6B7377094_TypeDefinitionIndex)->GetStaticField(0x1B618);
	}
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Timeline::TimelineClip*, ::System::String*, ::System::String*>>*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Timeline::TimelineClip*, ::System::String*, ::System::String*>>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31E04FA6B7377094_TypeDefinitionIndex)->GetStaticField(0x1B620);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31E04FA6B7377094_TypeDefinitionIndex)->GetStaticField(0x1B628);
	}
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31E04FA6B7377094_TypeDefinitionIndex)->GetStaticField(0x1B630);
	}
	static ::System::Nullable_1<::UnityEngine::SceneManagement::Scene>* StaticGet_Field_1_7()
	{
		return (::System::Nullable_1<::UnityEngine::SceneManagement::Scene>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_31E04FA6B7377094_TypeDefinitionIndex)->GetStaticField(0x8C30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_31E04FA6B7377094__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_AF11EB02CE78B812(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_31E04FA6B7377094_METHOD_1_AF11EB02CE78B812_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>* Method_1_ED05E1A1F25B4A05(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>*(*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_31E04FA6B7377094_METHOD_1_ED05E1A1F25B4A05_OFFSET))(a1);
	}

	static ::System::Void Method_1_661DC7A341391D97(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineAsset*>* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Playables::PlayableDirector* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineAsset*>*, ::UnityEngine::Transform*, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + CLASS_1_31E04FA6B7377094_METHOD_1_661DC7A341391D97_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_64770466C021CFF5(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_31E04FA6B7377094_METHOD_1_64770466C021CFF5_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*> Method_1_364095622C0E636A(::UnityEngine::Timeline::TimelineClip* a1, ::System::String* a2)
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>(*)(::UnityEngine::Timeline::TimelineClip*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_31E04FA6B7377094_METHOD_1_364095622C0E636A_OFFSET))(a1, a2);
	}

	static ::UnityEngine::GameObject* Method_1_4C4938F725C5A1E4(::System::String* a1, ::System::String* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_31E04FA6B7377094_METHOD_1_4C4938F725C5A1E4_OFFSET))(a1, a2);
	}
};
