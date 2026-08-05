#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E8C6F87138B2C440;
class Class_3_846182BC37DE078E_Class_1_CB8A78CCBB2B128D;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define MOLEMOLE_MONONAVMESHHANDLER_CALCULATEPATH_OFFSET UNITYSDK_OFFSET(0x17392220)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_DEBUGPATHROOT_OFFSET UNITYSDK_OFFSET(0x17392100)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_MOVEPATHDEBUGGER_OFFSET UNITYSDK_OFFSET(0x17391EA0)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_NAVMESHHELPER_OFFSET UNITYSDK_OFFSET(0x17392110)
#define MOLEMOLE_MONONAVMESHHANDLER_GET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0x173920F0)
#define MOLEMOLE_MONONAVMESHHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x173923A0)
#define MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x173926C0)
#define MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17392800)
#define MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_CCAB1FEBC1E7CB11_OFFSET UNITYSDK_OFFSET(0x17392680)
#define MOLEMOLE_MONONAVMESHHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x173924E0)
#define MOLEMOLE_MONONAVMESHHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17392580)
#define MOLEMOLE_MONONAVMESHHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17392540)
#define MOLEMOLE_MONONAVMESHHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17392470)
#define MOLEMOLE_MONONAVMESHHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173925D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoNavmeshHandler_TypeDefinitionIndex = 90343;

	class MonoNavmeshHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AI::NavMeshAgent* navMeshAgent; // 0x18
		::UnityEngine::Transform* target; // 0x20
		::System::Single colliderRadius; // 0x28
		::System::Boolean withColliderOffset; // 0x2C
		::System::Boolean autoCalculate; // 0x2D
		::Class_3_846182BC37DE078E_Class_1_CB8A78CCBB2B128D* Field_5_4; // 0x30
		::System::Int32 cornersLength; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* calculatePath; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_9; // 0x48
		::UnityEngine::Transform* debugPathRoot; // 0x50
		::Class_2_E8C6F87138B2C440* Field_5_15; // 0x58
		::System::Boolean Field_5_14; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER__CTOR_OFFSET))(this);
		}

		::Class_3_846182BC37DE078E_Class_1_CB8A78CCBB2B128D* get_movePathDebugger()
		{
			return ((::Class_3_846182BC37DE078E_Class_1_CB8A78CCBB2B128D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_MOVEPATHDEBUGGER_OFFSET))(this);
		}

		::System::Int32 get_PathIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_PATHINDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_DebugPathRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_DEBUGPATHROOT_OFFSET))(this);
		}

		::Class_2_E8C6F87138B2C440* get_navmeshHelper()
		{
			return ((::Class_2_E8C6F87138B2C440*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_GET_NAVMESHHELPER_OFFSET))(this);
		}

		::System::Void CalculatePath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_CALCULATEPATH_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_5_CCAB1FEBC1E7CB11()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_CCAB1FEBC1E7CB11_OFFSET))(this);
		}

		::System::Void Method_5_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_56CE4AFC5339F746_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONAVMESHHANDLER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
