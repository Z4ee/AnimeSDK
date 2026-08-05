#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoWayPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOWAYPATH_FINDCLOSESTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x179204A0)
#define MOLEMOLE_MONOWAYPATH_FINDNEXTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x17920640)
#define MOLEMOLE_MONOWAYPATH_GETWAYPOINTBYPOINTNAME_OFFSET UNITYSDK_OFFSET(0x17920920)
#define MOLEMOLE_MONOWAYPATH_GETWAYPOINT_OFFSET UNITYSDK_OFFSET(0x17920890)
#define MOLEMOLE_MONOWAYPATH_INIT_OFFSET UNITYSDK_OFFSET(0x17920190)
#define MOLEMOLE_MONOWAYPATH_UPDATE_OFFSET UNITYSDK_OFFSET(0x1791FF50)
#define MOLEMOLE_MONOWAYPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x17920A30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoWayPath_TypeDefinitionIndex = 82209;

	class MonoWayPath : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::MonoWayPoint*>* wayPathList; // 0x18
		::System::Int32 minTime; // 0x20
		::System::Single timerForNpcBorn; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_UPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_INIT_OFFSET))(this);
		}

		::System::Void FindClosestWayPoint(::UnityEngine::Vector3 a1, ::MoleMole::MonoWayPoint*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::MonoWayPoint*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_FINDCLOSESTWAYPOINT_OFFSET))(this, a1, a2);
		}

		::MoleMole::MonoWayPoint* FindNextWayPoint(::MoleMole::MonoWayPoint* a1)
		{
			return ((::MoleMole::MonoWayPoint*(*)(::PVOID, ::MoleMole::MonoWayPoint*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_FINDNEXTWAYPOINT_OFFSET))(this, a1);
		}

		::MoleMole::MonoWayPoint* GetWayPoint(::System::Int32 a1)
		{
			return ((::MoleMole::MonoWayPoint*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_GETWAYPOINT_OFFSET))(this, a1);
		}

		::MoleMole::MonoWayPoint* GetWayPointByPointName(::System::String* a1)
		{
			return ((::MoleMole::MonoWayPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOWAYPATH_GETWAYPOINTBYPOINTNAME_OFFSET))(this, a1);
		}
	};
}
