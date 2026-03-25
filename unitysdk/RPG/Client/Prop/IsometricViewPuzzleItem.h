#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/IsometricViewBox.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_GETBOXTYPE_OFFSET UNITYSDK_OFFSET(0xA0AFA50)
#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_ISSIDE1_OFFSET UNITYSDK_OFFSET(0xA0AFCB0)
#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_METHOD_5_0C5E7E6B860B221F_OFFSET UNITYSDK_OFFSET(0xA0AF3A0)
#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_METHOD_5_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xA0AEB10)
#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xA0AF890)
#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_SETINISOMETRIC_OFFSET UNITYSDK_OFFSET(0xA0AF830)
#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_SETINITSTATE_OFFSET UNITYSDK_OFFSET(0xA0AF0E0)
#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_SETLINKERENABLE_OFFSET UNITYSDK_OFFSET(0xA0AF9F0)
#define RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA0AFD00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int IsometricViewPuzzleItem_TypeDefinitionIndex = 64094;

	class IsometricViewPuzzleItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* PreviewCamera; // 0x18
		::System::Single ProjectionHeight; // 0x20
		::System::Single ToSidePitch; // 0x24
		::UnityEngine::Vector3 ExceptOffset; // 0x28
		::UnityEngine::Vector3 ExceptScale; // 0x34
		::System::String* PreviewCameraKey; // 0x40
		::System::String* ProjectionHeightKey; // 0x48
		::System::String* ToSidePitchKey; // 0x50
		::System::String* ExceptOffsetKey; // 0x58
		::System::String* ExceptScaleKey; // 0x60
		::System::Boolean Enable; // 0x68
		::UnityEngine::GameObject* Side1; // 0x70
		::UnityEngine::GameObject* Side2; // 0x78
		::UnityEngine::BoxCollider* Side1From; // 0x80
		::UnityEngine::BoxCollider* Side1To; // 0x88
		::UnityEngine::BoxCollider* Side1Trigger; // 0x90
		::UnityEngine::BoxCollider* Side1Except; // 0x98
		::UnityEngine::BoxCollider* Side2From; // 0xA0
		::UnityEngine::BoxCollider* Side2To; // 0xA8
		::UnityEngine::BoxCollider* Side2Trigger; // 0xB0
		::UnityEngine::BoxCollider* Side2Except; // 0xB8
		::System::Boolean Init; // 0xC0
		::System::Boolean InIsometric; // 0xC1
		::System::Boolean LinkerEnable; // 0xC2
		::System::Boolean DrawGizmos; // 0xC3
		::System::Boolean EditorMode; // 0xC4
		::System::UInt32 Priority; // 0xC8
		::UnityEngine::GameObject* Field_5_27; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_1293CB739F1151A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_METHOD_5_1293CB739F1151A1_OFFSET))(this);
		}

		::System::Void SetInitState(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::UInt32 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_SETINITSTATE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_0C5E7E6B860B221F(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_METHOD_5_0C5E7E6B860B221F_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetInIsometric(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_SETINISOMETRIC_OFFSET))(this, a1);
		}

		::System::Void SetLinkerEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_SETLINKERENABLE_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::IsometricViewBox GetBoxType(::UnityEngine::BoxCollider* a1)
		{
			return ((::RPG::Client::Prop::IsometricViewBox(*)(::PVOID, ::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_GETBOXTYPE_OFFSET))(this, a1);
		}

		::System::Boolean IsSide1(::RPG::Client::Prop::IsometricViewBox a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::IsometricViewBox))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_ISSIDE1_OFFSET))(this, a1);
		}

		::System::Void Method_5_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ISOMETRICVIEWPUZZLEITEM_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
		}
	};
}
