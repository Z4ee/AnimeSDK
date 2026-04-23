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

#define RPG_CLIENT_TUTORIALGUIDEUTILS_AUTOINITGUIDESHOWCONFIG_OFFSET UNITYSDK_OFFSET(0xB396670)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_BLOCKCLICK_1_OFFSET UNITYSDK_OFFSET(0xB399F60)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_BLOCKCLICK_OFFSET UNITYSDK_OFFSET(0xB399AE0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CANSHOWGUIDE_OFFSET UNITYSDK_OFFSET(0xB39AEB0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CANTRIGGERTUTORIALBYDIALOGNAME_OFFSET UNITYSDK_OFFSET(0xB39B260)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATAREQUIPLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xB39AA30)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0xB39ACD0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATARPROMOTION_OFFSET UNITYSDK_OFFSET(0xB39AB90)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKFOCUS_OFFSET UNITYSDK_OFFSET(0xB39B110)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKONMAZEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB39AE10)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_DISABLETUTORIALNODECMPT_OFFSET UNITYSDK_OFFSET(0xB39A350)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_FORCESETTUTORIALDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xB39AFC0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_FORCESETTUTORIALKEY_OFFSET UNITYSDK_OFFSET(0xB39B070)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETDIRECTIONTYPEBYNINEPARTS_OFFSET UNITYSDK_OFFSET(0xB396980)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETDIRECTIONTYPEBYQUADRANT_OFFSET UNITYSDK_OFFSET(0xB3982E0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETNODETYPE_OFFSET UNITYSDK_OFFSET(0xB3991F0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETPLAYERACTION_OFFSET UNITYSDK_OFFSET(0xB39A420)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBY2DNODE_OFFSET UNITYSDK_OFFSET(0xB398560)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBY3DNODE_OFFSET UNITYSDK_OFFSET(0xB398900)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODEIDLIST_OFFSET UNITYSDK_OFFSET(0xB394980)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODEID_OFFSET UNITYSDK_OFFSET(0xB3992B0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODELIST_OFFSET UNITYSDK_OFFSET(0xB399670)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODE_OFFSET UNITYSDK_OFFSET(0xB399040)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYRUNTIMETUTORIALNODE_OFFSET UNITYSDK_OFFSET(0xB398E10)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYUI3DNODE_OFFSET UNITYSDK_OFFSET(0xB398870)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_GETTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0xB3985E0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_ISALLOWOVERRIDEPREFABPATH_1_OFFSET UNITYSDK_OFFSET(0xB39B350)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_ISALLOWOVERRIDEPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB39B300)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_ISAPPROXIMATELYSQUARE_OFFSET UNITYSDK_OFFSET(0xB39A750)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_ISGUIDETALKTYPE_OFFSET UNITYSDK_OFFSET(0xB397210)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_SETNODERECTBYSCREENSIZE_OFFSET UNITYSDK_OFFSET(0xB399950)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_SETNODESIZE_OFFSET UNITYSDK_OFFSET(0xB3998C0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_SYNC2DNODEWITHSCREENRECT_OFFSET UNITYSDK_OFFSET(0xB394D20)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_TRIGGERTUTORIALCUSTOMSTRING_OFFSET UNITYSDK_OFFSET(0xB39A830)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_TRYPROCESSDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0xB39B3A0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS_UNBLOCKCLICK_OFFSET UNITYSDK_OFFSET(0xB39A220)
#define RPG_CLIENT_TUTORIALGUIDEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xB39B860)
#define RPG_CLIENT_TUTORIALGUIDEUTILS__GETSCREENRECTBYRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB3986B0)
#define RPG_CLIENT_TUTORIALGUIDEUTILS__REFRESHSCREENRECT_OFFSET UNITYSDK_OFFSET(0xB398D20)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideUtils_TypeDefinitionIndex = 62890;

	class TutorialGuideUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::TutorialGuideDirectionType>** StaticGet__DirectionMap()
		{
			return (::Il2CppArray<::RPG::GameCore::TutorialGuideDirectionType>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuideUtils_TypeDefinitionIndex)->GetStaticField(0x26D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rect GetScreenRectBy2DNode(::UnityEngine::RectTransform* rt, ::UnityEngine::Camera* targetCamera)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::RectTransform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBY2DNODE_OFFSET))(rt, targetCamera);
		}

		static ::UnityEngine::Rect GetScreenRectByUI3DNode(::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYUI3DNODE_OFFSET))(transform);
		}

		static ::UnityEngine::Rect GetScreenRectBy3DNode(::UnityEngine::Transform* transform, ::UnityEngine::Camera* targetCamera)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Transform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBY3DNODE_OFFSET))(transform, targetCamera);
		}

		static ::UnityEngine::Rect GetScreenRectByRuntimeTutorialNode(::RPG::Client::RuntimeTutorialNode* tutorialNode)
		{
			return ((::UnityEngine::Rect(*)(::RPG::Client::RuntimeTutorialNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYRUNTIMETUTORIALNODE_OFFSET))(tutorialNode);
		}

		static ::UnityEngine::Rect GetScreenRectByNode(::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODE_OFFSET))(transform);
		}

		static ::UnityEngine::Rect GetScreenRectByNodeID(::System::String* nodeID)
		{
			return ((::UnityEngine::Rect(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODEID_OFFSET))(nodeID);
		}

		static ::UnityEngine::Rect GetScreenRectByNodeList(::System::Collections::Generic::IList_1<::UnityEngine::Transform*>* nodeList)
		{
			return ((::UnityEngine::Rect(*)(::System::Collections::Generic::IList_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODELIST_OFFSET))(nodeList);
		}

		static ::UnityEngine::Rect GetScreenRectByNodeIDList(::System::Collections::Generic::IList_1<::System::String*>* nodeIDList)
		{
			return ((::UnityEngine::Rect(*)(::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETSCREENRECTBYNODEIDLIST_OFFSET))(nodeIDList);
		}

		static ::System::Void SetNodeSize(::UnityEngine::RectTransform* rect, ::System::Single width, ::System::Single height)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_SETNODESIZE_OFFSET))(rect, width, height);
		}

		static ::System::Void SetNodeRectByScreenSize(::UnityEngine::RectTransform* rect, ::UnityEngine::Rect screenRect)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_SETNODERECTBYSCREENSIZE_OFFSET))(rect, screenRect);
		}

		static ::System::Void Sync2DNodeWithScreenRect(::UnityEngine::RectTransform* rt, ::UnityEngine::Rect screenRect, ::System::Boolean copySize, ::System::Boolean useOriginRatio, ::System::Boolean copyPos)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Rect, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_SYNC2DNODEWITHSCREENRECT_OFFSET))(rt, screenRect, copySize, useOriginRatio, copyPos);
		}

		static ::System::Void BlockClick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_BLOCKCLICK_OFFSET))();
		}

		static ::System::Void BlockClick_1(::UnityEngine::Rect screenRect)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_BLOCKCLICK_1_OFFSET))(screenRect);
		}

		static ::System::Void UnblockClick()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_UNBLOCKCLICK_OFFSET))();
		}

		static ::System::Void DisableTutorialNodeCmpt(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_DISABLETUTORIALNODECMPT_OFFSET))(gameObject);
		}

		static ::InControl::PlayerAction* GetPlayerAction(::System::String* actionName)
		{
			return ((::InControl::PlayerAction*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETPLAYERACTION_OFFSET))(actionName);
		}

		static ::System::Boolean IsApproximatelySquare(::UnityEngine::Rect rect)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_ISAPPROXIMATELYSQUARE_OFFSET))(rect);
		}

		static ::System::Boolean IsGuideTalkType(::RPG::GameCore::TutorialGuideTextType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TutorialGuideTextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_ISGUIDETALKTYPE_OFFSET))(type);
		}

		static ::RPG::Client::TutorialNodeType GetNodeType(::UnityEngine::Transform* node)
		{
			return ((::RPG::Client::TutorialNodeType(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETNODETYPE_OFFSET))(node);
		}

		static ::UnityEngine::Camera* GetTargetCamera(::UnityEngine::Transform* node)
		{
			return ((::UnityEngine::Camera*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETTARGETCAMERA_OFFSET))(node);
		}

		static ::System::Void TriggerTutorialCustomString(::System::String* str, ::Il2CppArray<::System::Object*>* formats)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_TRIGGERTUTORIALCUSTOMSTRING_OFFSET))(str, formats);
		}

		static ::System::Boolean CheckAnyAvatarEquipLightCone(::System::UInt32 configID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATAREQUIPLIGHTCONE_OFFSET))(configID);
		}

		static ::System::Boolean CheckAnyAvatarPromotion(::System::UInt32 val)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATARPROMOTION_OFFSET))(val);
		}

		static ::System::Boolean CheckAnyAvatarLevel(::System::UInt32 level)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKANYAVATARLEVEL_OFFSET))(level);
		}

		static ::System::Boolean CheckOnMazeMainPage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKONMAZEMAINPAGE_OFFSET))();
		}

		static ::System::Boolean CanShowGuide()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CANSHOWGUIDE_OFFSET))();
		}

		static ::System::Void ForceSetTutorialDynamicKey(::UnityEngine::GameObject* gameObject, ::System::String* dynamicKey, ::System::String* id)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_FORCESETTUTORIALDYNAMICKEY_OFFSET))(gameObject, dynamicKey, id);
		}

		static ::System::Void ForceSetTutorialKey(::UnityEngine::GameObject* gameObject, ::System::String* key)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_FORCESETTUTORIALKEY_OFFSET))(gameObject, key);
		}

		static ::System::Boolean CheckFocus(::RPG::GameCore::TutorialGuideUIContextConfig* config)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TutorialGuideUIContextConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CHECKFOCUS_OFFSET))(config);
		}

		static ::RPG::GameCore::TutorialGuideDirectionType GetDirectionTypeByQuadrant(::UnityEngine::Rect rect)
		{
			return ((::RPG::GameCore::TutorialGuideDirectionType(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETDIRECTIONTYPEBYQUADRANT_OFFSET))(rect);
		}

		static ::RPG::GameCore::TutorialGuideDirectionType GetDirectionTypeByNineParts(::UnityEngine::Rect rect)
		{
			return ((::RPG::GameCore::TutorialGuideDirectionType(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_GETDIRECTIONTYPEBYNINEPARTS_OFFSET))(rect);
		}

		static ::System::Void AutoInitGuideShowConfig(::RPG::GameCore::TutorialGuideShowConfig* config, ::RPG::GameCore::TutorialGuideDirectionType directionType, ::UnityEngine::Rect rect)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialGuideShowConfig*, ::RPG::GameCore::TutorialGuideDirectionType, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_AUTOINITGUIDESHOWCONFIG_OFFSET))(config, directionType, rect);
		}

		static ::System::Boolean CanTriggerTutorialByDialogName(::System::String* dialogName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_CANTRIGGERTUTORIALBYDIALOGNAME_OFFSET))(dialogName);
		}

		static ::System::Boolean IsAllowOverridePrefabPath(::RPG::GameCore::TutorialGuideHintType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TutorialGuideHintType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_ISALLOWOVERRIDEPREFABPATH_OFFSET))(type);
		}

		static ::System::Boolean IsAllowOverridePrefabPath_1(::RPG::GameCore::TutorialGuideTextType type)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TutorialGuideTextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_ISALLOWOVERRIDEPREFABPATH_1_OFFSET))(type);
		}

		static ::System::String* TryProcessDynamicValue(::RPG::GameCore::TaskContext* context, ::System::String* origin)
		{
			return ((::System::String*(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS_TRYPROCESSDYNAMICVALUE_OFFSET))(context, origin);
		}

		static ::UnityEngine::Rect _RefreshScreenRect(::UnityEngine::Rect origin, ::UnityEngine::Vector3 worldPoint, ::UnityEngine::Camera* targetCamera)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS__REFRESHSCREENRECT_OFFSET))(origin, worldPoint, targetCamera);
		}

		static ::UnityEngine::Rect _GetScreenRectByRectTransform(::UnityEngine::RectTransform* rt, ::UnityEngine::Camera* targetCamera)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::RectTransform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDEUTILS__GETSCREENRECTBYRECTTRANSFORM_OFFSET))(rt, targetCamera);
		}
	};
}
