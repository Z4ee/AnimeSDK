#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }

#define MOLEMOLE_GIZMOSUTILSBEHAVIOR_CLEARINSTANCE_OFFSET UNITYSDK_OFFSET(0x149ECFD0)
#define MOLEMOLE_GIZMOSUTILSBEHAVIOR_FINDINSTANCE_OFFSET UNITYSDK_OFFSET(0x149ECDA0)
#define MOLEMOLE_GIZMOSUTILSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x149ED1B0)

namespace MoleMole
{
	inline static constexpr unsigned int GizmosUtilsBehavior_TypeDefinitionIndex = 48029;

	class GizmosUtilsBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Action* OnDrawGizmosAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GIZMOSUTILSBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::MoleMole::GizmosUtilsBehavior* FindInstance()
		{
			return ((::MoleMole::GizmosUtilsBehavior*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GIZMOSUTILSBEHAVIOR_FINDINSTANCE_OFFSET))();
		}

		static ::System::Void ClearInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GIZMOSUTILSBEHAVIOR_CLEARINSTANCE_OFFSET))();
		}
	};
}
