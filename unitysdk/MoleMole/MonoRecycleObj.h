#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_345E15CFD2E6ECA4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONORECYCLEOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x191AD070)
#define MOLEMOLE_MONORECYCLEOBJ_METHOD_8_01BEC92F3CDF67C6_OFFSET UNITYSDK_OFFSET(0x191AD950)
#define MOLEMOLE_MONORECYCLEOBJ_METHOD_8_3D25BCF2F8C75054_OFFSET UNITYSDK_OFFSET(0x191AD560)
#define MOLEMOLE_MONORECYCLEOBJ_METHOD_8_8424C960A4A58F2F_OFFSET UNITYSDK_OFFSET(0x191AD4F0)
#define MOLEMOLE_MONORECYCLEOBJ_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x191AD760)
#define MOLEMOLE_MONORECYCLEOBJ_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x191AD1E0)
#define MOLEMOLE_MONORECYCLEOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x191AD810)
#define MOLEMOLE_MONORECYCLEOBJ___BASE_ONDOUPDATE_OFFSET UNITYSDK_OFFSET(0x191AD8C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRecycleObj_TypeDefinitionIndex = 70337;

	class MonoRecycleObj : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::UnityEngine::GameObject* originObj; // 0x30
		::System::UInt32 timeInternalMS; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* positions; // 0x40
		::UnityEngine::Vector3 rotationEuler; // 0x48
		::System::Single thresholdY; // 0x54
		::System::Int32 Field_8_11; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_345E15CFD2E6ECA4*>* generatedItemDict; // 0x60
		::System::Collections::Generic::Queue_1<::Class_1_345E15CFD2E6ECA4*>* recycledItems; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* toRecycleList; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_AWAKE_OFFSET))(this);
		}

		::System::Void OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_ONDOUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDoUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ___BASE_ONDOUPDATE_OFFSET))(this, a1);
		}

		::System::Void Method_8_3D25BCF2F8C75054(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_METHOD_8_3D25BCF2F8C75054_OFFSET))(this, a1);
		}

		::Class_1_345E15CFD2E6ECA4* Method_8_01BEC92F3CDF67C6()
		{
			return ((::Class_1_345E15CFD2E6ECA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_METHOD_8_01BEC92F3CDF67C6_OFFSET))(this);
		}

		::System::Void Method_8_8424C960A4A58F2F(::Class_1_345E15CFD2E6ECA4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_345E15CFD2E6ECA4*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORECYCLEOBJ_METHOD_8_8424C960A4A58F2F_OFFSET))(this, a1);
		}
	};
}
