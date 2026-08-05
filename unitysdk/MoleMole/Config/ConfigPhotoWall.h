#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/SFixPhotoData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

#define MOLEMOLE_CONFIG_CONFIGPHOTOWALL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C47000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoWall_TypeDefinitionIndex = 89830;

	class ConfigPhotoWall : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single ValidOverlapRate; // 0x58
		::System::Single ValidWallOverlapRate; // 0x5C
		::System::Single DragEnableRate; // 0x60
		::UnityEngine::Gradient* CursorSelectColor; // 0x68
		::UnityEngine::Gradient* EditingSelectColor; // 0x70
		::UnityEngine::Gradient* ErrorSelectColor; // 0x78
		::System::Single OutlineThickness; // 0x80
		::System::Single BlackCurtainTime; // 0x84
		::System::Single BlackCurtainStayTime; // 0x88
		::System::Single RotateSpeed; // 0x8C
		::System::Single GamepadMoveVertical; // 0x90
		::System::Single GamepadMoveHorizontal; // 0x94
		::System::Single TwoPointDragScreenZoomSensitivity; // 0x98
		::System::Single MouseScrollZoomSensitivity; // 0x9C
		::System::Single CameraAnimationTime; // 0xA0
		::System::Single MoveVertical; // 0xA4
		::System::Single MoveHorizontal; // 0xA8
		::System::Single ExClampValue; // 0xAC
		::UnityEngine::AnimationCurve* ExClampCurve; // 0xB0
		::System::Int32 SectionId; // 0xB8
		::System::String* MalePos; // 0xC0
		::System::String* FemalePos; // 0xC8
		::System::Int32 OtherDefaultWall; // 0xD0
		::System::Collections::Generic::List_1<::MoleMole::Config::SFixPhotoData>* OtherDefaults; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOWALL__CTOR_OFFSET))(this);
		}
	};
}
