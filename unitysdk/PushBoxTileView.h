#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_1_0C791B68CB2A5BF5;
class Class_1_E13183B148E560DC;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }

#define PUSHBOXTILEVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C3E6390)
#define PUSHBOXTILEVIEW_GETWORLDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x1C3E6B90)
#define PUSHBOXTILEVIEW_GET_SELFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C3E72D0)
#define PUSHBOXTILEVIEW_GET_SELFTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C3E7160)
#define PUSHBOXTILEVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x1C3E67E0)
#define PUSHBOXTILEVIEW_PLAYFRONTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C3E6580)
#define PUSHBOXTILEVIEW_PLAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C3E6E50)
#define PUSHBOXTILEVIEW_REFRESHBYSERVERINFO_OFFSET UNITYSDK_OFFSET(0x1C3E6C30)
#define PUSHBOXTILEVIEW_SETHIDDEN_OFFSET UNITYSDK_OFFSET(0x1C3E63F0)
#define PUSHBOXTILEVIEW_SETWORLDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x1C3E6B00)
#define PUSHBOXTILEVIEW_SHOWREALTILE_OFFSET UNITYSDK_OFFSET(0x1C3E6730)
#define PUSHBOXTILEVIEW_SHOWRESETFRAME_OFFSET UNITYSDK_OFFSET(0x1C3E64E0)
#define PUSHBOXTILEVIEW_SHOWWHITE_OFFSET UNITYSDK_OFFSET(0x1C3E6450)
#define PUSHBOXTILEVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C3E7000)
#define PUSHBOXTILEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E7440)

inline static constexpr unsigned int PushBoxTileView_TypeDefinitionIndex = 54643;

class PushBoxTileView : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::SpriteRenderer* spriteRenderer; // 0x18
	::UnityEngine::SpriteRenderer* gridRenderer; // 0x20
	::UnityEngine::SpriteRenderer* frontWhiteRender; // 0x28
	::UnityEngine::Transform* selfTran; // 0x30
	::UnityEngine::GameObject* go; // 0x38
	::Class_1_E13183B148E560DC* spriteRenderAnim; // 0x40
	::Class_1_E13183B148E560DC* gridRenderAnim; // 0x48
	::UnityEngine::Vector2 _cacheSize; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_AWAKE_OFFSET))(this);
	}

	::System::Void SetHidden()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_SETHIDDEN_OFFSET))(this);
	}

	::System::Void ShowWhite()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_SHOWWHITE_OFFSET))(this);
	}

	::System::Void ShowResetFrame(::System::String* resetFrameKey)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_SHOWRESETFRAME_OFFSET))(this, resetFrameKey);
	}

	::System::Void ShowRealTile()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_SHOWREALTILE_OFFSET))(this);
	}

	::System::Void Init(::MoleMole::HollowChessboard::HollowCell cell, ::Class_1_0C791B68CB2A5BF5* spriteResourceProxy, ::System::String* gridKey, ::System::Boolean initMap, ::UnityEngine::Vector2 tileSize)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_0C791B68CB2A5BF5*, ::System::String*, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_INIT_OFFSET))(this, cell, spriteResourceProxy, gridKey, initMap, tileSize);
	}

	::System::Void SetWorldLocalPos(::UnityEngine::Vector3 position)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_SETWORLDLOCALPOS_OFFSET))(this, position);
	}

	::UnityEngine::Vector3 GetWorldLocalPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_GETWORLDLOCALPOS_OFFSET))(this);
	}

	::System::Void RefreshByServerInfo(::Class_1_0AEBFEBDADDA07AC* serverInfo, ::System::Boolean initMap)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AEBFEBDADDA07AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_REFRESHBYSERVERINFO_OFFSET))(this, serverInfo, initMap);
	}

	::System::Void PlayTexture(::System::String* textureSheetKey, ::UnityEngine::Events::UnityAction* finishCallBack)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_PLAYTEXTURE_OFFSET))(this, textureSheetKey, finishCallBack);
	}

	::System::Void PlayFrontTexture(::System::String* textureSheetKey, ::UnityEngine::Events::UnityAction* finishCallBack)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_PLAYFRONTTEXTURE_OFFSET))(this, textureSheetKey, finishCallBack);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_UPDATE_OFFSET))(this);
	}

	::UnityEngine::Transform* get_SelfTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_GET_SELFTRANSFORM_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_SelfGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_GET_SELFGAMEOBJECT_OFFSET))(this);
	}
};
