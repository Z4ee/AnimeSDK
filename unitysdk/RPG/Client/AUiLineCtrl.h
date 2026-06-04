#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AULinePointMod.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AUiLineRender; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_AUILINECTRL_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xB073BC0)
#define RPG_CLIENT_AUILINECTRL_FRESHLINE_OFFSET UNITYSDK_OFFSET(0xB073990)
#define RPG_CLIENT_AUILINECTRL_GET_ANIMOD_OFFSET UNITYSDK_OFFSET(0xB0738E0)
#define RPG_CLIENT_AUILINECTRL_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xB073870)
#define RPG_CLIENT_AUILINECTRL_GET_LINERCOLOR_OFFSET UNITYSDK_OFFSET(0xB073650)
#define RPG_CLIENT_AUILINECTRL_METHOD_5_4C288C0C3DC7B4CA_OFFSET UNITYSDK_OFFSET(0xB073C10)
#define RPG_CLIENT_AUILINECTRL_METHOD_5_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xB073E80)
#define RPG_CLIENT_AUILINECTRL_SET_ANIMOD_OFFSET UNITYSDK_OFFSET(0xB0738F0)
#define RPG_CLIENT_AUILINECTRL_SET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0xB073880)
#define RPG_CLIENT_AUILINECTRL_SET_LINERCOLOR_OFFSET UNITYSDK_OFFSET(0xB073660)
#define RPG_CLIENT_AUILINECTRL_START_OFFSET UNITYSDK_OFFSET(0xB073940)
#define RPG_CLIENT_AUILINECTRL__CTOR_OFFSET UNITYSDK_OFFSET(0xB074020)

namespace RPG::Client
{
	inline static constexpr unsigned int AUiLineCtrl_TypeDefinitionIndex = 67735;

	class AUiLineCtrl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AUiLineRender* Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_5_1; // 0x20
		::UnityEngine::Vector3 Field_5_2; // 0x28
		::UnityEngine::Vector3 Field_5_3; // 0x34
		::UnityEngine::Vector3 Field_5_4; // 0x40
		::UnityEngine::Vector3 Field_5_5; // 0x4C
		::System::Single Field_5_6; // 0x58
		::UnityEngine::GameObject* Field_5_7; // 0x60
		::UnityEngine::GameObject* Field_5_8; // 0x68
		::System::Single Field_5_9; // 0x70
		::System::Boolean Field_5_10; // 0x74
		::UnityEngine::Sprite* Sprite; // 0x78
		::UnityEngine::Color LineColor; // 0x80
		::System::Single LineSize; // 0x90
		::System::Single CurveValue; // 0x94
		::System::Int32 LineLevel; // 0x98
		::System::Boolean AllDirty; // 0x9C
		::RPG::Client::AULinePointMod PointModType; // 0xA0
		::UnityEngine::GameObject* PointObj; // 0xA8
		::UnityEngine::Vector2 ObjPoivt1; // 0xB0
		::UnityEngine::Vector2 ObjPoivt2; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_LineRColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_GET_LINERCOLOR_OFFSET))(this);
		}

		::System::Void set_LineRColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_SET_LINERCOLOR_OFFSET))(this, a1);
		}

		::System::Single get_CurrentLevel()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_GET_CURRENTLEVEL_OFFSET))(this);
		}

		::System::Void set_CurrentLevel(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_SET_CURRENTLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_AniMod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_GET_ANIMOD_OFFSET))(this);
		}

		::System::Void set_AniMod(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_SET_ANIMOD_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_START_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_E41B6A823556FEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_METHOD_5_E41B6A823556FEEA_OFFSET))(this);
		}

		::System::Void Method_5_4C288C0C3DC7B4CA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_METHOD_5_4C288C0C3DC7B4CA_OFFSET))(this);
		}

		::System::Void FreshLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_FRESHLINE_OFFSET))(this);
		}
	};
}
