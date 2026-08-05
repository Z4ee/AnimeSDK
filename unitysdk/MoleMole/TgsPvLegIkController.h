#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class TgsPvLegIkController_LimbNode; }
namespace RootMotion::FinalIK { class LimbIK; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_TGSPVLEGIKCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x16891790)
#define MOLEMOLE_TGSPVLEGIKCONTROLLER_GET_LIMBNODES_OFFSET UNITYSDK_OFFSET(0x16891740)
#define MOLEMOLE_TGSPVLEGIKCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x16891750)
#define MOLEMOLE_TGSPVLEGIKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16891950)

namespace MoleMole
{
	inline static constexpr unsigned int TgsPvLegIkController_TypeDefinitionIndex = 56646;

	class TgsPvLegIkController : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Animator* animator; // 0x58
		::System::Collections::Generic::List_1<::RootMotion::FinalIK::LimbIK*>* limbs; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::TgsPvLegIkController_LimbNode*>* _limbNodes; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TGSPVLEGIKCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::TgsPvLegIkController_LimbNode*>* get_LimbNodes()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::TgsPvLegIkController_LimbNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TGSPVLEGIKCONTROLLER_GET_LIMBNODES_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TGSPVLEGIKCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TGSPVLEGIKCONTROLLER_AWAKE_OFFSET))(this);
		}
	};
}
