#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_103;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_FD51057495DB654F;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x19B7E770)
#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19B7E810)
#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x19B7E860)
#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x19B7E6F0)
#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x19B7E660)
#define RPG_CLIENT_LITTLEGAME_BASEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B7E970)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseMonoView_TypeDefinitionIndex = 72573;

	class BaseMonoView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_GETCENTERPOSITION_OFFSET))(this);
		}

		::UnityEngine::Transform* GetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_GETTRANSFORM_OFFSET))(this);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOVIEW_SAFESETACTIVE_OFFSET))(this, a1);
		}
	};
}
