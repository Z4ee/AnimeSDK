#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x802600)
#define MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x802700)
#define MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x158D6360)
#define MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x158D64C0)
#define MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x802710)
#define MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x802780)

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int DisplayBaseTransformData_TypeDefinitionIndex = 41064;

	struct alignas(4) DisplayBaseTransformData
	{
		::UnityEngine::Vector3 Pos; // 0x10
		::System::Single Yaw; // 0x1C
		::System::Int32 State; // 0x20

		static ::System::Boolean op_Equality(::MoleMole::DisplayCase::DisplayBaseTransformData a, ::MoleMole::DisplayCase::DisplayBaseTransformData b)
		{
			return ((::System::Boolean(*)(::MoleMole::DisplayCase::DisplayBaseTransformData, ::MoleMole::DisplayCase::DisplayBaseTransformData))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::MoleMole::DisplayCase::DisplayBaseTransformData a, ::MoleMole::DisplayCase::DisplayBaseTransformData b)
		{
			return ((::System::Boolean(*)(::MoleMole::DisplayCase::DisplayBaseTransformData, ::MoleMole::DisplayCase::DisplayBaseTransformData))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYBASETRANSFORMDATA___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
