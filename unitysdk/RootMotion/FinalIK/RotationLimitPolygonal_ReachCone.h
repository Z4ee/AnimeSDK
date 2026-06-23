#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_CALCULATE_OFFSET UNITYSDK_OFFSET(0x1E15F710)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_GET_A_OFFSET UNITYSDK_OFFSET(0x1E15F4D0)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_GET_B_OFFSET UNITYSDK_OFFSET(0x1E15F510)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_GET_C_OFFSET UNITYSDK_OFFSET(0x1E15F550)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E15F700)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_GET_O_OFFSET UNITYSDK_OFFSET(0x1E15F490)
#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E15F590)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RotationLimitPolygonal_ReachCone_TypeDefinitionIndex = 38140;

	class RotationLimitPolygonal_ReachCone : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* tetrahedron; // 0x10
		::System::Single volume; // 0x18
		::UnityEngine::Vector3 S; // 0x1C
		::UnityEngine::Vector3 B; // 0x28

		::System::Void _ctor(::UnityEngine::Vector3 _o, ::UnityEngine::Vector3 _a, ::UnityEngine::Vector3 _b, ::UnityEngine::Vector3 _c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE__CTOR_OFFSET))(this, _o, _a, _b, _c);
		}

		::UnityEngine::Vector3 get_o()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_GET_O_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_a()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_GET_A_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_b()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_GET_B_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_c()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_GET_C_OFFSET))(this);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Calculate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_REACHCONE_CALCULATE_OFFSET))(this);
		}
	};
}
