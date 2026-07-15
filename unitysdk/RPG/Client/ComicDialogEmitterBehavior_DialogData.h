#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComicDialogEmitterBehavior_BackboardType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0x1800A490)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x1800A450)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_OFFSETSCALELIST_OFFSET UNITYSDK_OFFSET(0x180099C0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_PATTERNCOUNT_OFFSET UNITYSDK_OFFSET(0x1800A430)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_STRIPRECT_OFFSET UNITYSDK_OFFSET(0x1800A470)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_UVRECTLIST_OFFSET UNITYSDK_OFFSET(0x18009920)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_METHOD_1_5D0CCFC50EB9BE02_OFFSET UNITYSDK_OFFSET(0x1800A510)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1800A4B0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_AUDIOPLAYERGO_OFFSET UNITYSDK_OFFSET(0x1800A4A0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x1800A460)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_PATTERNCOUNT_OFFSET UNITYSDK_OFFSET(0x1800A440)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_STRIPRECT_OFFSET UNITYSDK_OFFSET(0x1800A480)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1800A5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComicDialogEmitterBehavior_DialogData_TypeDefinitionIndex = 67692;

	class ComicDialogEmitterBehavior_DialogData : public ::System::Object
	{
	public:
		::System::String* ContentText; // 0x10
		::RPG::Client::ComicDialogEmitterBehavior_BackboardType BackboardMode; // 0x18
		::System::Int32 BackboardIndex; // 0x1C
		::UnityEngine::Vector3 LocalPos; // 0x20
		::UnityEngine::Quaternion LocalRotate; // 0x2C
		::System::Boolean IfUseBillboard; // 0x3C
		::System::Boolean IfSelected; // 0x3D
		::System::String* AudioEventName; // 0x40
		::System::Boolean IfSetAudioPerDialog; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _UVRectList; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _OffsetScaleList; // 0x58
		::System::Int32 _PatternCount; // 0x60
		::System::Single _LifeTime; // 0x64
		::UnityEngine::Rect _StripRect; // 0x68
		::System::Int32 _PatternCount_k__BackingField; // 0x78
		::System::Single _LifeTime_k__BackingField; // 0x7C
		::UnityEngine::Rect _StripRect_k__BackingField; // 0x80
		::UnityEngine::GameObject* _AudioPlayerGO_k__BackingField; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_UVRectList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_UVRECTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* get_OffsetScaleList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_OFFSETSCALELIST_OFFSET))(this);
		}

		::System::Int32 get_PatternCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_PATTERNCOUNT_OFFSET))(this);
		}

		::System::Void set_PatternCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_PATTERNCOUNT_OFFSET))(this, a1);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_LIFETIME_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_StripRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_STRIPRECT_OFFSET))(this);
		}

		::System::Void set_StripRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_STRIPRECT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_AudioPlayerGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_GET_AUDIOPLAYERGO_OFFSET))(this);
		}

		::System::Void set_AudioPlayerGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_SET_AUDIOPLAYERGO_OFFSET))(this, a1);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::RPG::Client::ComicDialogEmitterBehavior_DialogData* Method_1_5D0CCFC50EB9BE02()
		{
			return ((::RPG::Client::ComicDialogEmitterBehavior_DialogData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DIALOGDATA_METHOD_1_5D0CCFC50EB9BE02_OFFSET))(this);
		}
	};
}
