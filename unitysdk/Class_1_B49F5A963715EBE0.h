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

#define CLASS_1_B49F5A963715EBE0_METHOD_1_18F28C7FFFABB50C_OFFSET UNITYSDK_OFFSET(0xA7438D0)
#define CLASS_1_B49F5A963715EBE0_METHOD_1_3FCD8CCC2B2E28E2_OFFSET UNITYSDK_OFFSET(0xA741800)
#define CLASS_1_B49F5A963715EBE0_METHOD_1_4A604F1007C8162E_OFFSET UNITYSDK_OFFSET(0xA742CC0)
#define CLASS_1_B49F5A963715EBE0_METHOD_1_5007AB9319BBDADB_OFFSET UNITYSDK_OFFSET(0xA7434D0)
#define CLASS_1_B49F5A963715EBE0_METHOD_1_85FEE8678D6E3C4F_OFFSET UNITYSDK_OFFSET(0xA7430F0)
#define CLASS_1_B49F5A963715EBE0_METHOD_1_90B4E79BF3588AEE_OFFSET UNITYSDK_OFFSET(0xA743AA0)
#define CLASS_1_B49F5A963715EBE0_METHOD_1_99536CF28FD55D44_OFFSET UNITYSDK_OFFSET(0xA7424F0)
#define CLASS_1_B49F5A963715EBE0_METHOD_1_A8837D32E8E7B271_OFFSET UNITYSDK_OFFSET(0xA743A10)
#define CLASS_1_B49F5A963715EBE0_METHOD_1_ADF9A79B7E939854_OFFSET UNITYSDK_OFFSET(0xA7422F0)
#define CLASS_1_B49F5A963715EBE0_METHOD_1_D20D037A1189F57F_OFFSET UNITYSDK_OFFSET(0xA7439C0)
#define CLASS_1_B49F5A963715EBE0__CTOR_OFFSET UNITYSDK_OFFSET(0xA743B80)

inline static constexpr unsigned int Class_1_B49F5A963715EBE0_TypeDefinitionIndex = 45789;

class Class_1_B49F5A963715EBE0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B49F5A963715EBE0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_3FCD8CCC2B2E28E2(::UnityEngine::Timeline::TimelineAsset* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + CLASS_1_B49F5A963715EBE0_METHOD_1_3FCD8CCC2B2E28E2_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_ADF9A79B7E939854(::RPGTools::Timeline::PerformerMeta* a1, ::UnityEngine::Transform* a2, ::UnityEngine::GameObject*& a3)
	{
		return ((::UnityEngine::GameObject*(*)(::RPGTools::Timeline::PerformerMeta*, ::UnityEngine::Transform*, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + CLASS_1_B49F5A963715EBE0_METHOD_1_ADF9A79B7E939854_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::Class_1_2F51BD0FF76EEB32*>* Method_1_99536CF28FD55D44(::UnityEngine::Timeline::TimelineAsset* a1)
	{
		return ((::Il2CppArray<::Class_1_2F51BD0FF76EEB32*>*(*)(::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + CLASS_1_B49F5A963715EBE0_METHOD_1_99536CF28FD55D44_OFFSET))(a1);
	}

	static ::System::Void Method_1_4A604F1007C8162E(::UnityEngine::Playables::PlayableDirector* a1, ::System::String* a2, ::UnityEngine::Object* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B49F5A963715EBE0_METHOD_1_4A604F1007C8162E_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Timeline::TrackAsset* Method_1_85FEE8678D6E3C4F(::UnityEngine::Timeline::TimelineAsset* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Timeline::TrackAsset*(*)(::UnityEngine::Timeline::TimelineAsset*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B49F5A963715EBE0_METHOD_1_85FEE8678D6E3C4F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Object* Method_1_5007AB9319BBDADB(::UnityEngine::Timeline::TimelineAsset* a1, ::UnityEngine::Playables::PlayableDirector* a2, ::System::String* a3)
	{
		return ((::UnityEngine::Object*(*)(::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Playables::PlayableDirector*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B49F5A963715EBE0_METHOD_1_5007AB9319BBDADB_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::GenderType Method_1_18F28C7FFFABB50C()
	{
		return ((::RPG::GameCore::GenderType(*)())((::PBYTE)hIl2Cpp + CLASS_1_B49F5A963715EBE0_METHOD_1_18F28C7FFFABB50C_OFFSET))();
	}

	static ::System::Boolean Method_1_D20D037A1189F57F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B49F5A963715EBE0_METHOD_1_D20D037A1189F57F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A8837D32E8E7B271(::RPG::GameCore::GenderType a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GenderType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B49F5A963715EBE0_METHOD_1_A8837D32E8E7B271_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_90B4E79BF3588AEE(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B49F5A963715EBE0_METHOD_1_90B4E79BF3588AEE_OFFSET))(a1);
	}
};
