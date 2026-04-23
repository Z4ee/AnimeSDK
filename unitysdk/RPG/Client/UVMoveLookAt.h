#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class UVMoveLookAtSolver; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UVMOVELOOKAT_RESET_OFFSET UNITYSDK_OFFSET(0xB445260)
#define RPG_CLIENT_UVMOVELOOKAT_SOLVE_OFFSET UNITYSDK_OFFSET(0xB444EA0)
#define RPG_CLIENT_UVMOVELOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0xB4453F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UVMoveLookAt_TypeDefinitionIndex = 64784;

	class UVMoveLookAt : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ShowGizmos; // 0x18
		::System::Boolean ShowEyeRange; // 0x19
		::System::Boolean ShowEyeRay; // 0x1A
		::System::Collections::Generic::List_1<::RPG::Client::UVMoveLookAtSolver*>* EyeSolvers; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UVMOVELOOKAT__CTOR_OFFSET))(this);
		}

		::System::Void Solve(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UVMOVELOOKAT_SOLVE_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UVMOVELOOKAT_RESET_OFFSET))(this);
		}
	};
}
