#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialNodeType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideDirectionType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideHintType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideTextType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class PlayerAction; }
namespace RPG::Client { class RuntimeTutorialNode; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialGuideShowConfig; }
namespace RPG::GameCore { class TutorialGuideUIContextConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TUTORIALGUIDEUTILS_AUTOINITGUIDESHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF6750)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_BLOCKCLICK_1_OFFSET UNITYSDK_OFFSET(0xCAF9D10)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_BLOCKCLICK_OFFSET UNITYSDK_OFFSET(0xCAF98C0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CANSHOWGUIDE_OFFSET UNITYSDK_OFFSET(0xCAFB1A0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CANTRIGGERTUTORIALBYDIALOGNAME_OFFSET UNITYSDK_OFFSET(0xCAFB550)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATAREQUIPLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xCAFA640)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0xCAFAD70)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATARPROMOTION_OFFSET UNITYSDK_OFFSET(0xCAFA9E0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKFOCUS_OFFSET UNITYSDK_OFFSET(0xCAFB400)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKONMAZEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xCAFB100)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_DISABLETUTORIALNODECMPT_OFFSET UNITYSDK_OFFSET(0xCAFA150)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_FORCESETTUTORIALDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xCAFB2B0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_FORCESETTUTORIALKEY_OFFSET UNITYSDK_OFFSET(0xCAFB360)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETDIRECTIONTYPEBYNINEPARTS_OFFSET UNITYSDK_OFFSET(0xCAF6A60)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETDIRECTIONTYPEBYQUADRANT_OFFSET UNITYSDK_OFFSET(0xCAF8340)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETNODETYPE_OFFSET UNITYSDK_OFFSET(0xCAF9230)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETPLAYERACTION_OFFSET UNITYSDK_OFFSET(0xCAFA220)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBY2DNODE_OFFSET UNITYSDK_OFFSET(0xCAF85C0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBY3DNODE_OFFSET UNITYSDK_OFFSET(0xCAF8940)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODEIDLIST_OFFSET UNITYSDK_OFFSET(0xCAF5000)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODEID_OFFSET UNITYSDK_OFFSET(0xCAF92F0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODELIST_OFFSET UNITYSDK_OFFSET(0xCAF9450)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODE_OFFSET UNITYSDK_OFFSET(0xCAF9080)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYRUNTIMETUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xCAF8E50)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYUI3DNODE_OFFSET UNITYSDK_OFFSET(0xCAF88B0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0xCAF8640)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_ISALLOWOVERRIDEPREFABPATH_1_OFFSET UNITYSDK_OFFSET(0xCAFB640)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_ISALLOWOVERRIDEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xCAFB5F0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_ISAPPROXIMATELYSQUARE_OFFSET UNITYSDK_OFFSET(0xCAF3A30)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_ISGUIDETALKTYPE_OFFSET UNITYSDK_OFFSET(0xCAF7270)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_SETNODERECTBYSCREENSIZE_OFFSET UNITYSDK_OFFSET(0xCAF9730)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_SETNODESIZE_OFFSET UNITYSDK_OFFSET(0xCAF96A0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_SYNC2DNODEWITHSCREENRECT_OFFSET UNITYSDK_OFFSET(0xCAF53B0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_TRIGGERTUTORIALCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0xCAFA4C0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_TRYPROCESSDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0xCAFB690)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_UNBLOCKCLICK_OFFSET UNITYSDK_OFFSET(0xCAFA030)
#define RPG_CLIENT_TUTORIALGUIDEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xCAFBA70)
#define RPG_CLIENT_TUTORIALGUIDEUTILS__GETSCREENRECTBYRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCAF8710)
#define RPG_CLIENT_TUTORIALGUIDEUTILS__REFRESHSCREENRECT_OFFSET UNITYSDK_OFFSET(0xCAF8D60)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideUtils_TypeDefinitionIndex = 63825;

	class TutorialGuideUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::TutorialGuideDirectionType>** StaticGet__DirectionMap()
		{
			return (::Il2CppArray<::RPG::GameCore::TutorialGuideDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideUtils_TypeDefinitionIndex)->GetStaticField(0x5B260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rect GetScreenRectBy2DNode(::UnityEngine::RectTransform* a1, ::UnityEngine::Camera* a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::RectTransform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBY2DNODE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect GetScreenRectByUI3DNode(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYUI3DNODE_OFFSET))(a1);
		}

		static ::UnityEngine::Rect GetScreenRectBy3DNode(::UnityEngine::Transform* a1, ::UnityEngine::Camera* a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Transform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBY3DNODE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect GetScreenRectByRuntimeTutorialNode(::RPG::Client::RuntimeTutorialNode* a1)
		{
			return ((::UnityEngine::Rect(*)(::RPG::Client::RuntimeTutorialNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYRUNTIMETUTORIALNODE_OFFSET))(a1);
		}

		static ::UnityEngine::Rect GetScreenRectByNode(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODE_OFFSET))(a1);
		}

		static ::UnityEngine::Rect GetScreenRectByNodeID(::System::String* a1)
		{
			return ((::UnityEngine::Rect(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODEID_OFFSET))(a1);
		}

		static ::UnityEngine::Rect GetScreenRectByNodeList(::System::Collections::Generic::IList_1<::UnityEngine::Transform*>* a1)
		{
			return ((::UnityEngine::Rect(*)(::System::Collections::Generic::IList_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODELIST_OFFSET))(a1);
		}

		static ::UnityEngine::Rect GetScreenRectByNodeIDList(::System::Collections::Generic::IList_1<::System::String*>* a1)
		{
			return ((::UnityEngine::Rect(*)(::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODEIDLIST_OFFSET))(a1);
		}

		static ::System::Void SetNodeSize(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_SETNODESIZE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetNodeRectByScreenSize(::UnityEngine::RectTransform* a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_SETNODERECTBYSCREENSIZE_OFFSET))(a1, a2);
		}

		static ::System::Void Sync2DNodeWithScreenRect(::UnityEngine::RectTransform* a1, ::UnityEngine::Rect a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Rect, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_SYNC2DNODEWITHSCREENRECT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BlockClick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_BLOCKCLICK_OFFSET))();
		}

		static ::System::Void BlockClick_1(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_BLOCKCLICK_1_OFFSET))(a1);
		}

		static ::System::Void UnblockClick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_UNBLOCKCLICK_OFFSET))();
		}

		static ::System::Void DisableTutorialNodeCmpt(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_DISABLETUTORIALNODECMPT_OFFSET))(a1);
		}

		static ::InControl::PlayerAction* GetPlayerAction(::System::String* a1)
		{
			return ((::InControl::PlayerAction*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETPLAYERACTION_OFFSET))(a1);
		}

		static ::System::Boolean IsApproximatelySquare(::UnityEngine::Rect a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_ISAPPROXIMATELYSQUARE_OFFSET))(a1);
		}

		static ::System::Boolean IsGuideTalkType(::RPG::GameCore::TutorialGuideTextType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TutorialGuideTextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_ISGUIDETALKTYPE_OFFSET))(a1);
		}

		static ::RPG::Client::TutorialNodeType GetNodeType(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::TutorialNodeType(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETNODETYPE_OFFSET))(a1);
		}

		static ::UnityEngine::Camera* GetTargetCamera(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Camera*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETTARGETCAMERA_OFFSET))(a1);
		}

		static ::System::Void TriggerTutorialCustomString(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_TRIGGERTUTORIALCUSTOMSTRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckAnyAvatarEquipLightCone(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATAREQUIPLIGHTCONE_OFFSET))(a1);
		}

		static ::System::Boolean CheckAnyAvatarPromotion(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATARPROMOTION_OFFSET))(a1);
		}

		static ::System::Boolean CheckAnyAvatarLevel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATARLEVEL_OFFSET))(a1);
		}

		static ::System::Boolean CheckOnMazeMainPage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKONMAZEMAINPAGE_OFFSET))();
		}

		static ::System::Boolean CanShowGuide()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CANSHOWGUIDE_OFFSET))();
		}

		static ::System::Void ForceSetTutorialDynamicKey(::UnityEngine::GameObject* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_FORCESETTUTORIALDYNAMICKEY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ForceSetTutorialKey(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_FORCESETTUTORIALKEY_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckFocus(::RPG::GameCore::TutorialGuideUIContextConfig* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TutorialGuideUIContextConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKFOCUS_OFFSET))(a1);
		}

		static ::RPG::GameCore::TutorialGuideDirectionType GetDirectionTypeByQuadrant(::UnityEngine::Rect a1)
		{
			return ((::RPG::GameCore::TutorialGuideDirectionType(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETDIRECTIONTYPEBYQUADRANT_OFFSET))(a1);
		}

		static ::RPG::GameCore::TutorialGuideDirectionType GetDirectionTypeByNineParts(::UnityEngine::Rect a1)
		{
			return ((::RPG::GameCore::TutorialGuideDirectionType(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETDIRECTIONTYPEBYNINEPARTS_OFFSET))(a1);
		}

		static ::System::Void AutoInitGuideShowConfig(::RPG::GameCore::TutorialGuideShowConfig* a1, ::RPG::GameCore::TutorialGuideDirectionType a2, ::UnityEngine::Rect a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialGuideShowConfig*, ::RPG::GameCore::TutorialGuideDirectionType, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_AUTOINITGUIDESHOWCONFIG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CanTriggerTutorialByDialogName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CANTRIGGERTUTORIALBYDIALOGNAME_OFFSET))(a1);
		}

		static ::System::Boolean IsAllowOverridePrefabPath(::RPG::GameCore::TutorialGuideHintType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TutorialGuideHintType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_ISALLOWOVERRIDEPREFABPATH_OFFSET))(a1);
		}

		static ::System::Boolean IsAllowOverridePrefabPath_1(::RPG::GameCore::TutorialGuideTextType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TutorialGuideTextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_ISALLOWOVERRIDEPREFABPATH_1_OFFSET))(a1);
		}

		static ::System::String* TryProcessDynamicValue(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_TRYPROCESSDYNAMICVALUE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect _RefreshScreenRect(::UnityEngine::Rect a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Camera* a3)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS__REFRESHSCREENRECT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Rect _GetScreenRectByRectTransform(::UnityEngine::RectTransform* a1, ::UnityEngine::Camera* a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::RectTransform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS__GETSCREENRECTBYRECTTRANSFORM_OFFSET))(a1, a2);
		}
	};
}
