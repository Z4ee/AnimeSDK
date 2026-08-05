#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Arcade::SnakeDemo { class SnakeMapLayout; }
namespace MoleMole::Arcade::SnakeDemo { class UIMapSnakeBombAnimScript_Class_1_81FF43F4A9080DC3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F30FCE0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALALPHA_OFFSET UNITYSDK_OFFSET(0x1F310270)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALDISTRATIO_OFFSET UNITYSDK_OFFSET(0x1F310160)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALDIST_OFFSET UNITYSDK_OFFSET(0x1F310100)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALLOGICPOS_OFFSET UNITYSDK_OFFSET(0x1F310320)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALSCALE_OFFSET UNITYSDK_OFFSET(0x1F3101C0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F3113B0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_GET_TEMPLATEIMAGE_OFFSET UNITYSDK_OFFSET(0x1F30FC40)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_INIT_OFFSET UNITYSDK_OFFSET(0x1F30FE30)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_METHOD_5_96C50D1FFFF02B8F_OFFSET UNITYSDK_OFFSET(0x1F311250)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_METHOD_5_ACF6105ACE2643C6_OFFSET UNITYSDK_OFFSET(0x1F310780)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_METHOD_5_B7DBAFD3FC8E9209_OFFSET UNITYSDK_OFFSET(0x1F311790)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_METHOD_5_C5769C74973D9290_OFFSET UNITYSDK_OFFSET(0x1F310810)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_METHOD_5_E22DF78D30208914_OFFSET UNITYSDK_OFFSET(0x1F310710)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_PLAY_OFFSET UNITYSDK_OFFSET(0x1F3103A0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RECYCLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F310010)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RELEASE_OFFSET UNITYSDK_OFFSET(0x1F30FE90)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RESETCENTERPOS_OFFSET UNITYSDK_OFFSET(0x1F310C50)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F311600)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int UIMapSnakeBombAnimScript_TypeDefinitionIndex = 94953;

	class UIMapSnakeBombAnimScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 maxDistance; // 0x18
		::UnityEngine::AnimationCurve* scaleCurve; // 0x20
		::UnityEngine::AnimationCurve* alphaCurve; // 0x28
		::MoleMole::Arcade::SnakeDemo::SnakeMapLayout* Field_5_7; // 0x30
		::System::Int32 Field_5_6; // 0x38
		::System::Int32 Field_5_5; // 0x3C
		::System::Single Field_5_4; // 0x40
		::System::Int32 Field_5_11; // 0x44
		::System::Int32 Field_5_10; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_Class_1_81FF43F4A9080DC3*>* Field_5_9; // 0x50
		::System::Boolean Field_5_8; // 0x58
		::UnityEngine::GameObject* template_; // 0x60
		::System::Collections::Generic::Queue_1<::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_Class_1_81FF43F4A9080DC3*>* Field_5_14; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_TemplateImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_GET_TEMPLATEIMAGE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_AWAKE_OFFSET))(this);
		}

		::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript* Init()
		{
			return ((::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_INIT_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RELEASE_OFFSET))(this);
		}

		::System::Int32 CalDist(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALDIST_OFFSET))(this, a1, a2);
		}

		::System::Single CalDistRatio(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALDISTRATIO_OFFSET))(this, a1);
		}

		::System::Single CalScale(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALSCALE_OFFSET))(this, a1);
		}

		::System::Single CalAlpha(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALALPHA_OFFSET))(this, a1);
		}

		::System::Void CalLogicPos(::System::Int32 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CALLOGICPOS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Play(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_PLAY_OFFSET))(this, a1);
		}

		::System::Void ResetCenterPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RESETCENTERPOS_OFFSET))(this, a1);
		}

		::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_Class_1_81FF43F4A9080DC3* CreateInstance()
		{
			return ((::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_Class_1_81FF43F4A9080DC3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CREATEINSTANCE_OFFSET))(this);
		}

		::System::Void RecycleInstance(::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_Class_1_81FF43F4A9080DC3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_Class_1_81FF43F4A9080DC3*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_RECYCLEINSTANCE_OFFSET))(this, a1);
		}

		::System::Void Method_5_C5769C74973D9290(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_METHOD_5_C5769C74973D9290_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_96C50D1FFFF02B8F(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_METHOD_5_96C50D1FFFF02B8F_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_E22DF78D30208914(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_METHOD_5_E22DF78D30208914_OFFSET))(this, a1, a2);
		}

		::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_Class_1_81FF43F4A9080DC3* Method_5_ACF6105ACE2643C6(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Arcade::SnakeDemo::UIMapSnakeBombAnimScript_Class_1_81FF43F4A9080DC3*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_METHOD_5_ACF6105ACE2643C6_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_B7DBAFD3FC8E9209(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_METHOD_5_B7DBAFD3FC8E9209_OFFSET))(this, a1);
		}
	};
}
