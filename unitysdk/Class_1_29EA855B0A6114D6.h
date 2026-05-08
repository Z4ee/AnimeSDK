#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0698DCBDF48031C1;
namespace MoleMole::Vehicle { class VehicleCollider; }
namespace MoleMole::Vehicle { class VehicleConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_29EA855B0A6114D6_METHOD_1_3BC6CED10E7E725B_OFFSET UNITYSDK_OFFSET(0x115B1370)
#define CLASS_1_29EA855B0A6114D6_METHOD_1_D26AF63191A5D91D_OFFSET UNITYSDK_OFFSET(0x115B1400)
#define CLASS_1_29EA855B0A6114D6_METHOD_1_EC75D03135F5C02A_OFFSET UNITYSDK_OFFSET(0x115B11F0)
#define CLASS_1_29EA855B0A6114D6__CTOR_OFFSET UNITYSDK_OFFSET(0x115B1120)

inline static constexpr unsigned int Class_1_29EA855B0A6114D6_TypeDefinitionIndex = 79144;

class Class_1_29EA855B0A6114D6 : public ::System::Object
{
public:
	::MoleMole::Vehicle::VehicleConfig* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Vehicle::VehicleCollider*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Vehicle::VehicleCollider*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_29EA855B0A6114D6* a1, ::MoleMole::Vehicle::VehicleConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29EA855B0A6114D6*, ::MoleMole::Vehicle::VehicleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_29EA855B0A6114D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EC75D03135F5C02A(::Il2CppArray<::MoleMole::Vehicle::VehicleCollider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Vehicle::VehicleCollider*>*))((::PBYTE)hIl2Cpp + CLASS_1_29EA855B0A6114D6_METHOD_1_EC75D03135F5C02A_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BC6CED10E7E725B(::MoleMole::Vehicle::VehicleCollider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleCollider*))((::PBYTE)hIl2Cpp + CLASS_1_29EA855B0A6114D6_METHOD_1_3BC6CED10E7E725B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D26AF63191A5D91D(::UnityEngine::Transform* a1, ::Class_1_0698DCBDF48031C1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_1_0698DCBDF48031C1*))((::PBYTE)hIl2Cpp + CLASS_1_29EA855B0A6114D6_METHOD_1_D26AF63191A5D91D_OFFSET))(this, a1, a2);
	}
};
