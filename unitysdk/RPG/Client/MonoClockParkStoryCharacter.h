#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2442E7E8181DD9B5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_C1DC709EFDF25E3D;
namespace RPG::GameCore { class ClockParkStoryAnimState; }
namespace RPG::GameCore { class ClockParkStoryCharacter; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC062340)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_GETCURRENTANIMINFO_OFFSET UNITYSDK_OFFSET(0xC0626D0)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_GET_FLIPPED_OFFSET UNITYSDK_OFFSET(0xC0625B0)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0xC062780)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC062760)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xC062740)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_INIT_OFFSET UNITYSDK_OFFSET(0xC062460)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_PLAYANIMTOLOOP_OFFSET UNITYSDK_OFFSET(0xC062670)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0xC062610)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_SET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0xC062790)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xC062770)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xC062750)
#define RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0627A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoClockParkStoryCharacter_TypeDefinitionIndex = 56342;

	class MonoClockParkStoryCharacter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _UniqueName_k__BackingField; // 0x18
		::UnityEngine::RectTransform* _Transform_k__BackingField; // 0x20
		::Spine::Unity::SkeletonGraphic* _Graphic_k__BackingField; // 0x28
		::System::Boolean Field_5_3; // 0x30
		::System::Boolean Field_5_4; // 0x31
		::Class_1_C1DC709EFDF25E3D* Field_5_5; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_AWAKE_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::ClockParkStoryCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkStoryCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_INIT_OFFSET))(this, a1);
		}

		::System::Void PlayAnim(::RPG::GameCore::ClockParkStoryAnimState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkStoryAnimState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_PLAYANIM_OFFSET))(this, a1);
		}

		::System::Void PlayAnimToLoop(::RPG::GameCore::ClockParkStoryAnimState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkStoryAnimState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_PLAYANIMTOLOOP_OFFSET))(this, a1);
		}

		::Struct_2_2442E7E8181DD9B5 GetCurrentAnimInfo()
		{
			return ((::Struct_2_2442E7E8181DD9B5(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_GETCURRENTANIMINFO_OFFSET))(this);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void set_UniqueName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_SET_UNIQUENAME_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_Transform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_Transform(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_SET_TRANSFORM_OFFSET))(this, a1);
		}

		::Spine::Unity::SkeletonGraphic* get_Graphic()
		{
			return ((::Spine::Unity::SkeletonGraphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Void set_Graphic(::Spine::Unity::SkeletonGraphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_SET_GRAPHIC_OFFSET))(this, a1);
		}

		::System::Boolean get_Flipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCLOCKPARKSTORYCHARACTER_GET_FLIPPED_OFFSET))(this);
		}
	};
}
