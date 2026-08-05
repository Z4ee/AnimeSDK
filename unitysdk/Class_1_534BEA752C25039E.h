#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleModelNodes.h"
#include "unitysdk/Struct_2_A5F3F97A94B01E4C.h"
#include "unitysdk/Struct_2_FBA4730A60751401_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Vehicle { class VehicleConfig; }
namespace UnityEngine { class Transform; }

#define CLASS_1_534BEA752C25039E_METHOD_1_04014FBC38E74574_OFFSET UNITYSDK_OFFSET(0xB19B830)
#define CLASS_1_534BEA752C25039E_METHOD_1_111CDF05B81A85A9_OFFSET UNITYSDK_OFFSET(0xB19BA50)
#define CLASS_1_534BEA752C25039E_METHOD_1_35326251BF302370_OFFSET UNITYSDK_OFFSET(0xB19A600)
#define CLASS_1_534BEA752C25039E_METHOD_1_DDA215C97C5AEA90_OFFSET UNITYSDK_OFFSET(0xB19B7C0)
#define CLASS_1_534BEA752C25039E__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB19A5D0)
#define CLASS_1_534BEA752C25039E__CTOR_OFFSET UNITYSDK_OFFSET(0xB19A5B0)

inline static constexpr unsigned int Class_1_534BEA752C25039E_TypeDefinitionIndex = 90613;

class Class_1_534BEA752C25039E : public ::System::Object
{
public:
	::MoleMole::Vehicle::VehicleConfig* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_7; // 0x18
	::UnityEngine::Transform* Field_1_6; // 0x20
	::System::Single Field_1_1; // 0x28

	::System::Void _ctor(::MoleMole::Vehicle::VehicleConfig* a1, ::MoleMole::Vehicle::VehicleModelNodes& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleConfig*, ::MoleMole::Vehicle::VehicleModelNodes&))((::PBYTE)hIl2Cpp + CLASS_1_534BEA752C25039E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_534BEA752C25039E* a1, ::MoleMole::Vehicle::VehicleConfig* a2, ::MoleMole::Vehicle::VehicleModelNodes& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_534BEA752C25039E*, ::MoleMole::Vehicle::VehicleConfig*, ::MoleMole::Vehicle::VehicleModelNodes&))((::PBYTE)hIl2Cpp + CLASS_1_534BEA752C25039E__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_FBA4730A60751401_1 Method_1_35326251BF302370(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::Struct_2_A5F3F97A94B01E4C& a3, ::System::Single a4)
	{
		return ((::Struct_2_FBA4730A60751401_1(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::Struct_2_A5F3F97A94B01E4C&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_534BEA752C25039E_METHOD_1_35326251BF302370_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_04014FBC38E74574(::System::Single a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_534BEA752C25039E_METHOD_1_04014FBC38E74574_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_DDA215C97C5AEA90(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_534BEA752C25039E_METHOD_1_DDA215C97C5AEA90_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_1_111CDF05B81A85A9(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_534BEA752C25039E_METHOD_1_111CDF05B81A85A9_OFFSET))(this, a1);
	}
};
