#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_7174CBF551B30FEB;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E709A6395EE1661C_CLEANUP_OFFSET UNITYSDK_OFFSET(0x10B839B0)
#define CLASS_1_E709A6395EE1661C_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x10B82470)
#define CLASS_1_E709A6395EE1661C_METHOD_1_14262598FEE6A710_OFFSET UNITYSDK_OFFSET(0x10B83A00)
#define CLASS_1_E709A6395EE1661C_METHOD_1_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0x10B83E80)
#define CLASS_1_E709A6395EE1661C_METHOD_1_2EDAC8CAFF864AE8_OFFSET UNITYSDK_OFFSET(0x10B853D0)
#define CLASS_1_E709A6395EE1661C_METHOD_1_3A49C09EF3BD48C7_OFFSET UNITYSDK_OFFSET(0x10B82740)
#define CLASS_1_E709A6395EE1661C_METHOD_1_74EF193F2F137AA1_OFFSET UNITYSDK_OFFSET(0x10B83F60)
#define CLASS_1_E709A6395EE1661C_METHOD_1_7B0365A8073C120F_OFFSET UNITYSDK_OFFSET(0x10B85060)
#define CLASS_1_E709A6395EE1661C_METHOD_1_8D9B805189185D73_OFFSET UNITYSDK_OFFSET(0x10B854C0)
#define CLASS_1_E709A6395EE1661C_METHOD_1_B9A1B6B9C7924429_OFFSET UNITYSDK_OFFSET(0x10B82D60)
#define CLASS_1_E709A6395EE1661C_METHOD_1_C9072C01C81FE8E4_OFFSET UNITYSDK_OFFSET(0x10B86130)
#define CLASS_1_E709A6395EE1661C_METHOD_1_EA3D1CD3EBD52EBA_OFFSET UNITYSDK_OFFSET(0x10B859B0)
#define CLASS_1_E709A6395EE1661C_METHOD_1_EBF4080E43D85DFE_OFFSET UNITYSDK_OFFSET(0x10B82C10)
#define CLASS_1_E709A6395EE1661C_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10B83870)
#define CLASS_1_E709A6395EE1661C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B822C0)

inline static constexpr unsigned int Class_1_E709A6395EE1661C_TypeDefinitionIndex = 62607;

class Class_1_E709A6395EE1661C : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_3; // 0x10
	::Class_1_24C2E7EF22229C6A* Field_1_1; // 0x18
	::Class_3_1A92845FAFA5EC77* Field_1_2; // 0x20
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_0; // 0x28

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void LateExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_LATEEXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_TEARDOWN_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_CLEANUP_OFFSET))(this);
	}

	::System::Void Method_1_3A49C09EF3BD48C7(::Class_2_9DD8A46984F1AFFD* a1, ::Class_1_7174CBF551B30FEB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_1_7174CBF551B30FEB*))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_METHOD_1_3A49C09EF3BD48C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2368DFE07F28F7DA(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_METHOD_1_2368DFE07F28F7DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBF4080E43D85DFE(::Class_2_9DD8A46984F1AFFD* a1, ::Class_1_7174CBF551B30FEB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_1_7174CBF551B30FEB*))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_METHOD_1_EBF4080E43D85DFE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Bounds Method_1_14262598FEE6A710(::Class_1_7174CBF551B30FEB* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Class_1_7174CBF551B30FEB*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_METHOD_1_14262598FEE6A710_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_74EF193F2F137AA1(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::Il2CppArray<::UnityEngine::Vector3>* a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3& a10)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_METHOD_1_74EF193F2F137AA1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::UnityEngine::Vector3 Method_1_7B0365A8073C120F(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_METHOD_1_7B0365A8073C120F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_2EDAC8CAFF864AE8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_METHOD_1_2EDAC8CAFF864AE8_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_8D9B805189185D73(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Single a7)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_METHOD_1_8D9B805189185D73_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_EA3D1CD3EBD52EBA(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::System::Single a9, ::UnityEngine::Vector3& a10)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_METHOD_1_EA3D1CD3EBD52EBA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_B9A1B6B9C7924429(::Class_2_9DD8A46984F1AFFD* a1, ::Class_1_7174CBF551B30FEB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_1_7174CBF551B30FEB*))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_METHOD_1_B9A1B6B9C7924429_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C9072C01C81FE8E4(::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>*, ::Class_2_9DD8A46984F1AFFD*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C_METHOD_1_C9072C01C81FE8E4_OFFSET))(this, a1, a2, a3, a4);
	}
};
