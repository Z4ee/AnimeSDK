#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8116AE3B07301E74;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE241E60)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_METHOD_5_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0xE241DA0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE2421F0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_START_OFFSET UNITYSDK_OFFSET(0xE241AE0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING__CCTOR_OFFSET UNITYSDK_OFFSET(0xE2422D0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0xE2422C0)

namespace RPG::Client::TrainParty::Mapping
{
	inline static constexpr unsigned int SlotBtnMapping_TypeDefinitionIndex = 74276;

	class SlotBtnMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_FIHGKAPBIKF()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(SlotBtnMapping_TypeDefinitionIndex)->GetStaticField(0x12E60);
		}
		::System::UInt32 _SlotID; // 0x18
		::UnityEngine::Vector3 IKKNJMJCDOJ; // 0x1C
		::UnityEngine::Transform* OJAHLJGABMJ; // 0x28
		::UnityEngine::RectTransform* BDCKIHNMDDK; // 0x30
		::UnityEngine::RectTransform* EODDCCMLIHH; // 0x38
		::UnityEngine::Camera* DMBMOHJLNEN; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_ONDESTROY_OFFSET))(this);
		}

		::Class_1_8116AE3B07301E74* Method_5_AECF8BEC293ED42A()
		{
			return ((::Class_1_8116AE3B07301E74*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_METHOD_5_AECF8BEC293ED42A_OFFSET))(this);
		}
	};
}
