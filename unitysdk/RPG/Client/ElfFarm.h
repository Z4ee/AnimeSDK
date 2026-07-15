#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ElfCell; }
namespace RPG::Client { class ElfFarmData; }
namespace RPG::Client { class ElfField; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELFFARM_GETCELL_OFFSET UNITYSDK_OFFSET(0x18E20B30)
#define RPG_CLIENT_ELFFARM_GETVCAMERAGO_OFFSET UNITYSDK_OFFSET(0x18E20E00)
#define RPG_CLIENT_ELFFARM_INIT_OFFSET UNITYSDK_OFFSET(0x18E20510)
#define RPG_CLIENT_ELFFARM_SETVCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0x18E20F50)
#define RPG_CLIENT_ELFFARM_UNINIT_OFFSET UNITYSDK_OFFSET(0x18E20A20)
#define RPG_CLIENT_ELFFARM_UPDATEFARM_OFFSET UNITYSDK_OFFSET(0x18E207A0)
#define RPG_CLIENT_ELFFARM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E21100)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarm_TypeDefinitionIndex = 65609;

	class ElfFarm : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 FarmID; // 0x18
		::UnityEngine::GameObject* VCameraGo; // 0x20
		::UnityEngine::GameObject* VCameraGo4x3; // 0x28
		::Il2CppArray<::RPG::Client::ElfField*>* Fields; // 0x30
		::UnityEngine::Transform* CropsAttachPoint; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARM__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ElfFarmData* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmData*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARM_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateFarm(::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARM_UPDATEFARM_OFFSET))(this, a1);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARM_UNINIT_OFFSET))(this);
		}

		::RPG::Client::ElfCell* GetCell(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ElfCell*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARM_GETCELL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GetVCameraGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARM_GETVCAMERAGO_OFFSET))(this);
		}

		::System::Void SetVCameraActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARM_SETVCAMERAACTIVE_OFFSET))(this, a1);
		}
	};
}
