#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_2F51BD0FF76EEB32;
namespace RPGTools::Timeline { class PerformerMeta; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_1_79899FABAFC4A21B_METHOD_1_1320DB1F6C969D10_OFFSET UNITYSDK_OFFSET(0x188ABD00)
#define CLASS_1_79899FABAFC4A21B_METHOD_1_18F28C7FFFABB50C_OFFSET UNITYSDK_OFFSET(0x188AD730)
#define CLASS_1_79899FABAFC4A21B_METHOD_1_1A15A16B2EDED852_OFFSET UNITYSDK_OFFSET(0x188AD190)
#define CLASS_1_79899FABAFC4A21B_METHOD_1_3FCD8CCC2B2E28E2_OFFSET UNITYSDK_OFFSET(0x188AACE0)
#define CLASS_1_79899FABAFC4A21B_METHOD_1_4A604F1007C8162E_OFFSET UNITYSDK_OFFSET(0x188AC650)
#define CLASS_1_79899FABAFC4A21B_METHOD_1_90B4E79BF3588AEE_OFFSET UNITYSDK_OFFSET(0x188AD900)
#define CLASS_1_79899FABAFC4A21B_METHOD_1_A8837D32E8E7B271_OFFSET UNITYSDK_OFFSET(0x188AD870)
#define CLASS_1_79899FABAFC4A21B_METHOD_1_ADF9A79B7E939854_OFFSET UNITYSDK_OFFSET(0x188ABB00)
#define CLASS_1_79899FABAFC4A21B_METHOD_1_D20D037A1189F57F_OFFSET UNITYSDK_OFFSET(0x188AD820)
#define CLASS_1_79899FABAFC4A21B_METHOD_1_EF2624F57F90CCFA_OFFSET UNITYSDK_OFFSET(0x188ACC10)
#define CLASS_1_79899FABAFC4A21B__CTOR_OFFSET UNITYSDK_OFFSET(0x188AD9E0)

inline static constexpr unsigned int Class_1_79899FABAFC4A21B_TypeDefinitionIndex = 48974;

class Class_1_79899FABAFC4A21B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79899FABAFC4A21B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_3FCD8CCC2B2E28E2(::UnityEngine::Timeline::TimelineAsset* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + CLASS_1_79899FABAFC4A21B_METHOD_1_3FCD8CCC2B2E28E2_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_ADF9A79B7E939854(::RPGTools::Timeline::PerformerMeta* a1, ::UnityEngine::Transform* a2, ::UnityEngine::GameObject*& a3)
	{
		return ((::UnityEngine::GameObject*(*)(::RPGTools::Timeline::PerformerMeta*, ::UnityEngine::Transform*, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + CLASS_1_79899FABAFC4A21B_METHOD_1_ADF9A79B7E939854_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::Class_1_2F51BD0FF76EEB32*>* Method_1_1320DB1F6C969D10(::UnityEngine::Timeline::TimelineAsset* a1)
	{
		return ((::Il2CppArray<::Class_1_2F51BD0FF76EEB32*>*(*)(::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + CLASS_1_79899FABAFC4A21B_METHOD_1_1320DB1F6C969D10_OFFSET))(a1);
	}

	static ::System::Void Method_1_4A604F1007C8162E(::UnityEngine::Playables::PlayableDirector* a1, ::System::String* a2, ::UnityEngine::Object* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_79899FABAFC4A21B_METHOD_1_4A604F1007C8162E_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Timeline::TrackAsset* Method_1_EF2624F57F90CCFA(::UnityEngine::Timeline::TimelineAsset* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Timeline::TrackAsset*(*)(::UnityEngine::Timeline::TimelineAsset*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_79899FABAFC4A21B_METHOD_1_EF2624F57F90CCFA_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Object* Method_1_1A15A16B2EDED852(::UnityEngine::Timeline::TimelineAsset* a1, ::UnityEngine::Playables::PlayableDirector* a2, ::System::String* a3)
	{
		return ((::UnityEngine::Object*(*)(::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Playables::PlayableDirector*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_79899FABAFC4A21B_METHOD_1_1A15A16B2EDED852_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::GenderType Method_1_18F28C7FFFABB50C()
	{
		return ((::RPG::GameCore::GenderType(*)())((::PBYTE)hIl2Cpp + CLASS_1_79899FABAFC4A21B_METHOD_1_18F28C7FFFABB50C_OFFSET))();
	}

	static ::System::Boolean Method_1_D20D037A1189F57F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_79899FABAFC4A21B_METHOD_1_D20D037A1189F57F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A8837D32E8E7B271(::RPG::GameCore::GenderType a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GenderType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_79899FABAFC4A21B_METHOD_1_A8837D32E8E7B271_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_90B4E79BF3588AEE(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_79899FABAFC4A21B_METHOD_1_90B4E79BF3588AEE_OFFSET))(a1);
	}
};
