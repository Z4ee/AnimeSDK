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

#define RPG_CLIENT_AUILINECTRL_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x9A94640)
#define RPG_CLIENT_AUILINECTRL_FRESHLINE_OFFSET UNITYSDK_OFFSET(0x9A94400)
#define RPG_CLIENT_AUILINECTRL_GET_ANIMOD_OFFSET UNITYSDK_OFFSET(0x9A94350)
#define RPG_CLIENT_AUILINECTRL_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x9A942E0)
#define RPG_CLIENT_AUILINECTRL_GET_LINERCOLOR_OFFSET UNITYSDK_OFFSET(0x9A940C0)
#define RPG_CLIENT_AUILINECTRL_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x9A94890)
#define RPG_CLIENT_AUILINECTRL_METHOD_5_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x9A94690)
#define RPG_CLIENT_AUILINECTRL_SET_ANIMOD_OFFSET UNITYSDK_OFFSET(0x9A94360)
#define RPG_CLIENT_AUILINECTRL_SET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x9A942F0)
#define RPG_CLIENT_AUILINECTRL_SET_LINERCOLOR_OFFSET UNITYSDK_OFFSET(0x9A940D0)
#define RPG_CLIENT_AUILINECTRL_START_OFFSET UNITYSDK_OFFSET(0x9A943B0)
#define RPG_CLIENT_AUILINECTRL__CTOR_OFFSET UNITYSDK_OFFSET(0x9A94A00)

namespace RPG::Client
{
	inline static constexpr unsigned int AUiLineCtrl_TypeDefinitionIndex = 66795;

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

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_5_35942D7A8A374AB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_METHOD_5_35942D7A8A374AB0_OFFSET))(this);
		}

		::System::Void FreshLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUILINECTRL_FRESHLINE_OFFSET))(this);
		}
	};
}
