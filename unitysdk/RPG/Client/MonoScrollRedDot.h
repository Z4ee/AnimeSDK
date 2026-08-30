#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_MONOSCROLLREDDOT_ADDREDDOTROOT_OFFSET UNITYSDK_OFFSET(0x1AD0C5D0)
#define RPG_CLIENT_MONOSCROLLREDDOT_CLEARREDDOTROOTS_OFFSET UNITYSDK_OFFSET(0x1AD0C540)
#define RPG_CLIENT_MONOSCROLLREDDOT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD0CCF0)
#define RPG_CLIENT_MONOSCROLLREDDOT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AD0CB90)
#define RPG_CLIENT_MONOSCROLLREDDOT_ONSCROLLRECTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AD0CE80)
#define RPG_CLIENT_MONOSCROLLREDDOT_SETUPSCROLLREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD0C6C0)
#define RPG_CLIENT_MONOSCROLLREDDOT_START_OFFSET UNITYSDK_OFFSET(0x1AD0CA20)
#define RPG_CLIENT_MONOSCROLLREDDOT__CHECKANDREFRESHUIDATAS_OFFSET UNITYSDK_OFFSET(0x1AD0CD50)
#define RPG_CLIENT_MONOSCROLLREDDOT__CHECKSCROLLREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD0CED0)
#define RPG_CLIENT_MONOSCROLLREDDOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD0D5B0)
#define RPG_CLIENT_MONOSCROLLREDDOT__ISSHOWINGREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD0D480)
#define RPG_CLIENT_MONOSCROLLREDDOT__REFRESHREDDOTCHILDCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1AD0D300)
#define RPG_CLIENT_MONOSCROLLREDDOT__REFRESHSCROLLREDDOT_OFFSET UNITYSDK_OFFSET(0x1AD0C990)
#define RPG_CLIENT_MONOSCROLLREDDOT__REFRESHUIDATAS_OFFSET UNITYSDK_OFFSET(0x1AD0C750)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoScrollRedDot_TypeDefinitionIndex = 72528;

	class MonoScrollRedDot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _TopOrLeftTransform; // 0x18
		::UnityEngine::Transform* _BottomOrRightTransform; // 0x20
		::System::Single _Offset; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _RedDotRootList; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _RedDotChildList; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* _RedDotChildCountList; // 0x40
		::UnityEngine::UI::ScrollRect* _ScrollRect; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* tempPoints; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT__CTOR_OFFSET))(this);
		}

		::System::Void ClearRedDotRoots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT_CLEARREDDOTROOTS_OFFSET))(this);
		}

		::System::Void AddRedDotRoot(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT_ADDREDDOTROOT_OFFSET))(this, a1);
		}

		::System::Void SetupScrollRedDot(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT_SETUPSCROLLREDDOT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnScrollRectValueChanged(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT_ONSCROLLRECTVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void _RefreshScrollRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT__REFRESHSCROLLREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshUIDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT__REFRESHUIDATAS_OFFSET))(this);
		}

		::System::Void _RefreshRedDotChildCountList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT__REFRESHREDDOTCHILDCOUNTLIST_OFFSET))(this);
		}

		::System::Boolean _CheckAndRefreshUIDatas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT__CHECKANDREFRESHUIDATAS_OFFSET))(this);
		}

		::System::Void _CheckScrollRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT__CHECKSCROLLREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowingRedDot(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSCROLLREDDOT__ISSHOWINGREDDOT_OFFSET))(this, a1);
		}
	};
}
