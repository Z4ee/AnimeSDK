#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ComicImgStyleConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Timeline { class BubbleEvent; }

#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_CLEARALLCACHE_OFFSET UNITYSDK_OFFSET(0x1DB7F4D0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_CREATEBUBBLE_OFFSET UNITYSDK_OFFSET(0x1DB80080)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_CREATEDECORATIONNODE_OFFSET UNITYSDK_OFFSET(0x1DB815E0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_CREATETEMPNODE_OFFSET UNITYSDK_OFFSET(0x1DB7F340)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETBUBBLENODE_OFFSET UNITYSDK_OFFSET(0x1DB800A0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETIMAGE01TRANS_OFFSET UNITYSDK_OFFSET(0x1DB7E7A0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETSUBSPRITEROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DB7E380)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETTEMPLATENODE_OFFSET UNITYSDK_OFFSET(0x1DB7F120)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETTEMPLATEPARTIMG_OFFSET UNITYSDK_OFFSET(0x1DB7EC40)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETTRANSNAMEDDFS_OFFSET UNITYSDK_OFFSET(0x1DB7EF20)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_GET_ADAPTERTYPE_OFFSET UNITYSDK_OFFSET(0x1DB816D0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_GET_ARROWTARGETPOINTSPRITE_OFFSET UNITYSDK_OFFSET(0x1DB816C0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_GET_COMICIMGSTYLECONFIG_OFFSET UNITYSDK_OFFSET(0x1DB815D0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DB7BF20)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_INITBUBBLE_OFFSET UNITYSDK_OFFSET(0x1DB80090)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_INIT_OFFSET UNITYSDK_OFFSET(0x1DB7C0B0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_JUSTGETTEMPLATENODE_OFFSET UNITYSDK_OFFSET(0x1DB7F350)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_SETARROWTARGETPOINTPOS_OFFSET UNITYSDK_OFFSET(0x1DB80F80)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_SHOWARROWTARGETPOINTOFKEY_OFFSET UNITYSDK_OFFSET(0x1DB812E0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_SHOWBUBBLEGROUP_OFFSET UNITYSDK_OFFSET(0x1DB7F8C0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_SHOWDECORATIONGROUP_OFFSET UNITYSDK_OFFSET(0x1DB80270)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_SHOWPICDECOGROUP_OFFSET UNITYSDK_OFFSET(0x1DB80730)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWICTHBUBBLERANGESHOWER_OFFSET UNITYSDK_OFFSET(0x1DB7EA70)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWITCHBUBBLESTATE_OFFSET UNITYSDK_OFFSET(0x1DB7FD80)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWITCHDECORATIONNODESTATE_OFFSET UNITYSDK_OFFSET(0x1DB80C40)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWITCHMASKSTATE_OFFSET UNITYSDK_OFFSET(0x1DB7E7B0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWITCHPICTUREDECORATIONNODESTATE_OFFSET UNITYSDK_OFFSET(0x1DB80F30)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWITCHVOICEDECORATIONNODESTATE_OFFSET UNITYSDK_OFFSET(0x1DB80BF0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB816E0)
#define MOLEMOLE_COMIC_COMICBEHAVIORMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7C020)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int ComicBehaviorMgr_TypeDefinitionIndex = 32141;

	class ComicBehaviorMgr : public ::System::Object
	{
	public:
		static ::UnityEngine::Sprite** StaticGet__arrowTargetPointSprite()
		{
			return (::UnityEngine::Sprite**)Il2CppClass::FromTypeDefinitionIndex(ComicBehaviorMgr_TypeDefinitionIndex)->GetStaticField(0x269C0);
		}
		static ::MoleMole::Comic::ComicBehaviorMgr** StaticGet_m_pInstance()
		{
			return (::MoleMole::Comic::ComicBehaviorMgr**)Il2CppClass::FromTypeDefinitionIndex(ComicBehaviorMgr_TypeDefinitionIndex)->GetStaticField(0x269C8);
		}
		// static const ::System::String* STYLE_ROOT_PATH; // 0x0
		// static const ::System::String* STYLE_ROOT_NAME; // 0x0
		// static const ::System::String* UI_MASK_PIC_NAME; // 0x0
		// static const ::System::String* BUBBLE_ROOT_PATH; // 0x0
		// static const ::System::String* BUBBLE_ROOT_NAME; // 0x0
		// static const ::System::String* DECORATION_ROOT_PATH; // 0x0
		// static const ::System::String* DECORATION_ROOT_NAME; // 0x0
		// static const ::System::String* PIC_DECT_ROOT_PATH; // 0x0
		// static const ::System::String* PIC_DECT_ROOT_NAME; // 0x0
		// static const ::System::String* SUB_SPRITE_ROOT_NAME; // 0x0
		// static const ::System::String* IMG_ROOT_PATH; // 0x0
		// static const ::System::String* BUBBLE_PREFAB_PATH; // 0x0
		// static const ::System::String* VOICE_DECORATION_PREFAB_PATH; // 0x0
		// static const ::System::String* PICTURE_DECORATION_PREFAB_PATH; // 0x0
		// static const ::System::String* UI_MASK_PIC_RESOURCE_PATH; // 0x0
		// static const ::System::String* BUBBLE_RANGE_PROTO_NAME; // 0x0
		// static const ::System::String* BUBBLE_RANGE_SHOWER_NAME; // 0x0
		// static const ::System::String* BUBBLE_RANGE_SHOWER_PIC_RESOURCE_PATH; // 0x0
		::UnityEngine::Transform* m_stBubbleRoot; // 0x10
		::MoleMole::ComicImgStyleConfig* m_stStyleConfig; // 0x18
		::UnityEngine::Transform* m_stBubbleRangeShower; // 0x20
		::UnityEngine::Transform* m_stImage01; // 0x28
		::System::Type* m_stAdapterType; // 0x30
		::UnityEngine::Transform* m_stPicDecoRoot; // 0x38
		::UnityEngine::Transform* m_stSubSpriteRoot; // 0x40
		::UnityEngine::Transform* m_stDecorationRoot; // 0x48
		::UnityEngine::Transform* m_stATPRoot; // 0x50
		::System::Func_4<::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Timeline::BubbleEvent*, ::UnityEngine::Transform*>* m_fcCreateBubble; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* m_stDecorationPrefabMap; // 0x60
		::UnityEngine::Transform* m_stTemplateRoot; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR__CCTOR_OFFSET))();
		}

		static ::MoleMole::Comic::ComicBehaviorMgr* get_Instance()
		{
			return ((::MoleMole::Comic::ComicBehaviorMgr*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_INIT_OFFSET))(this, root);
		}

		::UnityEngine::Transform* GetSubSpriteRootTransform(::System::String* styleName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETSUBSPRITEROOTTRANSFORM_OFFSET))(this, styleName);
		}

		::UnityEngine::Transform* GetImage01Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETIMAGE01TRANS_OFFSET))(this);
		}

		::System::Void SwitchMaskState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWITCHMASKSTATE_OFFSET))(this, isShow);
		}

		::System::Void SwicthBubbleRangeShower(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWICTHBUBBLERANGESHOWER_OFFSET))(this, isShow);
		}

		::UnityEngine::Transform* GetTemplatePartImg(::UnityEngine::Transform* templateNode, ::MoleMole::ComicImgPart partType)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::ComicImgPart))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETTEMPLATEPARTIMG_OFFSET))(this, templateNode, partType);
		}

		::UnityEngine::Transform* GetTemplateNode(::System::String* styleName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETTEMPLATENODE_OFFSET))(this, styleName);
		}

		::UnityEngine::Transform* JustGetTemplateNode(::System::String* styleName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_JUSTGETTEMPLATENODE_OFFSET))(this, styleName);
		}

		::System::Void ClearAllCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_CLEARALLCACHE_OFFSET))(this);
		}

		::UnityEngine::Transform* ShowBubbleGroup(::System::String* groupName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_SHOWBUBBLEGROUP_OFFSET))(this, groupName);
		}

		::UnityEngine::Transform* SwitchBubbleState(::UnityEngine::Transform* groupNode, ::System::String* key, ::UnityEngine::Timeline::BubbleEvent* bubbleEvent, ::System::Boolean isShow)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Timeline::BubbleEvent*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWITCHBUBBLESTATE_OFFSET))(this, groupNode, key, bubbleEvent, isShow);
		}

		::UnityEngine::Transform* GetBubbleNode(::System::String* groupName, ::System::String* key)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETBUBBLENODE_OFFSET))(this, groupName, key);
		}

		::UnityEngine::Transform* ShowDecorationGroup(::System::String* groupName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_SHOWDECORATIONGROUP_OFFSET))(this, groupName);
		}

		::UnityEngine::Transform* ShowPicDecoGroup(::System::String* groupName)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_SHOWPICDECOGROUP_OFFSET))(this, groupName);
		}

		::UnityEngine::Transform* SwitchVoiceDecorationNodeState(::UnityEngine::Transform* groupRoot, ::System::String* key, ::System::Boolean isShow)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWITCHVOICEDECORATIONNODESTATE_OFFSET))(this, groupRoot, key, isShow);
		}

		::UnityEngine::Transform* SwitchPictureDecorationNodeState(::UnityEngine::Transform* groupRoot, ::System::String* key, ::System::Boolean isShow)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWITCHPICTUREDECORATIONNODESTATE_OFFSET))(this, groupRoot, key, isShow);
		}

		::System::Void SetArrowTargetPointPos(::System::String* key, ::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_SETARROWTARGETPOINTPOS_OFFSET))(this, key, worldPos);
		}

		::System::Void ShowArrowTargetPointOfKey(::System::String* key, ::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_SHOWARROWTARGETPOINTOFKEY_OFFSET))(this, key, show);
		}

		::MoleMole::ComicImgStyleConfig* get_ComicImgStyleConfig()
		{
			return ((::MoleMole::ComicImgStyleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_GET_COMICIMGSTYLECONFIG_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTransNamedDFS(::UnityEngine::Transform* transform, ::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_GETTRANSNAMEDDFS_OFFSET))(this, transform, name);
		}

		::UnityEngine::Transform* CreateBubble(::UnityEngine::Transform* root, ::System::String* key)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_CREATEBUBBLE_OFFSET))(this, root, key);
		}

		::System::Void InitBubble(::UnityEngine::Transform* root, ::UnityEngine::Transform* bubbleObj, ::UnityEngine::Timeline::BubbleEvent* info)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_INITBUBBLE_OFFSET))(this, root, bubbleObj, info);
		}

		::UnityEngine::Transform* SwitchDecorationNodeState(::UnityEngine::Transform* groupRoot, ::System::String* key, ::System::Boolean isShow, ::System::String* prefabPath)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_SWITCHDECORATIONNODESTATE_OFFSET))(this, groupRoot, key, isShow, prefabPath);
		}

		::UnityEngine::GameObject* CreateDecorationNode(::UnityEngine::Transform* root, ::System::String* key, ::System::String* prefabPath)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_CREATEDECORATIONNODE_OFFSET))(this, root, key, prefabPath);
		}

		::UnityEngine::GameObject* CreateTempNode(::UnityEngine::Transform* root, ::System::String* styleName)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_CREATETEMPNODE_OFFSET))(this, root, styleName);
		}

		static ::UnityEngine::Sprite* get_arrowTargetPointSprite()
		{
			return ((::UnityEngine::Sprite*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_GET_ARROWTARGETPOINTSPRITE_OFFSET))();
		}

		::System::Type* get_adapterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_COMICBEHAVIORMGR_GET_ADAPTERTYPE_OFFSET))(this);
		}
	};
}
