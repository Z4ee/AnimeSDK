#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_GET_TEAMMEMBERANCHORS_OFFSET UNITYSDK_OFFSET(0x1C1B4980)
#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_METHOD_5_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x1C1B4050)
#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_START_OFFSET UNITYSDK_OFFSET(0x1C1B3E90)
#define RPG_CLIENT_CHIMERABATTLEPUZZLEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B49E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraBattlePuzzleArea_TypeDefinitionIndex = 68612;

	class ChimeraBattlePuzzleArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 Index; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* EBKJFCNIDDA; // 0x20
		::UnityEngine::Transform* TeamAnchorRoot; // 0x28
		::UnityEngine::Transform* LeaderAnchor; // 0x30
		::UnityEngine::Transform* WorkAnchor; // 0x38
		::Cinemachine::CinemachineVirtualCamera* Camera; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_START_OFFSET))(this);
		}

		::System::Void Method_5_ED65AE7582736594()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_METHOD_5_ED65AE7582736594_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_TeamMemberAnchors()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERABATTLEPUZZLEAREA_GET_TEAMMEMBERANCHORS_OFFSET))(this);
		}
	};
}
