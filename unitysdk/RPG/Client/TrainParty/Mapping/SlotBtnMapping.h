#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D704B32D505CBFB3;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB332490)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_METHOD_5_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0xB3323E0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB332820)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_START_OFFSET UNITYSDK_OFFSET(0xB332120)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3328E0)
#define RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0xB3328D0)

namespace RPG::Client::TrainParty::Mapping
{
	inline static constexpr unsigned int SlotBtnMapping_TypeDefinitionIndex = 68643;

	class SlotBtnMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_Field_5_6()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(SlotBtnMapping_TypeDefinitionIndex)->GetStaticField(0xDD50);
		}
		::System::UInt32 _SlotID; // 0x18
		::UnityEngine::Vector3 Field_5_1; // 0x1C
		::UnityEngine::Transform* Field_5_2; // 0x28
		::UnityEngine::RectTransform* Field_5_3; // 0x30
		::UnityEngine::RectTransform* Field_5_4; // 0x38
		::UnityEngine::Camera* Field_5_5; // 0x40

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

		::Class_1_D704B32D505CBFB3* Method_5_AECF8BEC293ED42A()
		{
			return ((::Class_1_D704B32D505CBFB3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_MAPPING_SLOTBTNMAPPING_METHOD_5_AECF8BEC293ED42A_OFFSET))(this);
		}
	};
}
