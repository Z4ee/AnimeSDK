#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHIMERAEVALUATIONPOSITIONCONTROLLER_REFRESHPOSITION_OFFSET UNITYSDK_OFFSET(0xA028670)
#define RPG_CLIENT_CHIMERAEVALUATIONPOSITIONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA028C60)
#define RPG_CLIENT_CHIMERAEVALUATIONPOSITIONCONTROLLER__REFRESHINFOPOSITION_OFFSET UNITYSDK_OFFSET(0xA028B30)
#define RPG_CLIENT_CHIMERAEVALUATIONPOSITIONCONTROLLER__REFRESHNAMEPOSITION_OFFSET UNITYSDK_OFFSET(0xA0288D0)
#define RPG_CLIENT_CHIMERAEVALUATIONPOSITIONCONTROLLER__REFRESHTALKPOPPOSITION_OFFSET UNITYSDK_OFFSET(0xA028A00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEvaluationPositionController_TypeDefinitionIndex = 66776;

	class ChimeraEvaluationPositionController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* NodeList; // 0x18
		::System::Single LikeBtnCoolDown; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* NameOffsetParams; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* TalkPopOffsetParams; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* InfoOffsetParams; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONPOSITIONCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshPosition(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* nodeList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONPOSITIONCONTROLLER_REFRESHPOSITION_OFFSET))(this, nodeList);
		}

		::System::Void _RefreshNamePosition(::UnityEngine::RectTransform* node, ::UnityEngine::Vector3 newLocalPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONPOSITIONCONTROLLER__REFRESHNAMEPOSITION_OFFSET))(this, node, newLocalPosition);
		}

		::System::Void _RefreshTalkPopPosition(::UnityEngine::RectTransform* node, ::UnityEngine::Vector3 newLocalPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONPOSITIONCONTROLLER__REFRESHTALKPOPPOSITION_OFFSET))(this, node, newLocalPosition);
		}

		::System::Void _RefreshInfoPosition(::UnityEngine::RectTransform* node, ::UnityEngine::Vector3 newLocalPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONPOSITIONCONTROLLER__REFRESHINFOPOSITION_OFFSET))(this, node, newLocalPosition);
		}
	};
}
