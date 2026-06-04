#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED17B6CCBE9C897A_EEffectorSpace.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_ED17B6CCBE9C897A;
namespace RPG::Client { class AttachPointMapping; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FABRIK_AWAKE_OFFSET UNITYSDK_OFFSET(0xB963B10)
#define RPG_CLIENT_FABRIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0xB963550)
#define RPG_CLIENT_FABRIK_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xB9635E0)
#define RPG_CLIENT_FABRIK_IKRESET_OFFSET UNITYSDK_OFFSET(0xB963A80)
#define RPG_CLIENT_FABRIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xB9637B0)
#define RPG_CLIENT_FABRIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xB963630)
#define RPG_CLIENT_FABRIK__CTOR_OFFSET UNITYSDK_OFFSET(0xB963B60)

namespace RPG::Client
{
	inline static constexpr unsigned int FABRIK_TypeDefinitionIndex = 64003;

	class FABRIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IKEnabled; // 0x18
		::System::Boolean manualUpdate; // 0x19
		::System::Boolean keepTipRotation; // 0x1A
		::UnityEngine::Transform* effectorTarget; // 0x20
		::UnityEngine::Vector3 effectorPosition; // 0x28
		::Class_1_ED17B6CCBE9C897A_EEffectorSpace effectorSpace; // 0x34
		::System::Single fadeInTime; // 0x38
		::System::Single fadeOutTime; // 0x3C
		::System::Int32 maxSolveIterations; // 0x40
		::UnityEngine::Transform* tipBone; // 0x48
		::System::Int32 spineBoneNum; // 0x50
		::Class_1_ED17B6CCBE9C897A* Field_5_11; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void IKReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_IKRESET_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_AWAKE_OFFSET))(this);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FABRIK_GET_WEIGHT_OFFSET))(this);
		}
	};
}
